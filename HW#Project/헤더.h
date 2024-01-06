#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib,"winmm.lib")

#include <stdio.h>
#include <stdlib.h>		
#include <string.h>		
#include <windows.h>	 
#include <conio.h>		
#include <time.h>		
#include <mmsystem.h>	

#define SPACE 32		// 키보드의 ASC값
#define ENTER 13		
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ESC 27

#define MAX_CITY 26		// 총 도시수(시작, 도박, 황금열쇠 포함)

#define col GetStdHandle(STD_OUTPUT_HANDLE)								// 콘솔창의 핸들정보를 받아옴
#define RED SetConsoleTextAttribute(col,0x000c);						// 빨간색
#define BLUE SetConsoleTextAttribute(col,0x0001 | 0x0008);				// 파란색
#define YELGREEN SetConsoleTextAttribute(col, 0x00a);					// 연두색
#define WHITE SetConsoleTextAttribute(col, 0x000f);						// 흰색
#define YELLOW SetConsoleTextAttribute(col,0x000e);						// 노란색
#define FLUORESCENT SetConsoleTextAttribute(col, 0x000d);				// 형광색
#define GOLD SetConsoleTextAttribute(col, 0x0006);						// 금색
#define WINE SetConsoleTextAttribute(col, 0x0005);						// 와인색
#define GREEN SetConsoleTextAttribute(col,0x0002);						// 초록색
#define SKY SetConsoleTextAttribute(col, 0x000b);						// 하늘색
#define VIOLET SetConsoleTextAttribute(col, 0x0001 | 0x008 | 0x00c);	// 보라색
#define BLOOD  SetConsoleTextAttribute(col, 0x0004);					// 검붉은색
#define BLUE_GREEN SetConsoleTextAttribute(col, 0x0003);				// 청녹색

#define Toll 3/2														// 통행료 부과시의 비율												
#define Highest 2160000													// 가장 비싼 도시의 가격
#define Music "Rhythm_Canon.wav"										// 음악 파일명

typedef struct {
	char name[50];		// Player 이름
	int money;			// Player가 보유한 돈
	int pos;			// Player의 위치(출발-0)
	char symbol[4];		// Player의 모습(상징)
	int citycount;		// Player가 보유한 도시 수
	int deathcount;		// 0: 죽음(탈락), 1: 생존(게임 중)
	int deathturn;		// 죽은 턴수(랭킹 측정용)
	int ranking;		// 플레이어의 현재 랭킹
}P_info;

typedef struct {
	char name[40];	// 도시 이름
	int price[4];	// 도시 가격 (0: 토지, 1: 집, 2: 마을, 3: 도시)
	int size;		// 도시의 단계 (0: 토지, 1: 집, 2: 마을, 3: 도시)
	int x[5];		// 건물 x좌표, player1 x좌표, player2 x좌표 , player3 x좌표, player4 x좌표
	int y[5];		// 건물 y좌표, player1 y좌표, player2 y좌표 , player3 y좌표, player4 y좌표
	char owner[50];	// 도시의 주인
}C_info;

typedef struct {
	int mode;		// 1: 1vs1, 2: 1vs1vs1, 3: 1vs1vs1vs1
	int turn;		// 0:Player1의 턴, 1:Player2의 턴, 2:Player3의 턴, 3:Player4의 턴
	int totalturn;	// 게임이 진행된 총 턴수
}G_info;

void gotoxy(int x, int y);					// 좌표 설정 함수
void Opening();								// 시작화면을 보여주는 함수
void OneCycle(int a);						// 한 바퀴 돌아 출발지점을 지날 때 완주 보상(돈)을 주는 함수
void Situation(int mode);					// 각 플레이어의 현재 위치, 이름(정보까지), 자산(정보까지), 보유 도시 수(정보는x)를 보여주는 함수
int Modeselect();							// 시작시 mode를 선택하는 함수(mode 1:1vs1, 2:1vs1vs1, 3:1vs1vs1vs1, 4:이어하기)
int Dice();									// 주사위를 굴리는 함수(1~6)
void World_map();							// 게임 판을 보여주는 함수
void ShowMove(int a);						// 플레이어의 이동을 보여주는 함수
void ShowSize(int a);						// 도시의 크기와 소유주를 시각적 정보로 보여주는 함수
void Clear();								// 정보 업데이트 전 기존의 정보들을 화면에서 지워주는 함수
void Position(int a);						// 누구의 턴인지 주사위를 굴리고 몇이 나왔는지를 보여주며 이동정보를 보여주는 함수(ShowMove와 연계)
//int Win(int mode);						// 승패를 판단하고 순위를 조정 승패가 났을경우 Ending창으로 넘어가는 함수(ingameranking에 이 기능을 넣음)
void info_Update(int mode);					// 플레이어가 보유하고 있는 돈과 보유하고 있는 도시의 수 현재의 랭킹정보를 보여주는 함수
int Answer(int a, int b);					// 예 아니오를 선택하는 함수
int takeover_development(int a, int mode);	// 도시를 인수하고 업그레이드 하는 함수
void GoldenKey(int a, int mode);			// 황금열쇠에 도착하였을 경우 이벤트가 발생하는 함수
int Trade(int a, int mode);					// 어느 땅에 도착했는지 구분하고 (출발지점, 도박, 황금열쇠, 일반 땅) 그에 따른 이벤트가 발생하게 하는 함수 (일반땅의 경우에는 주인이 없는 경우 계약까지 자신의 땅인 경우 업그레이드까지 상대방의 땅인 경우 통행료 부과 후 인수여부를 물어보는 함수로 넘어감)
void Gambling(int i);						// 도박에 도착하였을 경우 이벤트가 발생하는 함수
void Bankrupt(int mode);					// 파산 위기일 경우 이를 나타내는 함수 그리고 자동 매각 함수를 사용하게 함
int turnchange(int mode, int i);			// 한 사람의 턴이 끝나고 다른 사람의 턴으로 교체하는 함수
int C_Answer(int a, int b);					// 예 아니오를 컴퓨터가 결정하도록 하는 함수
int C_Gambling_Answer(int a);				// 도박에 도착했을 때 컴퓨터의 홀 짝을 선택하는 함수(Answer과 연동)
void CheckCityCount(int j);					// 플레이어의 보유 도시를 파악하는 함수
void Bankrupt_Answer(int j);				// 플레이어가 파산 위기일 때 자동으로 매각해주는 함수
int ingameranking(int mode);				// 게임 진행 중 순위들을 결정하는 함수
void Ending(int mode);						// 게임이 끝나고 순위표및 엔딩이 나오는 함수
void savegame(void);						// ESC키로 게임을 종료할 때 게임 진행 데이터(구조체)를 저장하는 함수
int gamecontinue(int mode);					// 게임을 이어서 플레이 하도록 기존에 저장 한 게임 진행 데이터(구조체)를 불러오는 함수
void ESC_ending(void);						// ESC키로 게임을 종료할 때의 엔딩화면을 보여주는 함수