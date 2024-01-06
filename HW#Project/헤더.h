#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib,"winmm.lib")

#include <stdio.h>
#include <stdlib.h>		
#include <string.h>		
#include <windows.h>	 
#include <conio.h>		
#include <time.h>		
#include <mmsystem.h>	

#define SPACE 32		// Ű������ ASC��
#define ENTER 13		
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ESC 27

#define MAX_CITY 26		// �� ���ü�(����, ����, Ȳ�ݿ��� ����)

#define col GetStdHandle(STD_OUTPUT_HANDLE)								// �ܼ�â�� �ڵ������� �޾ƿ�
#define RED SetConsoleTextAttribute(col,0x000c);						// ������
#define BLUE SetConsoleTextAttribute(col,0x0001 | 0x0008);				// �Ķ���
#define YELGREEN SetConsoleTextAttribute(col, 0x00a);					// ���λ�
#define WHITE SetConsoleTextAttribute(col, 0x000f);						// ���
#define YELLOW SetConsoleTextAttribute(col,0x000e);						// �����
#define FLUORESCENT SetConsoleTextAttribute(col, 0x000d);				// ������
#define GOLD SetConsoleTextAttribute(col, 0x0006);						// �ݻ�
#define WINE SetConsoleTextAttribute(col, 0x0005);						// ���λ�
#define GREEN SetConsoleTextAttribute(col,0x0002);						// �ʷϻ�
#define SKY SetConsoleTextAttribute(col, 0x000b);						// �ϴû�
#define VIOLET SetConsoleTextAttribute(col, 0x0001 | 0x008 | 0x00c);	// �����
#define BLOOD  SetConsoleTextAttribute(col, 0x0004);					// �˺�����
#define BLUE_GREEN SetConsoleTextAttribute(col, 0x0003);				// û���

#define Toll 3/2														// ����� �ΰ����� ����												
#define Highest 2160000													// ���� ��� ������ ����
#define Music "Rhythm_Canon.wav"										// ���� ���ϸ�

typedef struct {
	char name[50];		// Player �̸�
	int money;			// Player�� ������ ��
	int pos;			// Player�� ��ġ(���-0)
	char symbol[4];		// Player�� ���(��¡)
	int citycount;		// Player�� ������ ���� ��
	int deathcount;		// 0: ����(Ż��), 1: ����(���� ��)
	int deathturn;		// ���� �ϼ�(��ŷ ������)
	int ranking;		// �÷��̾��� ���� ��ŷ
}P_info;

typedef struct {
	char name[40];	// ���� �̸�
	int price[4];	// ���� ���� (0: ����, 1: ��, 2: ����, 3: ����)
	int size;		// ������ �ܰ� (0: ����, 1: ��, 2: ����, 3: ����)
	int x[5];		// �ǹ� x��ǥ, player1 x��ǥ, player2 x��ǥ , player3 x��ǥ, player4 x��ǥ
	int y[5];		// �ǹ� y��ǥ, player1 y��ǥ, player2 y��ǥ , player3 y��ǥ, player4 y��ǥ
	char owner[50];	// ������ ����
}C_info;

typedef struct {
	int mode;		// 1: 1vs1, 2: 1vs1vs1, 3: 1vs1vs1vs1
	int turn;		// 0:Player1�� ��, 1:Player2�� ��, 2:Player3�� ��, 3:Player4�� ��
	int totalturn;	// ������ ����� �� �ϼ�
}G_info;

void gotoxy(int x, int y);					// ��ǥ ���� �Լ�
void Opening();								// ����ȭ���� �����ִ� �Լ�
void OneCycle(int a);						// �� ���� ���� ��������� ���� �� ���� ����(��)�� �ִ� �Լ�
void Situation(int mode);					// �� �÷��̾��� ���� ��ġ, �̸�(��������), �ڻ�(��������), ���� ���� ��(������x)�� �����ִ� �Լ�
int Modeselect();							// ���۽� mode�� �����ϴ� �Լ�(mode 1:1vs1, 2:1vs1vs1, 3:1vs1vs1vs1, 4:�̾��ϱ�)
int Dice();									// �ֻ����� ������ �Լ�(1~6)
void World_map();							// ���� ���� �����ִ� �Լ�
void ShowMove(int a);						// �÷��̾��� �̵��� �����ִ� �Լ�
void ShowSize(int a);						// ������ ũ��� �����ָ� �ð��� ������ �����ִ� �Լ�
void Clear();								// ���� ������Ʈ �� ������ �������� ȭ�鿡�� �����ִ� �Լ�
void Position(int a);						// ������ ������ �ֻ����� ������ ���� ���Դ����� �����ָ� �̵������� �����ִ� �Լ�(ShowMove�� ����)
//int Win(int mode);						// ���и� �Ǵ��ϰ� ������ ���� ���а� ������� Endingâ���� �Ѿ�� �Լ�(ingameranking�� �� ����� ����)
void info_Update(int mode);					// �÷��̾ �����ϰ� �ִ� ���� �����ϰ� �ִ� ������ �� ������ ��ŷ������ �����ִ� �Լ�
int Answer(int a, int b);					// �� �ƴϿ��� �����ϴ� �Լ�
int takeover_development(int a, int mode);	// ���ø� �μ��ϰ� ���׷��̵� �ϴ� �Լ�
void GoldenKey(int a, int mode);			// Ȳ�ݿ��迡 �����Ͽ��� ��� �̺�Ʈ�� �߻��ϴ� �Լ�
int Trade(int a, int mode);					// ��� ���� �����ߴ��� �����ϰ� (�������, ����, Ȳ�ݿ���, �Ϲ� ��) �׿� ���� �̺�Ʈ�� �߻��ϰ� �ϴ� �Լ� (�Ϲݶ��� ��쿡�� ������ ���� ��� ������ �ڽ��� ���� ��� ���׷��̵���� ������ ���� ��� ����� �ΰ� �� �μ����θ� ����� �Լ��� �Ѿ)
void Gambling(int i);						// ���ڿ� �����Ͽ��� ��� �̺�Ʈ�� �߻��ϴ� �Լ�
void Bankrupt(int mode);					// �Ļ� ������ ��� �̸� ��Ÿ���� �Լ� �׸��� �ڵ� �Ű� �Լ��� ����ϰ� ��
int turnchange(int mode, int i);			// �� ����� ���� ������ �ٸ� ����� ������ ��ü�ϴ� �Լ�
int C_Answer(int a, int b);					// �� �ƴϿ��� ��ǻ�Ͱ� �����ϵ��� �ϴ� �Լ�
int C_Gambling_Answer(int a);				// ���ڿ� �������� �� ��ǻ���� Ȧ ¦�� �����ϴ� �Լ�(Answer�� ����)
void CheckCityCount(int j);					// �÷��̾��� ���� ���ø� �ľ��ϴ� �Լ�
void Bankrupt_Answer(int j);				// �÷��̾ �Ļ� ������ �� �ڵ����� �Ű����ִ� �Լ�
int ingameranking(int mode);				// ���� ���� �� �������� �����ϴ� �Լ�
void Ending(int mode);						// ������ ������ ����ǥ�� ������ ������ �Լ�
void savegame(void);						// ESCŰ�� ������ ������ �� ���� ���� ������(����ü)�� �����ϴ� �Լ�
int gamecontinue(int mode);					// ������ �̾ �÷��� �ϵ��� ������ ���� �� ���� ���� ������(����ü)�� �ҷ����� �Լ�
void ESC_ending(void);						// ESCŰ�� ������ ������ ���� ����ȭ���� �����ִ� �Լ�