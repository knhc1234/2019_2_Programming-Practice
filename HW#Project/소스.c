#include "헤더.h"

P_info Player[4] = { {"Player1", 5000000, 0, "★", 0, 1, 1, 1},
					{"Player2", 5000000, 0, "♥", 0, 1, 1, 2},
					{"Player3", 5000000, 0, "♣", 0, 1, 1, 3},
					{"Player4", 5000000, 0, "◈", 0, 1, 1, 4}
};

C_info City[MAX_CITY] = {	// 도시 이름, 도시 가격, 도시의 단계, x좌표, y좌표, 도시의 주인 현황									//       x좌표(건물,p1,p2,p3,p4)y좌표(건물,p1,p2,p3,p4)	 
	{"시작",	{0,0,0,0},							0,	{81, 81, 88 ,83,86},	{31, 33, 33 ,33 ,33},	"없음"},					//0		 81 81 88 83 86			31 33 33 33 33	
	{"벨기에",	{100000,200000,300000,400000},		0,	{68,68,75,70,73},		{31,33,33,33,33},		"없음"},					//1		 68 68 75 70 73			31 33 33 33 33		
	{"덴마크",	{120000,240000,360000,480000},		0,	{55,55,62,57,60},		{31,33,33,33,33},		"없음"},  					//2		 55 55 62 57 60			31 33 33 33 33      
	{"프랑스",	{140000,280000,420000,560000},		0,	{42,42,49,44,47},		{31,33,33,33,33},		"없음"},   					//3      42 42 49 44 47			31 33 33 33 33      
	{"케나다",	{160000,320000,480000,640000},		0,	{29,29,36,31,34},		{31,33,33,33,33},		"없음"},					//4      29 29 36 31 34			31 33 33 33 33    
	{"남아공",	{180000,360000,540000,720000},		0,	{16,16,23,18,21},		{31,33,33,33,33},		"없음"},					//5		 16 16 23 18 21			31 33 33 33 33		
	{"도박",	{0,0,0,0},							0,	{3,3,10,5,8},			{31,33,33,33,33},		"없음"}, 					//6		  3  3 10  5  8			31 33 33 33 33    
	{"브라질",	{200000,400000,600000,800000},		0,	{3,3,10,5,8},			{27,29,29,29,29},		"없음"},					//7		  3  3 10  5  8			27 29 29 29 29		      
	{"칠레",	{220000,440000,660000,880000},		0,	{3,3,10,5,8},			{23,25,25,25,25},		"없음"}, 					//8		  3  3 10  5  8			23 25 25 25 25		
	{"대만",	{240000,480000,720000,960000},		0,	{3,3,10,5,8},			{19,21,21,21,21},		"없음"}, 					//9		  3  3 10  5  8			19 21 21 21 21		
	{"베트남",	{260000,520000,780000,1040000},		0,	{3,3,10,5,8},			{15,17,17,17,17},		"없음"}, 					//10	  3  3 10  5  8			15 17 17 17 17		
	{"인도",	{280000,560000,840000,1120000},		0,	{3,3,10,5,8},			{11,13,13,13,13},		"없음"},					//11	  3  3 10  5  8			11 13 13 13 13		
	{"중국",	{300000,600000,900000,1200000},		0,	{3,3,10,5,8},			{7,9,9,9,9},			"없음"},	    			//12	  3  3 10  5  8			 7  9  9  9  9		
	{"몽골",	{320000,640000,960000,1280000},		0,	{3,3,10,5,8},			{3,5,5,5,5},			"없음"},   					//13	  3  3 10  5  8			 3  5  5  5  5		
	{"사우디",	{340000,680000,1020000,1360000},	0,	{16,16,23,18,21},		{3,5,5,5,5},			"없음"},    				//14	 16 16 23 18 21			 3  5  5  5  5			
	{"이탈리아",{360000,720000,1080000,1440000},	0,	{29,29,36,31,34},		{3,5,5,5,5},			"없음"}, 					//15	 29 29 36 31 34			 3  5  5  5  5		
	{"스웨덴",	{380000,760000,1140000,1520000},	0,	{42,42,49,44,47},		{3,5,5,5,5},			"없음"},     				//16	 42 42 49 44 47			 3  5  5  5  5		
	{"영국",	{400000,800000,1200000,1600000},	0,	{55,55,62,57,60},		{3,5,5,5,5},			"없음"},  					//17	 55 55 62 57 60			 3  5  5  5  5		
	{"홍콩",	{420000,840000,1260000,1680000},	0,	{68,68,75,70,73},		{3,5,5,5,5},			"없음"},  					//18	 68 68 75 70 73			 3  5  5  5  5	
	{"황금열쇠",{0,0,0,0},							0,	{81, 81, 88 ,83, 86},	{3,5,5,5,5},			"없음"},					//19	 81 81 88 83 86			 3  5  5  5  5	
	{"네덜란드",{440000,880000,1320000,1760000},	0,	{81, 81, 88 ,83, 86},	{7,9,9,9,9},			"없음"},  					//20	 81 81 88 83 86			 7  9  9  9  9	
	{"일본",	{460000,920000,1380000,1840000},	0,	{81, 81, 88 ,83, 86},	{11,13,13,13,13},		"없음"},  					//21	 81 81 88 83 86			11 13 13 13 13		
	{"독일",	{480000,960000,1440000,1920000},	0,	{81, 81, 88 ,83, 86},	{15,17,17,17,17},		"없음"},  					//22	 81 81 88 83 86			15 17 17 17 17		
	{"싱가포르",{500000,1000000,1500000,2000000},	0,	{81, 81, 88 ,83, 86},	{19,21,21,21,21},		"없음"},					//23	 81 81 88 83 86			19 21 21 21 21		
	{"미국",	{520000,1040000,1560000,2080000},	0,	{81, 81, 88 ,83, 86},	{23,25,25,25,25},		"없음"},					//24	 81 81 88 83 86			23 25 25 25 25		
	{"한국",	{540000,1080000,1620000,2160000},	0,	{81, 81, 88 ,83, 86},	{27,29,29,29,29},		"없음"}						//25	 81 81 88 83 86			27 29 29 29 29	
};

G_info Game = { 0,0,1 };
// 공동(윤광현, 김현호) 제작(main, gotoxy, Dice, Goldenkey, Trade, Answer, takeover_development, Gambling, Bankrupt함수)
int main(void) {
	int i = 0;				// 플레이어의 차례를 확인하기 위한 값
	int mode = 0;			// 게임 모드를 확인하기 위한 값
	int wincount = 0;		// 승패결과가 나왔을 경우 게임을 종료하기 위한 값
	int endcode = 0;		// ESC를 눌러 중간에 게임을 저장하고 이탈 할 경우 게임을 종료하기 위한 값
	int c = 0;				// ESC를 눌러 중간에 게임을 저장하고 이탈 할 경우를 확인하기 위한 값
	int turn = 0;			// 게임의 턴을 확인하기 위한 값

	system("mode con: cols=100 lines=40");	// 콘솔창 크기 조절 함수
	Opening();								// 시작 창
	_getch();
	system("cls");
	PlaySound(Music, NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);		// bgm설정 
	mode = Modeselect();					// 게임 모드를 선택하기 위한 창
	mode = gamecontinue(mode);				// '이어하기'일 경우 기존 게임 데이터를 불러오고 게임 진행 아닐 경우 새로운 게임 진행
	i = Game.turn;							// '이어하기'일 경우 수정된 저장된 게임의 턴을 불러오고 아닐 경우 플레이어부터 게임의 턴이 됨
	turn = Game.totalturn;					// '이어하기'일 경우 수정된 저장된 게임의 총 턴을 불러오고 아닐 경우 1부터 카운트 함

	while (wincount == 0 && endcode == 0) {		// 승패가 결정될 경우 혹은 ESC를 통한 중도이탈이 되기 전까지 게임 진행
		Clear();							// 정보 업데이트 전 기존의 정보들을 화면에서 지워 줌
		info_Update(mode);					// 플레이어가 보유하고 있는 돈과 보유하고 있는 도시의 수 현재의 랭킹정보를 보여 줌 (정보 업데이트)
		Position(i);						// 누구의 턴인지 주사위를 굴리고 몇이 나왔는지를 보여주며 이동정보를 보여 줌
		c = Trade(i, mode);					// 어느 땅에 도착했는지 구분하고 (출발지점, 도박, 황금열쇠, 일반 땅) 그에 따른 이벤트가 발생하게 하는 함수(인수와 업그레이드 및 파산 위험까지 연관됨)
		Sleep(1000);						// 1초 일시 정지 (너무 빨리 게임이 진행되어 제대로된 정보 처리 장애 및 두통 방지용)
		Bankrupt(mode);						// 파산 위기인지 확인(파산 위기일 경우 강제 매각 진행)
		wincount = ingameranking(mode);		// 게임 내 순위 변동
		//wincount = Win(mode);				// 승패를 판단하고 순위를 조정 승패가 났을경우 wincount가 1이 되어 게임이 끝나며 Ending창이 나옴
		i = turnchange(mode, i);			// 한 사람의 턴이 끝나고 다른 사람의 턴으로 교체함
		turn++;								// 총 턴수 증가
		Game.totalturn = turn;				// 구조체에 게임의 총 턴수 상황을 저장

		if (c == 2) {						// ESC를 통해 중도이탈 하였을 경우
			endcode = 1;					// endcode가 1이되어 게임이 끝남
			Game.mode = mode;				// 구조체에 현재의 mode정보 저장
			Game.turn = i;					// 구조체에 현재의 턴 상황 저장
			savegame();						// ESC키로 게임을 종료할 때 게임 진행 데이터(구조체)를 저장 함
			ESC_ending();					// ESC키로 게임을 종료할 때의 엔딩화면을 보여 줌
		}
	}
	return 0;
}

void gotoxy(int x, int y) {	// 좌표 설정 함수
	COORD Position;
	Position.X = x;
	Position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Position);
}

int Dice() {
	srand(time(NULL));
	int d = rand() % 6 + 1;		// 1~6까지의 무작위의 주사윗 값을 얻음
	return d;					// 이 값을 반환
}

void GoldenKey(int a, int mode) {
	GOLD;								// 황금색으로 출력
	int p;
	Clear();							// 지금까지의 정보들을 지우고
	info_Update(mode);					// 업데이트 함
	gotoxy(16, 26);
	printf("==<황 금 열 쇠>==");
	Sleep(500);
	gotoxy(16, 27);
	printf("주사위를 굴려주세요.");
	if (a == 0) {						// 플레이어가 게임 이용자인 경우
		gotoxy(37, 19);
		printf("주사위를 굴려주세요");
		_getch();						// 키보드를 입력 받아 진행하게 함(주사위를 굴리는 느낌) 
		gotoxy(37, 19);
		printf("                     ");// "주사위를 굴려주세요" 지우기
		Sleep(500);
		p = Dice();						// 주사위 값을 얻음
	}
	else								// 플레이어가 컴퓨터인 경우
		p = Dice();						// 바로 주사위 값을 얻음

	gotoxy(49, 17);
	printf("%d", p);					// 주사위 값이 몇인지 출력
	Sleep(1000);
	Clear();							// 지금까지의 정보들을 지우고
	info_Update(mode);					// 업데이트 함

	switch (p) {
	case 1:								// 주사위 값이 1인 경우 다른 플레이어로부터 50만원씩 강탈
		gotoxy(16, 26);
		printf("주사위 : %d", p);
		gotoxy(16, 27);
		printf("다른 플레이어로부터 50만원씩을 강탈합니다!");
		if (mode == 1) {
			if (a == 0) {
				Player[0].money += 500000;
				Player[1].money -= 500000;
			}
			else {
				Player[0].money -= 500000;
				Player[1].money += 500000;
			}
		}
		else if (mode == 2) {
			if (a == 0) {
				if (Player[1].deathcount == 0) {
					Player[0].money += 500000;
					Player[2].money -= 500000;
				}
				else if (Player[2].deathcount == 0) {
					Player[0].money += 500000;
					Player[1].money -= 500000;
				}
				else {
					Player[0].money += 1000000;
					Player[1].money -= 500000;
					Player[2].money -= 500000;
				}
			}
			else if (a == 1) {
				if (Player[0].deathcount == 0) {
					Player[1].money += 500000;
					Player[2].money -= 500000;
				}
				else if (Player[2].deathcount == 0) {
					Player[0].money -= 500000;
					Player[1].money += 500000;
				}
				else {
					Player[0].money -= 500000;
					Player[1].money += 1000000;
					Player[2].money -= 500000;
				}
			}
			else {
				if (Player[0].deathcount == 0) {
					Player[1].money -= 500000;
					Player[2].money += 500000;
				}
				else if (Player[1].deathcount == 0) {
					Player[0].money -= 500000;
					Player[2].money += 500000;
				}
				else {
					Player[0].money -= 500000;
					Player[1].money -= 500000;
					Player[2].money += 1000000;
				}
			}
		}
		else if (mode == 3) {
			if (a == 0) {
				if (Player[1].deathcount == 0 && Player[2].deathcount == 0) {
					Player[0].money += 500000;
					Player[3].money -= 500000;
				}
				else if (Player[1].deathcount == 0 && Player[3].deathcount == 0) {
					Player[0].money += 500000;
					Player[2].money -= 500000;
				}
				else if (Player[2].deathcount == 0 && Player[3].deathcount == 0) {
					Player[0].money += 500000;
					Player[1].money -= 500000;
				}
				else if (Player[1].deathcount == 0) {
					Player[0].money += 1000000;
					Player[2].money -= 500000;
					Player[3].money -= 500000;
				}
				else if (Player[2].deathcount == 0) {
					Player[0].money += 1000000;
					Player[1].money -= 500000;
					Player[3].money -= 500000;
				}
				else if (Player[3].deathcount == 0) {
					Player[0].money += 1000000;
					Player[1].money -= 500000;
					Player[2].money -= 500000;
				}
				else {
					Player[0].money += 1500000;
					Player[1].money -= 500000;
					Player[2].money -= 500000;
					Player[3].money -= 500000;
				}
			}
			else if (a == 1) {
				if (Player[0].deathcount == 0 && Player[2].deathcount == 0) {
					Player[1].money += 500000;
					Player[3].money -= 500000;
				}
				else if (Player[0].deathcount == 0 && Player[3].deathcount == 0) {
					Player[1].money += 500000;
					Player[2].money -= 500000;
				}
				else if (Player[2].deathcount == 0 && Player[3].deathcount == 0) {
					Player[0].money -= 500000;
					Player[1].money += 500000;
				}
				else if (Player[0].deathcount == 0) {
					Player[1].money += 1000000;
					Player[2].money -= 500000;
					Player[3].money -= 500000;
				}
				else if (Player[2].deathcount == 0) {
					Player[0].money -= 500000;
					Player[1].money += 1000000;
					Player[3].money -= 500000;
				}
				else if (Player[3].deathcount == 0) {
					Player[0].money -= 500000;
					Player[1].money += 1000000;
					Player[2].money -= 500000;
				}
				else {
					Player[0].money -= 500000;
					Player[1].money += 1500000;
					Player[2].money -= 500000;
					Player[3].money -= 500000;
				}
			}
			else if (a == 2) {
				if (Player[0].deathcount == 0 && Player[1].deathcount == 0) {
					Player[2].money += 500000;
					Player[3].money -= 500000;
				}
				else if (Player[0].deathcount == 0 && Player[3].deathcount == 0) {
					Player[1].money -= 500000;
					Player[2].money += 500000;
				}
				else if (Player[1].deathcount == 0 && Player[3].deathcount == 0) {
					Player[0].money -= 500000;
					Player[2].money += 500000;
				}
				else if (Player[0].deathcount == 0) {
					Player[1].money -= 500000;
					Player[2].money += 1000000;
					Player[3].money -= 500000;
				}
				else if (Player[1].deathcount == 0) {
					Player[0].money -= 500000;
					Player[2].money += 1000000;
					Player[3].money -= 500000;
				}
				else if (Player[3].deathcount == 0) {
					Player[0].money -= 500000;
					Player[1].money -= 500000;
					Player[2].money += 1000000;
				}
				else {
					Player[0].money -= 500000;
					Player[1].money -= 500000;
					Player[2].money += 1500000;
					Player[3].money -= 500000;
				}
			}
			if (a == 3) {
				if (Player[0].deathcount == 0 && Player[1].deathcount == 0) {
					Player[2].money -= 500000;
					Player[3].money += 500000;
				}
				else if (Player[0].deathcount == 0 && Player[2].deathcount == 0) {
					Player[1].money -= 500000;
					Player[3].money += 500000;
				}
				else if (Player[1].deathcount == 0 && Player[2].deathcount == 0) {
					Player[0].money -= 500000;
					Player[3].money += 500000;
				}
				else if (Player[0].deathcount == 0) {
					Player[1].money -= 5000000;
					Player[2].money -= 500000;
					Player[3].money += 500000;
				}
				else if (Player[1].deathcount == 0) {
					Player[0].money -= 500000;
					Player[2].money -= 500000;
					Player[3].money += 1000000;
				}
				else if (Player[2].deathcount == 0) {
					Player[0].money -= 500000;
					Player[1].money -= 500000;
					Player[3].money += 1000000;
				}
				else {
					Player[0].money -= 500000;
					Player[1].money -= 500000;
					Player[2].money -= 500000;
					Player[3].money += 1500000;
				}
			}
		}
		break;
	case 2:		// 주사위 값이 2인 경우 로또당첨 +2000000원 획득
		gotoxy(16, 26);
		printf("주사위 : %d", p);
		gotoxy(16, 27);
		printf("!로또 당첨!");
		gotoxy(16, 28);
		printf("200만원을 획득합니다!");
		if (a == 0) {
			Player[0].money += 2000000;
		}
		else if (a == 1) {
			Player[1].money += 2000000;
		}
		else if (a == 2) {
			Player[2].money += 2000000;
		}
		else if (a == 3) {
			Player[3].money += 2000000;
		}
		break;
	case 3:		// 주사위 값이 3인 경우 기부 500000원 잃음
		gotoxy(16, 26);
		printf("주사위 : %d", p);
		gotoxy(16, 27);
		printf("아프리카 어린이들에게 기부합니다.");
		gotoxy(16, 28);
		printf("50만원을 소모합니다.");
		if (a == 0) {
			Player[0].money -= 500000;
		}
		else if (a == 1) {
			Player[1].money -= 500000;
		}
		else if (a == 2) {
			Player[2].money -= 500000;
		}
		else if (a == 3) {
			Player[3].money -= 500000;
		}
		break;
	case 4:				// 주사위 값이 4인 경우 시작지점으로 이동
		gotoxy(16, 26);
		printf("주사위 : %d", p);
		gotoxy(16, 27);
		printf("<시작>지점으로 이동!");
		for (int i = 0; i < 7; i++) {	// 황금열쇠로부터 시작지점까지 7칸 만큼 이동
			gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);
			printf("  ");				// 플레이어의 말이 지나간자리의 잔상을 제거
			if (Player[a].pos > 24) {	// pos값이 25(시작지점)인 경우
				Player[a].pos = 0;		// pos값을 0으로 만듦(시작지점-0)
				OneCycle(a);			// 완주 보상을 줌
				Sleep(2000);
				ShowMove(0);			// 이동할 때마다 이동한 칸에 말을 출력
			}
			else {
				Player[a].pos++;		// 그외의 경우 pos값을 1씩 늘려가며
				ShowMove(a);			// 이동할 때마다 이동한 칸에 말을 출력
			}
		}
		break;
	case 5:				// 주사위 값이 5인 경우 도박으로 이동
		gotoxy(16, 26);
		printf("주사위 : %d", p);
		gotoxy(16, 27);
		printf("<도박>으로 이동!");
		for (int i = 0; i < 13; i++) {	// 황금열쇠로부터 도박지점까지 13칸 만큼 이동
			gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);
			printf("  ");				// 플레이어의 말이 지나간자리의 잔상을 제거
			if (Player[a].pos > 24) {	// pos값이 25(시작지점)인 경우
				Player[a].pos = 0;		// pos값을 0으로 만듦(시작지점-0)
				OneCycle(a);			// 완주 보상을 줌
				Sleep(2000);
				ShowMove(0);			// 이동할 때마다 이동한 칸에 말을 출력점
			}
			else {
				Player[a].pos++;		// 그외의 경우 pos값을 1씩 늘려가며
				ShowMove(a);			// 이동할 때마다 이동한 칸에 말을 출력
			}
		}
		Trade(a, mode);					// 도박 진행
		break;
	case 6:				// 주사위 값이 6인 경우 세계 여행(자신이 가고 싶은 곳으로 선택하여 이동 가능)
		if (a == 0) {	// 플레이어가 게임 이용자인 경우
			gotoxy(16, 26);
			printf("주사위 : %d", p);
			gotoxy(16, 27);
			printf("세계 여행!");
			gotoxy(16, 28);
			printf("가고싶은 지역을 선택해 주세요!");
			Sleep(500);
			RED;

			int x = 81, y = 5;				// 현재 x좌표, y좌표의 값을 저장(이동 후 좌표 저장용)
			int last_x = 81, last_y = 5;	// 현재 x좌표, y좌표의 값을 저장(이동 전 좌표 저장용)
			int key = 72;

			gotoxy(81, 5);
			printf("★");
			while (key != ENTER && key != SPACE) {		// ENTER나 SPACE를 입력할 때 까지 반복(선택 전까지 화살표 이동 가능)
				if (_kbhit() != 0) {
					key = _getch();						// 키보드 입력을 받음
					if (key == 224) {					// 방향키를 눌렀을 경우 224를 반환받고 다시 한번 반환값을 받으므로
						key = _getch();					// 해당 방향키에 대한 정보를 얻음
					}
					switch (key) {
					case UP:									// 위쪽 방향키인 경우
						if ((y > 5) && (x == 3 || x == 81)) {	// 제일 윗칸이 아닌 경우
							y = y - 4;							// y좌표를 4줄임(한칸 위로 함)
							gotoxy(x, y);						// 한칸 위로 이동
							printf("★");
							gotoxy(last_x, last_y);				// 그전에 위치했던 잔상 제거
							printf("  ");
							last_x = x;							// 현재 좌표를 이동 전 좌표에 저장
							last_y = y;
						}
						break;
					case DOWN:									// 아래쪽 방향키인 경우
						if ((y < 33) && (x == 3 || x == 81)) {	// 제일 아랫칸이 아닌 경우
							y = y + 4;							// y좌표를 4늘림(한칸 아래로 함)
							gotoxy(x, y);						// 한칸 아래로 이동
							printf("★");
							gotoxy(last_x, last_y);				// 그전에 위치했던 잔상 제거
							printf("  ");
							last_x = x;							// 현재 좌표를 이동 전 좌표에 저장
							last_y = y;
						}
						break;
					case LEFT:									// 왼쪽 방향키인 경우
						if ((x > 3) && (y == 5 || y == 33)) {	// 제일 왼쪽칸이 아닌 경우
							x = x - 13;							// x좌표를 13줄임(한칸 왼쪽으로 함)
							gotoxy(x, y);						// 한칸 왼쪽으로 이동
							printf("★");
							gotoxy(last_x, last_y);				// 그전에 위치했던 잔상 제거
							printf("  ");
							last_x = x;							// 현재 좌표를 이동 전 좌표에 저장
							last_y = y;
						}
						break;
					case RIGHT:									// 오른쪽 방향키인 경우
						if ((x < 81) && (y == 5 || y == 33)) {	// 제일 오른쪽칸이 아닌 경우
							x = x + 13;							// x좌표를 13늘림(한칸 오른쪽으로 함)
							gotoxy(x, y);						// 한칸 오른쪽으로 이동
							printf("★");
							gotoxy(last_x, last_y);				// 그전에 위치했던 잔상 제거
							printf("  ");
							last_x = x;							// 현재 좌표를 이동 전 좌표에 저장
							last_y = y;
						}
						break;
					case ENTER:									// ENTER나 SPACE 입력 시(결정)
					case SPACE:
						for (int i = 0; i < MAX_CITY; i++) {	// Player[a].pos에 플레이어가 이동한 지역의 pos값을 넣고 이전 좌표와 비교하여 완주했을 경우 완주보상을 줌 
							int last_pos = Player[a].pos;
							if (City[i].x[1] == x && City[i].y[1] == y) {
								Player[a].pos = i;
								if (Player[a].pos - last_pos < 0)
									OneCycle(a);
							}
						}
						Trade(a, mode);							// 땅에 이동한 뒤 그 땅에 해당하는(인수,강화,황금열쇠,도박)기능 실행
						break;
					}
				}
			}
		}
		else if (a != 0) {	// 플레이어가 컴퓨터인 경우
			int last_pos = Player[a].pos;
			for (int i = MAX_CITY - 1; i >= 0; i--) {	// 현재 가장 비싼 주인이 없는 땅이나 자신의 땅으로 이동(비싼 땅으로 더 큰 이득을 챙겨야 하므로)
				if (strcmp(City[i].owner, "없음") == 0 || strcmp(City[i].owner, Player[a].name) == 0) {
					Player[a].pos = i;	// Player[a].pos에 플레이어가 이동한 지역의 pos값을 넣음
					gotoxy(City[last_pos].x[a + 1], City[last_pos].y[a + 1]);
					printf("  ");		// 이동시 남아있는 잔상 제거
					if (a == 1)
						BLUE;
					if (a == 2)
						YELLOW;
					if (a == 3)
						GREEN;
					gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);	// 해당 플레이어의 색상으로 말(symbol)을 이용해 위치 표현
					printf("%s", Player[a].symbol);
					if (Player[a].pos - last_pos < 0)	// 전의 위치했던 좌표와 비교를 했을 때 시작지점을 지났을 경우 완주보상을 받음
						OneCycle(a);
					break;
				}
			}
			Trade(a, mode);	// 땅에 이동한 뒤 그 땅에 해당하는(인수,강화,황금열쇠,도박)기능 실행
			break;
		}
	}
}

int Trade(int a, int mode) {
	int c = 0;
	if (strcmp(City[Player[a].pos].name, "시작") == 0) {			// 시작지점인 경우 아무런 일도 없음
		return 0;
	}
	else if (strcmp(City[Player[a].pos].name, "황금열쇠") == 0) {	// 황금열쇠인 경우 황금열쇠이벤트 진행
		GoldenKey(a, mode);
		Sleep(1000);
		return 0;
	}
	else if (strcmp(City[Player[a].pos].name, "도박") == 0) {		// 도박인 경우 도박이벤트 진행
		Gambling(a);
		Sleep(1000);
		return 0;
	}
	else if (strcmp(City[Player[a].pos].owner, "없음") == 0) {		// 주인이 없는 땅일 경우
		if (City[Player[a].pos].price[0] > Player[a].money) {		// 인수 비용보다 플레이어가 보유한 돈이 적은 경우 인수 불가
			gotoxy(16, 27);
			printf("토지계약을 하실 수 없습니다.");
			gotoxy(16, 28);
			printf("           <가격 : %d 원>", City[Player[a].pos].price[0]);
			Sleep(1000);
			return 0;
		}
		else {
			gotoxy(16, 26);											// 그 외의 경우 플레이어의 인수 의사 확인
			printf("<%s>은/는 비어있습니다.", City[Player[a].pos].name);
			gotoxy(16, 27);
			printf("토지계약을 하시겠습니까?");
			gotoxy(16, 28);
			printf("           <가격 : %d 원>", City[Player[a].pos].price[0]);
			Sleep(500);
			int c = Answer(a, 0);
			if (c == 1) {											// 인수하는 경우
				strcpy(City[Player[a].pos].owner, Player[a].name);	// 도시의 주인이 플레이어가 되고
				ShowSize(a);										// 이 정보를 보드판에 출력함
				Player[a].money -= City[Player[a].pos].price[0];	// 인수 비용 지불
			}
			return c;												// ESC일 경우를 확인하기 위해 c값 리턴
		}
	}
	else if (strcmp(City[Player[a].pos].owner, Player[a].name) == 0) {	// 주인이 자신인 땅일 경우
		gotoxy(16, 26);
		printf("<%s>은/는 당신의 토지입니다.", City[Player[a].pos].name);
		if (City[Player[a].pos].size == 0) {
			if (City[Player[a].pos].price[0] > Player[a].money) {		// 강화 비용보다 플레이어가 보유한 돈이 적은 경우 강화 불가
				gotoxy(16, 27);
				printf("집을 세우실 수 없습니다.");
				gotoxy(16, 28);
				printf("           <추가가격 : %d 원>", City[Player[a].pos].price[0]);
				Sleep(1000);
				return 0;
			}
			else {
				gotoxy(16, 27);
				printf("집을 세우시겠습니까?");
				gotoxy(16, 28);
				printf("       <추가가격 : %d 원>", City[Player[a].pos].price[0]);
				Sleep(500);
				int c = Answer(a, 1);
				if (c == 1) {											// 강화하는 경우
					City[Player[a].pos].size++;							// size+1
					ShowSize(a);										// 이 정보를 보드판에 출력함				
					Player[a].money -= City[Player[a].pos].price[0];	// 강화 비용 지불
				}
				return c;												// ESC일 경우를 확인하기 위해 c값 리턴
			}
		}
		else if (City[Player[a].pos].size == 1) {
			if (City[Player[a].pos].price[0] > Player[a].money) {		// 강화 비용보다 플레이어가 보유한 돈이 적은 경우 강화 불가
				gotoxy(16, 27);
				printf("마을을 세우실 수 없습니다.");
				gotoxy(16, 28);
				printf("           <추가가격 : %d 원>", City[Player[a].pos].price[0]);
				Sleep(1000);
				return 0;
			}
			else {
				gotoxy(16, 27);
				printf("마을을 세우시겠습니까?");
				gotoxy(16, 28);
				printf("       <추가가격 : %d원>", City[Player[a].pos].price[0]);
				Sleep(500);
				int c = Answer(a, 1);
				if (c == 1) {											// 강화하는 경우
					City[Player[a].pos].size++;							// size+1
					ShowSize(a);										// 이 정보를 보드판에 출력함			
					Player[a].money -= City[Player[a].pos].price[0];	// 강화 비용 지불
				}
				return c;												// ESC일 경우를 확인하기 위해 c값 리턴
			}
		}
		else if (City[Player[a].pos].size == 2) {
			if (City[Player[a].pos].price[0] > Player[a].money) {		// 강화 비용보다 플레이어가 보유한 돈이 적은 경우 강화 불가
				gotoxy(16, 27);
				printf("도시를 건설하실 수 없습니다.");
				gotoxy(16, 28);
				printf("           <추가가격 : %d 원>", City[Player[a].pos].price[0]);
				Sleep(1000);
				return 0;
			}
			else {
				gotoxy(16, 27);
				printf("도시를 건설하시겠습니까?");
				gotoxy(16, 28);
				printf("      <추가가격 : %d원>", City[Player[a].pos].price[0]);
				Sleep(500);
				int c = Answer(a, 1);
				if (c == 1) {											// 강화하는 경우
					City[Player[a].pos].size++;							// size+1
					ShowSize(a);										// 이 정보를 보드판에 출력함			
					Player[a].money -= City[Player[a].pos].price[0];	// 강화 비용 지불
				}
				return c;												// ESC일 경우를 확인하기 위해 c값 리턴
			}
		}
		else {
			gotoxy(16, 27);
			printf("이미 도시(Lv max)까지 건설하셨습니다.");			// 도시인 경우 더이상 강화 불가
			Sleep(1000);
			return 0;
		}
	}
	else {																// 상대방의 도시인 경우
		gotoxy(16, 26);
		if (strcmp(City[Player[a].pos].owner, Player[0].name) == 0) {
			printf("[%s]님의 도시 입니다", Player[0].name);
		}
		else if (strcmp(City[Player[a].pos].owner, Player[1].name) == 0) {
			printf("[%s]님의 도시 입니다", Player[1].name);
		}
		else if (strcmp(City[Player[a].pos].owner, Player[2].name) == 0) {
			printf("[%s]님의 도시 입니다", Player[2].name);
		}
		else if (strcmp(City[Player[a].pos].owner, Player[3].name) == 0) {
			printf("[%s]님의 도시 입니다", Player[3].name);
		}

		gotoxy(16, 27);
		printf("통행료를 납부합니다.");
		gotoxy(16, 28);
		printf("통행료 납부 :  <-%d 원>", City[Player[a].pos].price[City[Player[a].pos].size] * Toll);	// 해당 땅의 가격*통행료 부과비율만큼 통행료 부과 
		Sleep(1000);
		Player[a].money -= City[Player[a].pos].price[City[Player[a].pos].size] * Toll;

		if (strcmp(City[Player[a].pos].owner, Player[0].name) == 0) {									// 해당 땅의 주인이 부과된 통행료만큼 획득
			Player[0].money += City[Player[a].pos].price[City[Player[a].pos].size] * Toll;
		}
		else if (strcmp(City[Player[a].pos].owner, Player[1].name) == 0) {
			Player[1].money += City[Player[a].pos].price[City[Player[a].pos].size] * Toll;
		}
		else if (strcmp(City[Player[a].pos].owner, Player[2].name) == 0) {
			Player[2].money += City[Player[a].pos].price[City[Player[a].pos].size] * Toll;
		}
		else if (strcmp(City[Player[a].pos].owner, Player[3].name) == 0) {
			Player[3].money += City[Player[a].pos].price[City[Player[a].pos].size] * Toll;
		}

		int c = takeover_development(a, mode);															// 인수를 할지 확인
		Sleep(1000);
		return c;																						// ESC일 경우를 확인하기 위해 c값 리턴
	}
}

int Answer(int a, int b) {	// 땅의 주인이 없을 경우 + 인수(b=0), 인수 후 추가 건설(b=1)
	SKY;					// 하늘색으로 출력
	gotoxy(55, 26);
	printf("   예 ");
	gotoxy(55, 29);
	printf(" 아니요 ");
	gotoxy(67, 26);
	printf("<-");

	if (a == 1 || a == 2 || a == 3) {
		return C_Answer(a, b);			// 컴퓨터가 판단하여 선택하는 알고리즘
	}

	else {
		int x = 67, y = 26, key = 72;				// 처음 화살표의 x좌표, y좌표 값을 저장
		while (key != ENTER && key != SPACE) {		// ENTER나 SPACE를 입력할 때 까지 반복(선택 전까지 화살표 이동 가능)
			if (_kbhit() != 0)
				if (_kbhit() != 0)
				{
					key = _getch();						// 키보드 입력을 받음
					if (key == 27) {					// ESC입력시
						return 2;						// 게임 중간에 종료
					}
					else if (key == 224) {				// 방향키를 눌렀을 경우 224를 반환받고 다시 한번 반환값을 받으므로
						key = _getch();					// 해당 방향키에 대한 정보를 얻음
					}
					switch (key)
					{
					case UP:							// 위쪽 방향키인 경우
						if (y == 26) {					// 제일 윗칸인 경우
							y = 29;
							gotoxy(67, 26);
							printf("  ");
							gotoxy(67, 29);
							printf("<-");				// 제일 아랫칸으로 이동(잔상 제거)
						}
						else if (y == 29) {				// 제일 아랫칸인 경우
							y = 26;
							gotoxy(67, 26);
							printf("<-");				// 제일 윗칸으로 이동(잔상 제거)
							gotoxy(67, 29);
							printf("  ");
						}
						break;
					case DOWN:							// 위쪽 방향키인 경우
						if (y == 26) {					// 제일 윗칸인 경우
							y = 29;
							gotoxy(67, 26);
							printf("  ");
							gotoxy(67, 29);
							printf("<-");				// 제일 아랫칸으로 이동(잔상 제거)
						}
						else if (y == 29) {				// 제일 아랫칸인 경우
							y = 26;
							gotoxy(67, 26);
							printf("<-");				// 제일 윗칸으로 이동(잔상 제거)
							gotoxy(67, 29);
							printf("  ");
						}
						break;
					case ENTER:							// ENTER나 SPACE 입력 시(결정)
					case SPACE:
						if (y == 26)
							return 1;					// '예'는 1 반환
						else
							return 0;					// '아니요'는 0 반환
						break;
					}
				}
		}
	}
};

int takeover_development(int a, int mode) {
	Clear();				// 지금까지의 정보들을 지우고
	info_Update(mode);		// 업데이트 함
	VIOLET;					// 보라색으로 출력
	int c = 0;				// ESC를 입력했을 경우를 알기 위해 사용
	if (City[Player[a].pos].size == 3) {	// 도시인 경우 인수 불가능
		gotoxy(16, 26);
		printf("<%s>을/를 인수할 수 없습니다.", City[Player[a].pos].name);
		gotoxy(16, 27);
		printf("도시(Lv Max)는 인수할 수 없습니다.");
		Sleep(500);
	}
	if (Player[a].money >= City[Player[a].pos].price[City[Player[a].pos].size] && City[Player[a].pos].size != 3) {	// 플레이어가 인수할 돈이 있고 도시가 아닌 경우 인수 의사를 확인함
		gotoxy(16, 26);
		printf("<%s>을/를 인수할 수 있습니다.", City[Player[a].pos].name);
		gotoxy(16, 27);
		printf("<%s>을/를 인수하시겠습니까?", City[Player[a].pos].name);
		gotoxy(16, 28);
		printf("<%d>원 입니다.", City[Player[a].pos].price[City[Player[a].pos].size]);
		Sleep(500);
		c = Answer(a, 0);													// 인수 의사를 확인(1:인수, 0:x, 2:ESC)
		if (c == 1) {														// 인수를 하는 경우
			if (strcmp(City[Player[a].pos].owner, Player[0].name) == 0) {	// 해당 도시의 주인에게 인수비용을 주고 인수를 함
				Player[0].money += City[Player[a].pos].price[City[Player[a].pos].size];
				Player[a].money -= City[Player[a].pos].price[City[Player[a].pos].size];
			}
			else if (strcmp(City[Player[a].pos].owner, Player[1].name) == 0) {
				Player[1].money += City[Player[a].pos].price[City[Player[a].pos].size];
				Player[a].money -= City[Player[a].pos].price[City[Player[a].pos].size];
			}
			else if (strcmp(City[Player[a].pos].owner, Player[2].name) == 0) {
				Player[2].money += City[Player[a].pos].price[City[Player[a].pos].size];
				Player[a].money -= City[Player[a].pos].price[City[Player[a].pos].size];
			}
			else if (strcmp(City[Player[a].pos].owner, Player[3].name) == 0) {
				Player[3].money += City[Player[a].pos].price[City[Player[a].pos].size];
				Player[a].money -= City[Player[a].pos].price[City[Player[a].pos].size];
			}
			strcpy(City[Player[a].pos].owner, Player[a].name);				// 도시의 주인이 플레이어가 됨(인수함)
			Clear();														// 지금까지의 정보들을 지우고
			info_Update(mode);												// 업데이트 함
			VIOLET;															// 보라색으로 출력

			if (strcmp(City[Player[a].pos].owner, Player[a].name) == 0) {	// 도시의 주인이 플레이어인 경우(인수 후 혹은 기존부터 자신의 땅인 경우) 업그레이드 의사를 확인
				gotoxy(16, 26);
				printf("<%s>은/는 당신의 토지입니다.", City[Player[a].pos].name);
				if (City[Player[a].pos].size == 0) {
					gotoxy(16, 27);
					printf("집을 세우시겠습니까?");
					gotoxy(16, 28);
					printf("       <추가가격 : %d 원>", City[Player[a].pos].price[0]);
					Sleep(500);
					c = Answer(a, 1);
					if (c == 1) {											// 강화를 하는 경우
						City[Player[a].pos].size++;							// size+1
						ShowSize(a);										// 이를 화면상의 정보로 출력
						Player[a].money -= City[Player[a].pos].price[0];	// 비용 소모
					}
				}
				else if (City[Player[a].pos].size == 1) {
					gotoxy(16, 27);
					printf("마을을 세우시겠습니까?");
					gotoxy(16, 28);
					printf("       <추가가격 : %d원>", City[Player[a].pos].price[0]);
					Sleep(500);
					c = Answer(a, 1);
					if (c == 1) {											// 강화를 하는 경우
						City[Player[a].pos].size++;							// size+1
						ShowSize(a);										// 이를 화면상의 정보로 출력												
						Player[a].money -= City[Player[a].pos].price[0];	// 비용 소모
					}
				}
				else if (City[Player[a].pos].size == 2) {
					gotoxy(16, 27);
					printf("도시를 건설하시겠습니까?");
					gotoxy(16, 28);
					printf("      <추가가격 : %d원>", City[Player[a].pos].price[0]);
					Sleep(500);
					c = Answer(a, 1);
					if (c == 1) {											// 강화를 하는 경우
						City[Player[a].pos].size++;							// size+1
						ShowSize(a);										// 이를 화면상의 정보로 출력
						Player[a].money -= City[Player[a].pos].price[0];	// 비용 소모
					}
				}
			}
			ShowSize(a);	// 이를 화면상의 정보로 출력(인수인 경우도)
		}
	}
	return c;				// ESC인걸 확인하기 위해 c값 반환
}

void Gambling(int i) {
	GOLD;					// 황금색으로 출력
	int p = Dice();			// 홀짝 값을 주사위를 돌려 얻음
	int choose;
	Clear();				// 지금까지의 정보들을 지움
	gotoxy(16, 26);
	printf("주사위는 홀수일까요? 짝수일까요?");
	gotoxy(16, 27);
	printf("홀수(예) , 짝수(아니요)");
	if (i == 0)							// 플레이어가 게임 이용자인 경우
		choose = Answer(i, 0);			// 직접 선택
	else								// 플레이어가 컴퓨터인 경우
		choose = C_Gambling_Answer(i);	// 랜덤으로 선택
	Sleep(1000);
	gotoxy(49, 17);
	printf("%d", p);					// 맞출 대상의 홀짝 값이 몇이 나왔는지 출력
	if (p % 2 == choose) {				// 홀짝을 맞춘 경우 도박 성공 +600000원 획득
		gotoxy(16, 28);
		printf("도박 성공! +600000");
		Player[i].money += 600000;
	}
	else {								// 실패한 경우 도박 실패 300000원 잃음
		gotoxy(16, 28);
		printf("도박 실패 ㅠ_ㅠ");
		Player[i].money -= 300000;
	}
}

void Bankrupt(int mode) {
	Clear();														// 지금까지의 정보들을 지우고
	info_Update(mode);												// 업데이트 함
	BLOOD;															// 검붉은색으로 출력

	for (int j = 0; j <= mode; j++) {
		if (Player[j].money < 0) {									// 플레이어가 파산 위기인지 확인 파산 위기일 경우
			gotoxy(16, 26);
			printf("<%s>님은 파산 위기입니다.", Player[j].name);
			gotoxy(16, 27);
			printf("보유중인 도시를 처분합니다");
			Sleep(3000);
			Bankrupt_Answer(j);										// 보유중인 도시 자동으로 처분
		}
	}
}
// 윤광현 제작(Opening, OneCycle, Situation, Modeselect, World_map, ShowMove, ShowSize, Clear, Position, Ending, info_Update, C_Answer, C_Gambling_Answer, CheckCityCount, Bankrupt_Answer, turnchange, ingameranking, savegame, gamecontinue, ESC_ending함수 및 소스.c와 헤더.h파일의 모든 주석)
void Opening() {						// 시작시 화면 하늘색으로 출력
	SKY;								
	gotoxy(36, 10);
	printf("★★브루마블★★");
	gotoxy(39, 15);
	printf("제작팀: 3조");
	gotoxy(32, 17);
	printf("조장: 2019253025 윤광현");
	gotoxy(32, 19);
	printf("조원: 2019253069 김은규");
	gotoxy(32, 21);
	printf("      2019253053 김현호");
	gotoxy(35, 24);
	printf("---Press Any Key---");
}

void OneCycle(int a) {				
	gotoxy(16, 26);
	GOLD;								// 황금색으로 출력 완주 보상으로 해당 플레이어에게 +500000원 지급
	printf("시작 지점 도착!");
	gotoxy(16, 27);
	printf("완주 보너스 +500000원");
	Player[a].money += 500000;
}

void Situation(int mode) {

	switch (mode) {														
	case 3: GREEN;														// mode가 3(1vs1vs1vs1)인 경우 Player4의 정보 출력(현재 위치, 이름, 보유 자산, 보유 도시 수)
		gotoxy(City[Player[3].pos].x[4], City[Player[3].pos].y[4]);
		printf("%s", Player[3].symbol);
		gotoxy(49, 22);
		printf("%s", Player[3].name);
		gotoxy(49, 23);
		printf("자 산 : %d", Player[3].money);
		gotoxy(49, 24);
		printf("도 시 : %d", Player[3].citycount);

	case 2:	YELLOW;														// mode가 2(1vs1vs1), 3(break를 안했으므로)인 경우 Player3의 정보 출력(현재 위치, 이름, 보유 자산, 보유 도시 수)
		gotoxy(City[Player[2].pos].x[3], City[Player[2].pos].y[3]);
		printf("%s", Player[2].symbol);
		gotoxy(16, 22);
		printf("%s", Player[2].name);
		gotoxy(16, 23);
		printf("자 산 : %d", Player[2].money);
		gotoxy(16, 24);
		printf("도 시 :");

	case 1:	RED;														// mode가 1(1vs1), 2, 3(break를 안했으므로)인 경우 Player3의 정보 출력(현재 위치, 이름, 보유 자산, 보유 도시 수)
		gotoxy(City[Player[0].pos].x[1], City[Player[0].pos].y[1]);
		printf("%s", Player[0].symbol);
		gotoxy(16, 7);
		printf("%s", Player[0].name);
		gotoxy(16, 8);
		printf("자 산 : %d", Player[0].money);
		gotoxy(16, 9);
		printf("도 시 :");

		BLUE;
		gotoxy(City[Player[1].pos].x[2], City[Player[1].pos].y[2]);
		printf("%s", Player[1].symbol);
		gotoxy(49, 7);
		printf("%s", Player[1].name);
		gotoxy(49, 8);
		printf("자 산 : %d", Player[1].money);
		gotoxy(49, 9);
		printf("도 시 :");
		break;
	}
}

int Modeselect() {

	gotoxy(31, 10);
	printf("모드를 선택하시오");
	RED;							// 빨간색으로 1vs1: 출력
	gotoxy(31, 13);
	printf("1 vs 1");
	gotoxy(50, 13);
	printf(":");
	BLUE;							// 파란색으로 1vs1vs1: 출력
	gotoxy(31, 16);
	printf("1 vs 1 vs 1");
	gotoxy(50, 16);
	printf(":");
	YELLOW;							// 노란색으로 1vs1vs1vs1: 출력
	gotoxy(31, 19);
	printf("1 vs 1 vs 1 vs 1");
	gotoxy(50, 19);
	printf(":");
	GREEN;							// 초록색으로 이어하기: 출력
	gotoxy(31, 22);
	printf("이어하기");
	gotoxy(50, 22);
	printf(":");
	SKY;							// 하늘색으로 "선 택: Enter or Space"설명과 화살표 출력
	gotoxy(31, 24);
	printf("선 택: Enter or Space");
	gotoxy(55, 13);
	printf("<-");

	int x = 55, y = 13, key = 72;	// 화살표가 처음 위치한 x좌표와 y좌표값 저장

	while (key != ENTER && key != SPACE) {		// ENTER나 SPACE를 입력할 때 까지 반복(선택 전까지 화살표 이동 가능)
		if (_kbhit() != 0)
		{
			key = _getch();						// 키보드 입력을 받음
			if (key == 224) {					// 방향키를 눌렀을 경우 224를 반환받고 다시 한번 반환값을 받으므로
				key = _getch();					// 해당 방향키에 대한 정보를 얻음
			}
			switch (key)
			{
			case UP:							// 위쪽 방향키인 경우
				if (y == 13) {					// 제일 윗칸인 경우
					gotoxy(x, y);
					printf("  ");				// 현재 위치의 화살표를 지우고(잔상 제거)
					y = 22;
					gotoxy(x, y);
					printf("<-");				// 제일 아랫칸으로 이동
				}
				else {							// 그 외의 경우
					gotoxy(x, y);
					printf("  ");				// 현재 위치의 화살표를 지우고(잔상 제거)
					y -= 3;
					gotoxy(x, y);
					printf("<-");				// 한 칸 윗칸으로 이동
				}
				break;
			case DOWN:							// 아랫쪽 방향키인 경우
				if (y == 22) {					// 제일 아랫칸인 경우
					gotoxy(x, y);
					printf("  ");				// 현재 위치의 화살표를 지우고(잔상 제거)
					y = 13;
					gotoxy(x, y);
					printf("<-");				// 제일 윗칸으로 이동
				}
				else {							// 그 외의 경우
					gotoxy(x, y);
					printf("  ");				// 현재 위치의 화살표를 지우고(잔상 제거)
					y += 3;
					gotoxy(x, y);
					printf("<-");				// 한 칸 아랫칸으로 이동
				}
				break;
			case ENTER:							// ENTER나 SPACE 입력 시(결정)
			case SPACE:
				if (y == 13)
					return 1;					// '1vs1'은 mode에 1 반환
				else if (y == 16)
					return 2;					// '1vs1vs1'은 mode에 2 반환
				else if (y == 19)
					return 3;					// '1vs1vs1vs1'은 mode에 3 반환
				else if (y == 22)
					return 4;					// '이어하기'는 mode에 4 반환
				break;
			}
		}
	}
}

void World_map() {
	BLUE_GREEN;			// 청녹색으로 게임보드판 출력
	printf("\n\n");
	printf("┌------------┬------------┬------------┬------------┬------------┬------------┬------------┐ \n");
	printf("│            │            │            │            │            │            │            │ \n");
	printf("│   몽  골   │  사 우 디  │  이탈리아  │  스 웨 덴  │   영  국   │   홍  콩   │  황금열쇠  │ \n");
	printf("│            │            │            │            │            │            │            │ \n");
	printf("├------------┼------------┴------------┴------┬-----┴------------┴------------┼------------┤ \n");
	printf("│            │                                │                               │            │ \n");
	printf("│   중  국   │                                │                               │  네덜란드  │ \n");
	printf("│            │                                │                               │            │ \n");
	printf("├------------┼--------------------------------┴-------------------------------┼------------┤ \n");
	printf("│            │                                                                │            │ \n");
	printf("│   인  도   │                                                                │   일  본   │ \n");
	printf("│            │                                                                │            │ \n");
	printf("├------------┤                                                                ├------------┤ \n");
	printf("│            │                                                                │            │ \n");
	printf("│  베 트 남  │                     ┌-------┬----------┐                       │   독  일   │ \n");
	printf("│            │                     │ 주사위│          │                       │            │ \n");
	printf("├------------┤                     └-------┴----------┘                       ├------------┤ \n");
	printf("│            │                                                                │            │ \n");
	printf("│   대  만   │                                                                │  싱가포르  │ \n");
	printf("│            ├--------------------------------┬-------------------------------┤            │ \n");
	printf("├------------┤                                │                               ├------------┤ \n");
	printf("│            │                                │                               │            │ \n");
	printf("│   칠  레   │                                │                               │   미  국   │ \n");
	printf("│            ├--------------------------------┴-------------------------------┤            │ \n");
	printf("├------------┤                                                                ├------------┤ \n");
	printf("│            │                                                                │            │ \n");
	printf("│  브 라 질  │                                                                │   한  국   │ \n");
	printf("│            │                                                                │            │ \n");
	printf("├------------┼------------┬------------┬------------┬------------┬------------┼------------┤ \n");
	printf("│            │            │            │            │            │            │            │ \n");
	printf("│   도  박   │  남 아 공  │  케 나 다  │  프 랑 스  │  덴 마 크  │  벨 기 에  │   시  작   │ \n");
	printf("│            │            │            │            │            │            │            │ \n");
	printf("└------------┴------------┴------------┴------------┴------------┴------------┴------------┘ \n");
	printf(" 예 / 아니요: 키보드 방향키 (↑,↓)\n");
	printf(" 선       택: Enter or Space\n");
	printf(" 주  사   위: 아무 키나\n");
	printf(" 종       료: ESC(자신의 차례에서)\n");
}

void ShowMove(int a) {
	gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);	// 플레이어의 현재 위치를 해당 플레이어 색깔과 symbol로 출력함 (이동 시 사용)
	if (a == 0)	
		RED;

	if (a == 1)
		BLUE;

	if (a == 2)
		YELLOW;

	if (a == 3)
		GREEN;

	printf("%s", Player[a].symbol);
};

void ShowSize(int a) {
	gotoxy(City[Player[a].pos].x[0], City[Player[a].pos].y[0]);		// 해당 도시의 레벨(SIZE)만큼 ■로 표현
	for (int i = 0; i <= City[Player[a].pos].size; i++) {
		if (a == 0)	//색
			RED;

		if (a == 1)
			BLUE;

		if (a == 2)
			YELLOW;

		if (a == 3)
			GREEN;

		printf("■");
	}
}

void Clear() {
	gotoxy(37, 15);							// 차례를 지움
	printf("                     ");
	gotoxy(49, 17);							// 주사위값을 지움
	printf("  ");
	gotoxy(16, 26);										// 도시 설명과 여러 정보들을 지움
	printf("                                                  ");
	gotoxy(16, 27);
	printf("                                                  ");
	gotoxy(16, 28);
	printf("                                                  ");
	gotoxy(24, 8);		// Player1의 잔고를 지움
	printf("            ");
	gotoxy(24, 9);		// Player1의 건물수를 지움
	printf("      ");
	gotoxy(40, 8);		// Player1의 랭킹을 지움
	printf("    ");
	gotoxy(57, 8);		// Player2의 잔고를 지움
	printf("            ");
	gotoxy(57, 9);		// Player2의 건물수를 지움
	printf("      ");
	gotoxy(73, 8);		// Player2의 랭킹을 지움
	printf("    ");
	gotoxy(24, 23);		// Player3의 잔고를 지움
	printf("            ");
	gotoxy(24, 24);		// Player3의 건물수를 지움
	printf("      ");
	gotoxy(40, 23);		// Player3의 랭킹을 지움
	printf("    ");
	gotoxy(57, 23);		// Player4의 잔고를 지움
	printf("            ");
	gotoxy(57, 24);		// Player4의 건물수를 지움
	printf("      ");
	gotoxy(73, 23);		// Player4의 랭킹을 지움
	printf("    ");

	gotoxy(55, 26);		// '예'표시를 지움
	printf("       ");
	gotoxy(55, 29);		// '아니요'표시를 지움
	printf("       ");
	gotoxy(67, 29);		// 화살표를 지움
	printf("  ");
	gotoxy(67, 26);
	printf("  ");
};

void Position(int a) {
	int p;
	gotoxy(37, 15);
	if (a == 0)	//색
		RED;

	if (a == 1)
		BLUE;

	if (a == 2)
		YELLOW;

	if (a == 3)
		GREEN;

	printf("*<%s>의 턴*", Player[a].name);		// 해당 플레이어의 색상으로 출력 누구의 턴인지 알려줌
	Sleep(300);

	if (a == 0) {								// 플레이어가 게임 이용자인 경우
		gotoxy(37, 19);
		printf("주사위를 굴려주세요");
		_getch();								// 키보드를 입력 받아 진행하게 함(주사위를 굴리는 느낌)
		gotoxy(37, 19);
		printf("                   ");			// "주사위를 굴려주세요" 지우기
		Sleep(300);
		p = Dice();								// 주사위 값을 얻음
	}
	else										// 플레이어가 컴퓨터인 경우
		p = Dice();								// 바로 주사위 값을 얻음

	gotoxy(49, 17);
	printf("%d", p);							// 주사위 값이 몇인지 출력

	for (int i = 0; i < p; i++) {
		gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);		// 주사위 값만큼 이동하며 말이 지나간자리의 잔상 제거
		printf("  ");															
		if (Player[a].pos > 24) {												// pos값이 25(시작지점)인 경우
			Player[a].pos = 0;													// pos값을 0으로 만듦(시작지점-0)
			OneCycle(a);														// 완주 보상을 줌
			Sleep(1500);														
			ShowMove(0);														// 이동할 때마다 이동한 칸에 말을 출력
		}
		else {
			Player[a].pos++;													// 그외의 경우 pos값을 1씩 늘려가며
			ShowMove(a);														// 이동할 때마다 이동한 칸에 말을 출력
		}
		Sleep(300);
	}
};

void Ending(int mode) {
	if (mode == 1) {							// 1vs1인 경우
		char no1[50] = { 0 };					// 1등 이름 저장용
		char no2[50] = { 0 };					// 2등 이름 저장용
		for (int i = 0; i <= mode; i++) {
			if (Player[i].ranking == 1) {		// 플레이어의 랭킹이 1등이라면
				strcpy(no1, Player[i].name);	// 그 플레이어의 이름을 no1에 저장(복사)
			}
			else if (Player[i].ranking == 2) {	// 플레이어의 랭킹이 2등이라면
				strcpy(no2, Player[i].name);	// 그 플레이어의 이름을 no2에 저장(복사)
			}
		}
		GOLD;									// 황금색으로 출력
		gotoxy(32, 15);
		printf("*<%s>의 승리*", no1);			// 우승자(1등)의 승리표시를 해주며 각 순위에 해당하는 플레이어의 이름을 차례대로 출력함, 감사메세지 출력
		gotoxy(32, 17);
		printf("1등 : <%s> ", no1);
		gotoxy(32, 19);
		printf("2등 : <%s> ", no2);
		gotoxy(22, 21);
		printf("게임을 즐겨주셔서 감사합니다. -제작자 일동-\n");	
	}
	else if (mode == 2) {						// 1vs1vs1인 경우
		char no1[50] = { 0 };					// 1등 이름 저장용
		char no2[50] = { 0 };					// 2등 이름 저장용
		char no3[50] = { 0 };					// 3등 이름 저장용
		for (int i = 0; i <= mode; i++) {
			if (Player[i].ranking == 1) {		// 플레이어의 랭킹이 1등이라면
				strcpy(no1, Player[i].name);	// 그 플레이어의 이름을 no1에 저장(복사)
			}
			else if (Player[i].ranking == 2) {	// 플레이어의 랭킹이 2등이라면
				strcpy(no2, Player[i].name);	// 그 플레이어의 이름을 no2에 저장(복사)
			}
			else if (Player[i].ranking == 3) {	// 플레이어의 랭킹이 3등이라면
				strcpy(no3, Player[i].name);	// 그 플레이어의 이름을 no3에 저장(복사)
			}
		}
		GOLD;									// 황금색으로 출력
		gotoxy(32, 15);
		printf("*<%s>의 승리*", no1);			// 우승자(1등)의 승리표시를 해주며 각 순위에 해당하는 플레이어의 이름을 차례대로 출력함, 감사메세지 출력
		gotoxy(32, 17);
		printf("1등 : <%s> ", no1);
		gotoxy(32, 19);
		printf("2등 : <%s> ", no2);
		gotoxy(32, 21);
		printf("3등 : <%s> ", no3);
		gotoxy(22, 23);
		printf("게임을 즐겨주셔서 감사합니다. -제작자 일동-\n");
	}
	else if (mode == 3) {						// 1vs1vs1vs1인 경우	
		char no1[50] = { 0 };					// 1등 이름 저장용
		char no2[50] = { 0 };					// 2등 이름 저장용
		char no3[50] = { 0 };					// 3등 이름 저장용
		char no4[50] = { 0 };					// 4등 이름 저장용
		for (int i = 0; i <= mode; i++) {		
			if (Player[i].ranking == 1) {		// 플레이어의 랭킹이 1등이라면
				strcpy(no1, Player[i].name);	// 그 플레이어의 이름을 no1에 저장(복사)
			}
			else if (Player[i].ranking == 2) {	// 플레이어의 랭킹이 2등이라면
				strcpy(no2, Player[i].name);	// 그 플레이어의 이름을 no2에 저장(복사)
			}
			else if (Player[i].ranking == 3) {	// 플레이어의 랭킹이 3등이라면
				strcpy(no3, Player[i].name);	// 그 플레이어의 이름을 no3에 저장(복사)
			}
			else if (Player[i].ranking == 4) {	// 플레이어의 랭킹이 4등이라면
				strcpy(no4, Player[i].name);	// 그 플레이어의 이름을 no4에 저장(복사)
			}
		}
		GOLD;									// 황금색으로 출력
		gotoxy(32, 15);
		printf("*<%s>의 승리*", no1);			// 우승자(1등)의 승리표시를 해주며 각 순위에 해당하는 플레이어의 이름을 차례대로 출력함, 감사메세지 출력
		gotoxy(32, 18);
		printf("1등 : <%s> ", no1);
		gotoxy(32, 21);
		printf("2등 : <%s> ", no2);
		gotoxy(32, 24);
		printf("3등 : <%s> ", no3);
		gotoxy(32, 27);
		printf("4등 : <%s> ", no4);
		gotoxy(22, 30);
		printf("게임을 즐겨주셔서 감사합니다. -제작자 일동-\n");
	}
}
/*int Win(int mode) {
	if (mode == 1) {
		if (Player[1].deathcount == 0) {
			Player[0].ranking = 1;
			Player[1].ranking = 2;
			system("cls");
			Ending(mode);
			return 1;
		}
		else if (Player[0].deathcount == 0) {
			Player[0].ranking = 2;
			Player[1].ranking = 1;
			system("cls");
			Ending(mode);
			return 1;
		}
	}
	else if (mode == 2) {
		if (Player[1].deathcount == 0 && Player[2].deathcount == 0) {
			if (Player[1].ranking == 3)
				Player[2].ranking = 2;
			else
				Player[1].ranking = 2;
			Player[0].ranking = 1;
			system("cls");
			Ending(mode);
			return 1;
		}
		else if (Player[0].deathcount == 0 && Player[2].deathcount == 0) {
			if (Player[0].ranking == 3)
				Player[2].ranking = 2;
			else
				Player[0].ranking = 2;
			Player[1].ranking = 1;
			system("cls");
			Ending(mode);
			return 1;
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount == 0) {
			if (Player[0].ranking == 3)
				Player[1].ranking = 2;
			else
				Player[0].ranking = 2;
			Player[2].ranking = 1;
			system("cls");
			Ending(mode);
			return 1;
		}
		else if (Player[0].deathcount == 0) {
			Player[0].ranking = 3;
			return 0;
		}
		else if (Player[1].deathcount == 0) {
			Player[1].ranking = 3;
			return 0;
		}
		else if (Player[0].deathcount == 0) {
			Player[2].ranking = 3;
			return 0;
		}
	}
	else if (mode == 3) {
		if (Player[1].deathcount == 0 && Player[2].deathcount == 0 && Player[3].deathcount == 0) {
			if ((Player[1].ranking == 4 && Player[2].ranking == 3) || (Player[1].ranking == 3 && Player[2].ranking == 4)) {
				Player[3].ranking = 2;
				Player[0].ranking = 1;
			}
			else if ((Player[1].ranking == 4 && Player[3].ranking == 3) || (Player[1].ranking == 3 && Player[3].ranking == 4)) {
				Player[2].ranking = 2;
				Player[0].ranking = 1;
			}
			else if ((Player[2].ranking == 4 && Player[3].ranking == 3) || (Player[2].ranking == 3 && Player[3].ranking == 4)) {
				Player[1].ranking = 2;
				Player[0].ranking = 1;
			}
			system("cls");
			Ending(mode);
			return 1;
		}
		else if (Player[0].deathcount == 0 && Player[2].deathcount == 0 && Player[3].deathcount == 0) {
			if ((Player[0].ranking == 4 && Player[2].ranking == 3) || (Player[0].ranking == 3 && Player[2].ranking == 4)) {
				Player[3].ranking = 2;
				Player[1].ranking = 1;
			}
			else if ((Player[0].ranking == 4 && Player[3].ranking == 3) || (Player[0].ranking == 3 && Player[3].ranking == 4)) {
				Player[2].ranking = 2;
				Player[1].ranking = 1;
			}
			else if ((Player[2].ranking == 4 && Player[3].ranking == 3) || (Player[2].ranking == 3 && Player[3].ranking == 4)) {
				Player[0].ranking = 2;
				Player[1].ranking = 1;
			}
			system("cls");
			Ending(mode);
			return 1;
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount == 0 && Player[3].deathcount == 0) {
			if ((Player[0].ranking == 4 && Player[1].ranking == 3) || (Player[0].ranking == 3 && Player[1].ranking == 4)) {
				Player[3].ranking = 2;
				Player[2].ranking = 1;
			}
			else if ((Player[0].ranking == 4 && Player[3].ranking == 3) || (Player[0].ranking == 3 && Player[3].ranking == 4)) {
				Player[1].ranking = 2;
				Player[2].ranking = 1;
			}
			else if ((Player[1].ranking == 4 && Player[3].ranking == 3) || (Player[1].ranking == 3 && Player[3].ranking == 4)) {
				Player[0].ranking = 2;
				Player[2].ranking = 1;
			}
			system("cls");
			Ending(mode);
			return 1;
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount == 0 && Player[2].deathcount == 0) {
			if ((Player[0].ranking == 4 && Player[1].ranking == 3) || (Player[0].ranking == 3 && Player[1].ranking == 4)) {
				Player[2].ranking = 2;
				Player[3].ranking = 1;
			}
			else if ((Player[0].ranking == 4 && Player[2].ranking == 3) || (Player[0].ranking == 3 && Player[2].ranking == 4)) {
				Player[1].ranking = 2;
				Player[3].ranking = 1;
			}
			else if ((Player[1].ranking == 4 && Player[2].ranking == 3) || (Player[1].ranking == 3 && Player[2].ranking == 4)) {
				Player[0].ranking = 2;
				Player[3].ranking = 1;
			}
			system("cls");
			Ending(mode);
			return 1;
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount != 0 && Player[2].deathcount != 0 && Player[3].deathcount != 0)
			Player[0].ranking = 4;
		else if (Player[0].deathcount != 0 && Player[1].deathcount == 0 && Player[2].deathcount != 0 && Player[3].deathcount != 0)
			Player[1].ranking = 4;
		else if (Player[0].deathcount != 0 && Player[1].deathcount != 0 && Player[2].deathcount == 0 && Player[3].deathcount != 0)
			Player[2].ranking = 4;
		else if (Player[0].deathcount != 0 && Player[1].deathcount != 0 && Player[2].deathcount != 0 && Player[3].deathcount == 0)
			Player[3].ranking = 4;
		else if (Player[0].deathcount == 0 && Player[1].deathcount == 0 && Player[2].deathcount != 0 && Player[3].deathcount != 0) {
			if (Player[0].ranking == 4)
				Player[1].ranking = 3;
			else
				Player[0].ranking = 3;
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount != 0 && Player[2].deathcount == 0 && Player[3].deathcount != 0) {
			if (Player[0].ranking == 4)
				Player[2].ranking = 3;
			else
				Player[0].ranking = 3;
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount != 0 && Player[2].deathcount != 0 && Player[3].deathcount == 0) {
			if (Player[0].ranking == 4)
				Player[3].ranking = 3;
			else
				Player[0].ranking = 3;
		}
		else if (Player[0].deathcount != 0 && Player[1].deathcount == 0 && Player[2].deathcount == 0 && Player[3].deathcount != 0) {
			if (Player[1].ranking == 4)
				Player[2].ranking = 3;
			else
				Player[1].ranking = 3;
		}
		else if (Player[0].deathcount != 0 && Player[1].deathcount == 0 && Player[2].deathcount != 0 && Player[3].deathcount == 0) {
			if (Player[1].ranking == 4)
				Player[3].ranking = 3;
			else
				Player[1].ranking = 3;
		}
		else if (Player[0].deathcount != 0 && Player[1].deathcount != 0 && Player[2].deathcount == 0 && Player[3].deathcount == 0) {
			if (Player[2].ranking == 4)
				Player[3].ranking = 3;
			else
				Player[2].ranking = 3;
		}
	}
	return 0;
}*/
// win함수의 기능은 ingameranking에 포함 시킴

void info_Update(int mode) {
	GOLD;						// 황금색으로 출력
	Player[0].citycount = 0;	// 각각 플레이어의 도시 수를 0으로 초기화(다시 계산)
	Player[1].citycount = 0;
	Player[2].citycount = 0;
	Player[3].citycount = 0;

	for (int i = 0; i < MAX_CITY; i++) {						// 각각 플레이어의 도시수를 다시 계산
		if (strcmp(City[i].owner, Player[0].name) == 0)
			Player[0].citycount++;
		else if (strcmp(City[i].owner, Player[1].name) == 0)
			Player[1].citycount++;
		else if (strcmp(City[i].owner, Player[2].name) == 0)
			Player[2].citycount++;
		else if (strcmp(City[i].owner, Player[3].name) == 0)
			Player[3].citycount++;
	}
	switch (mode) {								
	case 3:	gotoxy(57, 23);						// mode가 3(1vs1vs1vs1)인 경우 Player4의 정보 업데이트
		printf("%d 원", Player[3].money);
		gotoxy(57, 24);
		printf("%d", Player[3].citycount);
		gotoxy(73, 23);
		printf("%d 등", Player[3].ranking);
	case 2:	gotoxy(24, 23);						// mode가 2(1vs1vs1), 3(break를 안해줌)인 경우 Player3의 정보 업데이트
		printf("%d 원", Player[2].money);
		gotoxy(24, 24);
		printf("%d", Player[2].citycount);
		gotoxy(40, 23);
		printf("%d 등", Player[2].ranking);
	case 1: gotoxy(24, 8);						// mode가 1(1vs1), 2, 3(break를 안해줌)인 경우 Player1, Player2의 정보 업데이트
		printf("%d 원", Player[0].money);
		gotoxy(24, 9);
		printf("%d", Player[0].citycount);
		gotoxy(40, 8);
		printf("%d 등", Player[0].ranking);
		gotoxy(57, 8);
		printf("%d 원", Player[1].money);
		gotoxy(57, 9);
		printf("%d", Player[1].citycount);
		gotoxy(73, 8);
		printf("%d 등", Player[1].ranking);
		break;
	}
}

int C_Answer(int a, int b) {	// 주인 없는 땅 구매 결정, 인수 결정, 인수 후 추가 구매 결정
	int enemyland = 0;			// 상대방 땅의 총 가격 계산용
	int myland = 0;				// 플레이어의 땅의 총 가격 계산용

	for (int i = 0; i < MAX_CITY; i++) {
		if (strcmp(City[i].owner, "없음") != 0) {				// 주인이 있는 도시일 경우
			if (strcmp(City[i].owner, Player[a].name) != 0)		// 주인이 자신이 아니면(상대방) enemyland에 그 도시의 가격을 더함
				enemyland += City[i].price[City[i].size];		
			else												// 주인이 자신이면 myland에 그 도시의 가격을 더함
				myland += City[i].price[City[i].size];
		}
	}
	if (b == 0) {	// 주인이 없는 땅 혹은 주인이 상대방인 땅을 인수할 경우
		if (strcmp(City[Player[a].pos].owner, "없음") == 0) {	// 주인이 없을 경우 이 땅을 인수한 후 남은 돈이 다음에 잃을 것으로 예상되는 기대값보다 높으면 생존확률이 높으므로 인수하고 남은돈(보유 자산-인수 비용)>= 잃을 것으로 예상되는 기댓값((상대방 땅의 총 가격 - 내 땅의 총 가격(상대방이 밟을 경우) - 인수 후 내 땅이 되는 이 땅의 가격)/총 도시수)을 만족하며 인수후에도 파산 위험이 없을 경우 인수함
			if (Player[a].money - City[Player[a].pos].price[City[Player[a].pos].size] >= (enemyland - myland - City[Player[a].pos].price[City[Player[a].pos].size]) / MAX_CITY && Player[a].money - City[Player[a].pos].price[City[Player[a].pos].size] >= 0) 
				return 1;
			else
				return 0;
		}
		else {	// 상대방의 땅을 인수하는 경우 이 땅을 인수한 후 다음에 잃을 것으로 예상되는 기대값보다 높으면 생존확률이 높으므로 인수하고 남은돈(보유 자산-인수 비용)>= 잃을 것으로 예상되는 기댓값((상대방 땅의 총 가격 - 내 땅의 총 가격(상대방이 밟을 경우) - 인수 후 내 땅이 되는 이 땅의 가격*2(상대방의 땅가격에서 빼고 내 땅의 가격에 더하므로 *2))/총 도시수)을 만족하며 인수후에도 파산 위험이 없을 경우 인수함
			if (Player[a].money - City[Player[a].pos].price[City[Player[a].pos].size] >= (enemyland - myland - City[Player[a].pos].price[City[Player[a].pos].size] * 2) / MAX_CITY && Player[a].money - City[Player[a].pos].price[City[Player[a].pos].size] >= 0) // 비싼 도시보다 지금 지불 후 돈이 더 많을 때(파산 위험x)
				return 1;
			else
				return 0;
		}
	}
	else if (b == 1) {	// 인수하고 추가 건설을 할 경우, 주인이 나 일경우 추가 건설을 할 경우
		if (Player[a].money - City[Player[a].pos].price[0] >= (enemyland - myland - City[Player[a].pos].price[0]) / MAX_CITY && (Player[a].money - City[Player[a].pos].price[0]) >= 0) // 이 땅을 강화한 후 남은 돈이 다음에 잃을 것으로 예상되는 기대값보다 높으면 생존확률이 높으므로 인수하고 남은돈(보유 자산 - 강화 비용) >= 잃을 것으로 예상되는 기댓값((상대방 땅의 총 가격 - 내 땅의 총 가격(상대방이 밟을 경우) - 강화 후 증가되는 이 땅의 가격) / 총 도시수)을 만족하며 인수후에도 파산 위험이 없을 경우 인수함
			return 1;
		else
			return 0;
	}
}

int C_Gambling_Answer(int a) {
	if (a == 1 || a == 2 || a == 3) {	// 플레이어가 컴퓨터인 경우
		return rand() % 2;				// 랜덤으로 1(홀수) , 0(짝수)을 반환
	}
	else								// 그럴일은 없지만 플레이어인 경우
		return Answer(a, 0);			// 스스로 선택하도록 만듦
}

void CheckCityCount(int j) {
	Player[j].citycount = 0;								// 플레이어 보유 도시 파악을 위해 0으로 초기화하고 다시 카운트함
	for (int i = 0; i < MAX_CITY; i++)	{
		if (strcmp(City[i].owner, Player[j].name) == 0) {	// 해당 플레이어가 도시의 주인인 경우 도시수+1
			Player[j].citycount++;
		}
	}
}

void Bankrupt_Answer(int j) {
	int i = 0;			
	int total = 0;				// 총 처분 가격
	int lowest_number = 0;		// 가장 싼 가격을 가진 도시의 정보
	int save_number = 0;		// 파산 위기가 해제되는 가장 싼 비용이 드는 도시의 정보
	int cyclecount = 0;			// 몇바퀴를 돌았는지 계산용
	while (Player[j].money + total < 0) {	// 플레이어가 현재 보유한 돈과 처분한 도시의 비용의 합이 0보다 작으면(파산 위기) 반복
		int lowest_price = Highest;			// 비교를 위해 가장 비싼 가격으로 만듦(보유중인 도시 중 가장 싼 가격정보)
		int save_price = Highest;			// 비교를 위해 가장 비싼 가격으로 만듦(보유중인 도시 중 가장 싸게 파산 위기를 탈출할 수 있는 가격정보)
		int now_price = 0;					// 현재 비교 중인 가격 정보
		if (Player[j].citycount == 0) {				// 모두 처분했는데도 파산 위기인 경우(파산이므로)
			Player[j].deathcount = 0;				// 해당 플레이어의 생명이 0이 됨
			Player[j].deathturn = Game.totalturn;	// 해당 플레이어가 죽은 턴 저장(순위 비교용)
			Player[j].money = 0;					// 돈을 0으로 초기화 함
			break;
		}

		for (i = 0; i < MAX_CITY; i++)									
		{
			if (strcmp(City[i].owner, Player[j].name) == 0) {			// 플레이어의 보유 도시 파악
				if (City[i].price[City[i].size] <= lowest_price) {		// 보유한 도시 중 가장 싼 가격의 도시인지 확인
					lowest_price = City[i].price[City[i].size];			// 가장 싸다면 그 가격을 lowest_price에 저장(계속해서 제일 싼 가격을 확인하기 위해)
					lowest_number = i;									// 그 도시에 대한 정보 저장(몇번째 도시였는지)
				}
				else {													// 가장 싼 가격이 아닐 경우
					if (cyclecount >= 1) {								// 한바퀴이상 돌았을 경우(가장 비싼 도시를 팔아도 파산 위기를 벗어날 수 있지만 가장 싼 2개의 도시를 팔아도 파산 위기를 벗어날 수 있을 경우 후자가 더 역전에 유리함) 
						now_price = City[i].price[City[i].size];		// now_price에 현재 도시 가격을 그대로 넣고
						if (Player[j].money + total + now_price > 0 && now_price < save_price) {	// 만약 보유 자산 + 처분한 값 + now_price > 0이고(파산 위기 해제), 이 조건을 만족한 이전의 now_price(save_price에 저장됨)의 가격보다 싼 경우
							save_price = now_price;						// save_price에 now_price가격을 저장
							save_number = i;							// 그 도시에 대한 정보 저장(몇번째 도시였는지)
						}
					}
				}
			}
		}
		if (Player[j].money + total + lowest_price >= 0) {					// 만약 보유 자산 + 처분한 값 + 가장 싼 도시의 가격 >= 0이라면(파산 위기 해제)
			Player[j].money += total + lowest_price;						// 보유 자산에 처분한 값과 가장 싼 도시의 가격을 더함
			gotoxy(City[lowest_number].x[0], City[lowest_number].y[0]);		// 가장 싼 도시를 처분(size를 0으로 만들고 주인을 "없음"으로 만들고 세워놓은 건물 모양도 없앰)
			printf("         ");
			strcpy(City[lowest_number].owner, "없음");					
			City[lowest_number].size = 0;
		}
		else if (Player[j].money + total + save_price >= 0 && cyclecount >= 1) {	// 만약 보유 자산 + 처분한 값 + save_price(파산 위기를 해제하는 가장 저렴한 가격) >= 0이라면
			Player[j].money += total + save_price;									// 보유 자산에 처분한 값과 save_price의 가격을 더함	
			gotoxy(City[save_number].x[0], City[save_number].y[0]);					// save_number에 저장된 정보에 관한 도시를 처분(size를 0으로 만들고 주인을 "없음"으로 만들고 세워놓은 건물 모양도 없앰)
			printf("         ");
			strcpy(City[save_number].owner, "없음");
			City[save_number].size = 0;
		}
		else {																// 그 외의 경우엔
			total += lowest_price;											// 처분한 값에 가장 싼 도시의 가격을 추가
			gotoxy(City[lowest_number].x[0], City[lowest_number].y[0]);		// 가장 싼 도시를 처분함(size를 0으로 만들고 주인을 "없음"으로 만들고 세워놓은 건물 모양도 없앰)
			printf("         ");
			strcpy(City[lowest_number].owner, "없음");
			City[lowest_number].size = 0;
		}
		CheckCityCount(j);													// 플레이어의 보유 도시 수 확인(0인데 파산 위기가 해제되지 않았다면 파산인걸 알기 위해서 정보 업데이트)
		cyclecount++;														// 이 과정이 몇번 반복되는건지 확인(첫번째는 가장 싼 도시를 매각하기 위해)
	}
}

int turnchange(int mode, int i) {
	if (mode == 1) {	// 플레이어 턴 변화
		if (i == 1)
			i = 0;
		else
			i++;
	}
	else if (mode == 2) {
		if (i == 2) {
			i = 0;
		}
		else {
			i++;
		}
		if (Player[i].deathcount == 0) {		// 어떤 플레이어가 사망한 경우 그 플레이어의 턴을 넘김
			i = turnchange(mode, i);
		}

	}
	else if (mode == 3) {
		if (i == 3)
			i = 0;
		else
			i++;
		if (Player[i].deathcount == 0) {		// 어떤 플레이어가 사망한 경우 그 플레이어의 턴을 넘김
			i = turnchange(mode, i);
		}
	}
	return i;
}

int ingameranking(int mode) {
	int p[4] = { 0 };	// 각 플레이어들의 현재 보유 총 자산(도시가격 + 자산(현금))
	if (mode == 1) {	// 1 vs 1인 경우
		for (int i = 0; i < MAX_CITY; i++) {
			if (strcmp(City[i].owner, Player[0].name) == 0) {		// 도시의 주인의 총 자산에 도시의 가격을 더함
				p[0] += City[i].price[City[i].size];
			}
			else if (strcmp(City[i].owner, Player[1].name) == 0) {
				p[1] += City[i].price[City[i].size];
			}
		}
		p[0] += Player[0].money;	// 각 플레이어들의 총 자산에 현재 보유한 자산(현금)을 더함
		p[1] += Player[1].money;
		if (p[0] >= p[1]) {			// 총 자산이 Player1>=Player2인 경우
			Player[0].ranking = 1;	// Player1이 1등 Player2가 2등
			Player[1].ranking = 2;
		}
		else if (p[0] < p[1]) {		// 총 자산이 Player2>Player1인 경우
			Player[0].ranking = 2;	// Player2가 1등 Player1이 2등
			Player[1].ranking = 1;
		}
		if (Player[1].deathcount == 0) {	// Player2가 죽은 경우
			Player[0].ranking = 1;			// Player1이 1등 Player2가 2등
			Player[1].ranking = 2;
			system("cls");					// 게임 화면을 지움
			Ending(mode);					// 엔딩 창(게임이 끝났으므로)
			return 1;						// 프로그램 종료(wincount에 1반환하여 while문이 끝남)
		}
		else if (Player[0].deathcount == 0) {	// Player1이 죽은 경우
			Player[0].ranking = 2;				// Player2가 1등 Player1이 2등
			Player[1].ranking = 1;
			system("cls");						// 게임 화면을 지움
			Ending(mode);						// 엔딩 창(게임이 끝났으므로)
			return 1;							// 프로그램 종료(wincount에 1반환하여 while문이 끝남)
		}
		else
			return 0;

	}
	if (mode == 2) {	// 1 vs 1 vs 1인 경우
		int flag = 0;	// 죽은 플레이어의 총 수
		for (int i = 0; i < MAX_CITY; i++) {
			if (strcmp(City[i].owner, Player[0].name) == 0) {		// 도시의 주인의 총 자산에 도시의 가격을 더함
				p[0] += City[i].price[City[i].size];
			}
			else if (strcmp(City[i].owner, Player[1].name) == 0) {
				p[1] += City[i].price[City[i].size];
			}
			else if (strcmp(City[i].owner, Player[2].name) == 0) {
				p[2] += City[i].price[City[i].size];
			}
		}
		p[0] += Player[0].money;	// 각 플레이어들의 총 자산에 현재 보유한 자산(현금)을 더함
		p[1] += Player[1].money;
		p[2] += Player[2].money;
		if (Player[0].deathcount == 0 && Player[1].deathcount != 0 && Player[2].deathcount != 0) {		// Player1이 죽은 경우
			if (p[1] >= p[2]) {																			// 총 자산이 Player2>=Player3인 경우
				Player[1].ranking = 1;																	// Player2가 1등 Player3이 2등
				Player[2].ranking = 2;
			}
			else {																						// 총 자산이 Player2<Player3인 경우
				Player[1].ranking = 2;																	// Player2가 2등 Player3이 1등
				Player[2].ranking = 1;
			}
			Player[0].ranking = 3;																		// Player1은 3등
		}
		else if (Player[0].deathcount != 0 && Player[1].deathcount == 0 && Player[2].deathcount != 0) {	// Player2이 죽은 경우
			if (p[0] >= p[2]) {																			// 총 자산이 Player1>=Player3인 경우
				Player[0].ranking = 1;																	// Player1이 1등 Player3이 2등
				Player[2].ranking = 2;
			}
			else {																						// 총 자산이 Player1<Player3인 경우
				Player[0].ranking = 2;																	// Player1이 2등 Player3이 1등
				Player[2].ranking = 1;
			}
			Player[1].ranking = 3;																		// Player2는 3등
		}
		else if (Player[0].deathcount != 0 && Player[1].deathcount != 0 && Player[2].deathcount == 0) {	// Player3이 죽은 경우
			if (p[0] >= p[1]) {																			// 총 자산이 Player1>=Player2인 경우
				Player[0].ranking = 1;																	// Player1이 1등 Player2가 2등
				Player[1].ranking = 2;
			}
			else {																						// 총 자산이 Player1<Player2인 경우
				Player[0].ranking = 2;																	// Player1이 2등 Player2가 1등
				Player[1].ranking = 1;
			}
			Player[2].ranking = 3;																		// Player3는 3등
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount == 0 && Player[2].deathcount != 0) {	// Player1, Player2가 죽은 경우
			if (Player[0].deathturn >= Player[1].deathturn) {											// Player1이 Player2보다 오래 생존한 경우
				Player[0].ranking = 2;																	// Player1이 2등 Player2가 3등
				Player[1].ranking = 3;
			}
			else {																						// Player2가 Player1보다 오래 생존한 경우
				Player[0].ranking = 3;																	// Player1이 3등 Player2가 2등
				Player[1].ranking = 2;
			}
			Player[2].ranking = 1;																		// Player3이 1등
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount != 0 && Player[2].deathcount == 0) {	// Player1, Player3이 죽은 경우
			if (Player[0].deathturn >= Player[2].deathturn) {											// Player1이 Player3보다 오래 생존한 경우
				Player[0].ranking = 2;																	// Player1이 2등 Player3이 3등
				Player[2].ranking = 3;
			}
			else {																						// Player3이 Player1보다 오래 생존한 경우
				Player[0].ranking = 3;																	// Player1이 3등 Player3이 2등
				Player[2].ranking = 2;
			}
			Player[1].ranking = 1;																		// Player2가 1등
		}
		else if (Player[0].deathcount != 0 && Player[1].deathcount == 0 && Player[2].deathcount == 0) {	// Player2, Player3이 죽은 경우
			if (Player[1].deathturn >= Player[2].deathturn) {											// Player2가 Player3보다 오래 생존한 경우
				Player[1].ranking = 2;																	// Player2가 2등 Player3이 3등
				Player[2].ranking = 3;
			}
			else {																						// Player3이 Player2보다 오래 생존한 경우
				Player[1].ranking = 3;																	// Player2가 3등 Player3이 2등
				Player[2].ranking = 2;
			}
			Player[0].ranking = 1;																		// Player1이 1등
		}
																										// 모두 생존한 경우
		else if (p[0] >= p[1] && p[0] >= p[2] && p[1] >= p[2]) {										// 총자산이 Player1>=Player2>=Player3인 경우
			Player[0].ranking = 1;																		// Player1이 1등 Player2가 2등 Player3이 3등
			Player[1].ranking = 2;
			Player[2].ranking = 3;
		}
		else if (p[0] >= p[1] && p[0] >= p[2] && p[2] > p[1]) {											// 총자산이 Player1>=Player3>Player2인 경우
			Player[0].ranking = 1;																		// Player1이 1등 Player2가 3등 Player3이 2등
			Player[1].ranking = 3;
			Player[2].ranking = 2;
		}
		else if (p[1] > p[0] && p[1] >= p[2] && p[0] >= p[2]) {											// 총자산이 Player2>Player1>=Player3인 경우
			Player[0].ranking = 2;																		// Player1이 2등 Player2가 1등 Player3이 3등
			Player[1].ranking = 1;
			Player[2].ranking = 3;
		}
		else if (p[2] > p[0] && p[2] > p[1] && p[0] >= p[1]) {											// 총자산이 Player3>Player1>=Player2인 경우	
			Player[0].ranking = 2;																		// Player1이 2등 Player2가 3등 Player3이 1등
			Player[1].ranking = 3;
			Player[2].ranking = 1;
		}
		else if (p[1] > p[0] && p[1] >= p[2] && p[2] > p[0]) {											// 총자산이 Player2>=Player3>Player1인 경우
			Player[0].ranking = 3;																		// Player1이 3등 Player2가 1등 Player3이 2등
			Player[1].ranking = 1;
			Player[2].ranking = 2;
		}
		else if (p[2] > p[0] && p[2] > p[1] && p[1] > p[0]) {											// 총자산이 Player3>Player2>Player1인 경우
			Player[0].ranking = 3;																		// Player1이 3등 Player2가 2등 Player3이 1등
			Player[1].ranking = 2;
			Player[2].ranking = 1;
		}
		for (int i = 0; i <= mode; i++) {		// 죽은 플레이어 수 만큼 flag++
			if (Player[i].deathcount == 0) {
				flag++;
			}
		}
		if (flag == 2) {	// 1vs1vs1에서 두명이 죽었으므로 게임이 종료
			system("cls");	// 게임 화면을 지움
			Ending(mode);	// 엔딩 창(게임이 끝났으므로)
			return 1;		// 프로그램 종료(wincount에 1반환하여 while문이 끝남)
		}
		else
			return 0;
	}
	if (mode == 3) {		// 1vs1vs1vs1인 경우
		for (int i = 0; i < MAX_CITY; i++) {
			if (strcmp(City[i].owner, Player[0].name) == 0) {			// 도시의 주인의 총 자산에 도시의 가격을 더함
				p[0] += City[i].price[City[i].size];
			}
			else if (strcmp(City[i].owner, Player[1].name) == 0) {
				p[1] += City[i].price[City[i].size];
			}
			else if (strcmp(City[i].owner, Player[2].name) == 0) {
				p[2] += City[i].price[City[i].size];
			}
			else if (strcmp(City[i].owner, Player[3].name) == 0) {
				p[3] += City[i].price[City[i].size];
			}
		}
		p[0] += Player[0].money;	// 각 플레이어들의 총 자산에 현재 보유한 자산(현금)을 더함
		p[1] += Player[1].money;
		p[2] += Player[2].money;
		p[3] += Player[3].money;
		int first = 0;			// 자산이 가장 많은 사람의 자산
		int first_num = 0;		// 자산이 가장 많은 사람의 정보
		int second = 0;			// 자산이 두번째로 많은 사람의 자산
		int second_num = 0;		// 자산이 두번째로 많은 사람의 정보
		int third = 0;			// 자산이 세번째로 많은 사람의 자산
		int third_num = 0;		// 자산이 세번째로 많은 사람의 정보
		int fourth = 0;			// 자산이 가장 적은 사람의 자산
		int fourth_num = 0;		// 자산이 가장 적은 사람의 정보
		int livecount = 0;		// 살아있는 플레이어 수
		int deathcount = 0;		// 죽은 플레이어 수
		for (int i = 0; i <= mode; i++) {		
			if (Player[i].deathcount == 0) {	// 플레이어가 죽어었다면 deathcount++
				deathcount++;
			}
			else								// 플레이어가 살아있다면 livecount++
				livecount++;
		}
		if (deathcount == 3) {					// 죽은 플레이어가 3명이라면
			int a[3] = { 0 };					// 죽은 플레이어의 턴수 저장
			int b[3] = { 0 };					// 죽은 플레이어의 정보 저장
			int j = 0;
			for (int i = 0; i <= mode; i++) {
				if (Player[i].deathcount == 0) {	// 플레이어가 죽어있다면
					a[j] = Player[i].deathturn;		// a에 죽은 플레이어의 턴수를 저장
					b[j] = i;						// b에 죽은 플레이어의 정보를 저장
					j++;
				}
				else
					Player[i].ranking = 1;			// 살아있는 플레이어는 1등(나머지는 죽었으므로)
			}

			if (a[0] >= a[1] && a[0] >= a[2] && a[1] >= a[2]) {		// 죽은 턴수가 Player[b[0]]>=Player[b[1]]>=Player[b[2]]인 경우
				Player[b[0]].ranking = 2;							// Player[b[0]]은 2등 Player[b[1]]은 3등 Player[b[2]]는 4등 
				Player[b[1]].ranking = 3;
				Player[b[2]].ranking = 4;
			}
			else if (a[0] >= a[1] && a[0] >= a[2] && a[2] > a[1]) {	// 죽은 턴수가 Player[b[0]]>=Player[b[2]]>Player[b[1]]인 경우
				Player[b[0]].ranking = 2;							// Player[b[0]]은 2등 Player[b[1]]은 4등 Player[b[2]]는 3등 
				Player[b[1]].ranking = 4;
				Player[b[2]].ranking = 3;
			}
			else if (a[1] > a[0] && a[1] >= a[2] && a[0] >= a[2]) {	// 죽은 턴수가 Player[b[1]]>Player[b[0]]>=Player[b[2]]인 경우
				Player[b[0]].ranking = 3;							// Player[b[0]]은 3등 Player[b[1]]은 2등 Player[b[2]]는 4등 
				Player[b[1]].ranking = 2;
				Player[b[2]].ranking = 4;
			}
			else if (a[2] > a[0] && a[2] > a[1] && a[0] >= a[1]) {	// 죽은 턴수가 Player[b[2]]>Player[b[0]]>=Player[b[1]]인 경우
				Player[b[0]].ranking = 3;							// Player[b[0]]은 3등 Player[b[1]]은 4등 Player[b[2]]는 2등 
				Player[b[1]].ranking = 4;
				Player[b[2]].ranking = 2;
			}
			else if (a[1] > a[0] && a[1] >= a[2] && a[2] > a[0]) {	// 죽은 턴수가 Player[b[1]]>=Player[b[2]]>Player[b[0]]인 경우
				Player[b[0]].ranking = 4;							// Player[b[0]]은 4등 Player[b[1]]은 2등 Player[b[2]]는 3등 
				Player[b[1]].ranking = 2;
				Player[b[2]].ranking = 3;
			}
			else if (a[2] > a[0] && a[2] > a[1] && a[1] > a[0]) {	// 죽은 턴수가 Player[b[2]]>Player[b[1]]>Player[b[0]]인 경우
				Player[b[0]].ranking = 4;							// Player[b[0]]은 4등 Player[b[1]]은 3등 Player[b[2]]는 2등 
				Player[b[1]].ranking = 3;
				Player[b[2]].ranking = 2;
			}
			system("cls");											// 게임 화면을 지움
			Ending(mode);											// 엔딩 창(게임이 끝났으므로)
			return 1;												// 프로그램 종료(wincount에 1반환하여 while문이 끝남)
		}
		else if (deathcount == 2) {				// 죽은 플레이어가 2명이라면
			int a[2] = { 0 };					// 죽은 플레이어의 정보 저장
			int b[2] = { 0 };					// 살아있는 플레이어의 정보 저장
			int j = 0;
			int k = 0;
			for (int i = 0; i <= mode; i++) {
				if (Player[i].deathcount == 0) {	// 플레이어가 죽어있다면
					a[j] = i;						// a에 죽은 플레이어의 정보를 저장
					j++;							
				}
				else {								// 플레이어가 살아있다면
					b[k] = i;						// b에 살아있는 플레이어의 정보를 저장
					k++;
				}
			}
			if (Player[a[0]].deathturn > Player[a[1]].deathturn) {	// Player[a[0]]이 Player[a[1]]보다 오래 생존했다면
				Player[a[0]].ranking = 3;							// Player[a[0]]은 3등 Player[a[1]]은 4등
				Player[a[1]].ranking = 4;
			}
			else {													// Player[a[1]]이 Player[a[0]]보다 오래 생존했다면		
				Player[a[0]].ranking = 4;							// Player[a[0]]은 4등 Player[a[1]]은 3등
				Player[a[1]].ranking = 3;
			}
			if (p[b[0]] >= p[b[1]]) {								// 총 자산이 Player[b[0]]>=Player[b[1]]인 경우
				Player[b[0]].ranking = 1;							// Player[b[0]]은 1등 Player[b[1]]은 2등
				Player[b[1]].ranking = 2;
			}
			else {													// 총 자산이 Player[b[0]]<Player[b[1]]인 경우
				Player[b[0]].ranking = 2;							// Player[b[0]]은 2등 Player[b[1]]은 1등
				Player[b[1]].ranking = 1;
			}
		}
		else if (deathcount == 1) {				// 죽은 플레이어가 1명이라면			
			int j = 0;
			for (int i = 0; i <= mode; i++) {
				if (Player[i].deathcount == 0) {	// 죽은 플레이어는 4등
					Player[i].ranking = 4;
					j = i;	// 죽은 플레이어의 정보 저장
				}
			}
			if (j == 0) {	// 죽은 플레이어가 Player1이라면
				if (p[1] >= p[2] && p[1] >= p[3] && p[2] >= p[3]) {		// 총 자산이 Player2>=Player3>=Player4인 경우
					Player[1].ranking = 1;								// Player2는 1등 Player3은 2등 Player4는 3등
					Player[2].ranking = 2;
					Player[3].ranking = 3;
				}
				else if (p[1] >= p[2] && p[1] >= p[3] && p[2] < p[3]) {	// 총 자산이 Player2>=Player4>Player3인 경우
					Player[1].ranking = 1;								// Player2는 1등 Player3은 3등 Player4는 2등
					Player[2].ranking = 3;
					Player[3].ranking = 2;
				}
				else if (p[2] > p[1] && p[2] >= p[3] && p[1] >= p[3]) {	// 총 자산이 Player3>Player2>=Player4인 경우
					Player[1].ranking = 2;								// Player2는 2등 Player3은 1등 Player4는 3등
					Player[2].ranking = 1;
					Player[3].ranking = 3;
				}
				else if (p[2] > p[1] && p[2] >= p[3] && p[1] < p[3]) {	// 총 자산이 Player3>=Player4>Player2인 경우
					Player[1].ranking = 3;								// Player2는 3등 Player3은 1등 Player4는 2등
					Player[2].ranking = 1;
					Player[3].ranking = 2;
				}
				else if (p[3] > p[1] && p[3] > p[2] && p[1] >= p[2]) {	// 총 자산이 Player4>Player2>=Player3인 경우
					Player[1].ranking = 2;								// Player2는 2등 Player3은 3등 Player4는 1등
					Player[2].ranking = 3;
					Player[3].ranking = 1;
				}
				else if (p[3] > p[1] && p[3] > p[2] && p[1] < p[2]) {	// 총 자산이 Player4>Player3>Player2인 경우
					Player[1].ranking = 3;								// Player2는 3등 Player3은 2등 Player4는 1등
					Player[2].ranking = 2;
					Player[3].ranking = 1;
				}
			}
			else if (j == 1) {	// 죽은 플레이어가 Player2라면												
				if (p[0] >= p[2] && p[0] >= p[3] && p[2] >= p[3]) {		// 총 자산이 Player1>=Player3>=Player4인 경우
					Player[0].ranking = 1;								// Player1은 1등 Player3은 2등 Player4는 3등
					Player[2].ranking = 2;
					Player[3].ranking = 3;
				}
				else if (p[0] >= p[2] && p[0] >= p[3] && p[2] < p[3]) {	// 총 자산이 Player1>=Player4>Player3인 경우
					Player[0].ranking = 1;								// Player1은 1등 Player3은 3등 Player4는 2등
					Player[2].ranking = 3;
					Player[3].ranking = 2;
				}
				else if (p[2] > p[0] && p[2] >= p[3] && p[0] >= p[3]) {	// 총 자산이 Player3>Player1>=Player4인 경우
					Player[0].ranking = 2;								// Player1은 2등 Player3은 1등 Player4는 3등
					Player[2].ranking = 1;
					Player[3].ranking = 3;
				}
				else if (p[2] > p[0] && p[2] >= p[3] && p[0] < p[3]) {	// 총 자산이 Player3>=Player4>Player1인 경우
					Player[0].ranking = 3;								// Player1은 3등 Player3은 1등 Player4는 2등
					Player[2].ranking = 1;
					Player[3].ranking = 2;
				}
				else if (p[3] > p[0] && p[3] > p[2] && p[0] >= p[2]) {	// 총 자산이 Player4>Player1>=Player3인 경우
					Player[0].ranking = 2;								// Player1은 2등 Player3은 3등 Player4는 1등
					Player[2].ranking = 3;
					Player[3].ranking = 1;
				}
				else if (p[3] > p[0] && p[3] > p[2] && p[0] < p[2]) {	// 총 자산이 Player4>Player3>Player1인 경우
					Player[0].ranking = 3;								// Player1은 3등 Player3은 2등 Player4는 1등
					Player[2].ranking = 2;
					Player[3].ranking = 1;
				}
			}
			else if (j == 2) {	// 죽은 플레이어가 Player3이라면	
				if (p[0] >= p[1] && p[0] >= p[3] && p[1] >= p[3]) {		// 총 자산이 Player1>=Player2>=Player4인 경우
					Player[0].ranking = 1;								// Player1은 1등 Player2는 2등 Player4는 3등
					Player[1].ranking = 2;
					Player[3].ranking = 3;
				}
				else if (p[0] >= p[1] && p[0] >= p[3] && p[1] < p[3]) {	// 총 자산이 Player1>=Player4>Player2인 경우
					Player[0].ranking = 1;								// Player1은 1등 Player2는 3등 Player4는 2등
					Player[1].ranking = 3;
					Player[3].ranking = 2;
				}
				else if (p[1] > p[0] && p[1] >= p[3] && p[0] >= p[3]) {	// 총 자산이 Player2>Player1>=Player4인 경우
					Player[0].ranking = 2;								// Player1은 2등 Player2는 1등 Player4는 3등
					Player[1].ranking = 1;
					Player[3].ranking = 3;
				}
				else if (p[1] > p[0] && p[1] >= p[3] && p[0] < p[3]) {	// 총 자산이 Player2>=Player4>Player1인 경우
					Player[0].ranking = 3;								// Player1은 3등 Player2는 1등 Player4는 2등
					Player[1].ranking = 1;
					Player[3].ranking = 2;
				}
				else if (p[3] > p[0] && p[3] > p[1] && p[0] >= p[1]) {	// 총 자산이 Player4>Player1>=Player2인 경우
					Player[0].ranking = 2;								// Player1은 2등 Player2는 3등 Player4는 1등
					Player[1].ranking = 3;
					Player[3].ranking = 1;
				}
				else if (p[3] > p[0] && p[3] > p[1] && p[0] < p[1]) {	// 총 자산이 Player4>Player2>Player1인 경우
					Player[0].ranking = 3;								// Player1은 3등 Player2는 2등 Player4는 1등
					Player[1].ranking = 2;
					Player[3].ranking = 1;
				}
			}
			else if (j == 3) {	// 죽은 플레이어가 Player4라면
				if (p[0] >= p[1] && p[0] >= p[2] && p[1] >= p[2]) {		// 총 자산이 Player1>=Player2>=Player3인 경우
					Player[0].ranking = 1;								// Player1은 1등 Player2는 2등 Player3은 3등
					Player[1].ranking = 2;
					Player[2].ranking = 3;
				}
				else if (p[0] >= p[1] && p[0] >= p[2] && p[1] < p[2]) {	// 총 자산이 Player1>=Player3>Player2인 경우
					Player[0].ranking = 1;								// Player1은 1등 Player2는 3등 Player3은 2등
					Player[1].ranking = 3;
					Player[2].ranking = 2;
				}
				else if (p[1] > p[0] && p[1] >= p[2] && p[0] >= p[2]) {	// 총 자산이 Player2>Player1>=Player3인 경우
					Player[0].ranking = 2;								// Player1은 2등 Player2는 1등 Player3은 3등
					Player[1].ranking = 1;
					Player[2].ranking = 3;
				}
				else if (p[1] > p[0] && p[1] >= p[2] && p[0] < p[2]) {	// 총 자산이 Player2>=Player3>Player1인 경우
					Player[0].ranking = 3;								// Player1은 3등 Player2는 1등 Player3은 2등
					Player[1].ranking = 1;
					Player[2].ranking = 2;
				}
				else if (p[2] > p[0] && p[2] > p[1] && p[0] >= p[1]) {	// 총 자산이 Player3>Player1>=Player2인 경우
					Player[0].ranking = 2;								// Player1은 2등 Player2는 3등 Player3은 1등
					Player[1].ranking = 3;
					Player[2].ranking = 1;
				}
				else if (p[2] > p[0] && p[2] > p[1] && p[0] < p[1]) {	// 총 자산이 Player3>Player2>Player1인 경우
					Player[0].ranking = 3;								// Player1은 3등 Player2는 2등 Player3은 1등
					Player[1].ranking = 2;
					Player[2].ranking = 1;
				}
			}
		}
		else {	// 죽은 사람이 없는 경우
			for (int i = mode; i >= 0; i--) {	
				if (p[i] >= first) {	// 총 자산이 가장 많은 사람의 자산이 first가 되고 first_num에 그 사람의 정보가 저장 됨
					first = p[i];		
					first_num = i;
				}
			}
			for (int i = mode; i >= 0; i--) {
				if (p[i] >= second && p[i] <= first && i != first_num) {	// 총 자산이 두번째로 많은 사람의 자산이 second가 되고 second_num에 그 사람의 정보가 저장 됨
					second = p[i];
					second_num = i;
				}
			}
			for (int i = mode; i >= 0; i--) {
				if (p[i] >= third && p[i] <= second && i != first_num && i != second_num) {	// 총 자산이 세번째로 많은 사람의 자산이 third가 되고 third_num에 그 사람의 정보가 저장 됨
					third = p[i];
					third_num = i;
				}
			}
			for (int i = mode; i >= 0; i--) {
				if (p[i] >= fourth && p[i] <= third && i != first_num && i != second_num && i != third_num) {	// 총 자산이 가장 적음 사람의 자산이 fourth가 되고 fourth_num에 그 사람의 정보가 저장 됨
					fourth = p[i];
					fourth_num = i;
				}
			}
			Player[first_num].ranking = 1;		// 자산이 가장 많은 사람이 1등
			Player[second_num].ranking = 2;		// 자산이 두번째로 많은 사람이 2등
			Player[third_num].ranking = 3;		// 자산이 세번째로 많은 사람이 3등
			Player[fourth_num].ranking = 4;		// 자산이 가장 적은 사람이 4등
		}
		return 0;
	}
}

void savegame(void) {
	FILE* fp;	
	fp = fopen("data.bin", "wb");					// data.bin파일을 바이너리 쓰기 모드로 열고 구조체에 저장된 Game,Player,City정보를 data.bin파일에 저장(현재까지의 게임 정보 저장)
	fwrite(&Game, sizeof(Game), 1, fp);
	fwrite(&Player[0], sizeof(Player[0]), 1, fp);
	fwrite(&Player[1], sizeof(Player[1]), 1, fp);
	fwrite(&Player[2], sizeof(Player[2]), 1, fp);
	fwrite(&Player[3], sizeof(Player[3]), 1, fp);
	for (int i = 0; i < MAX_CITY; i++) {
		fwrite(&City[i], sizeof(City[i]), 1, fp);
	}
	fclose(fp);										// 파일을 닫음
}

int gamecontinue(int mode) {						
	system("cls");		// 게임 화면을 지움
	if (mode == 4) {
		FILE* fp = fopen("data.bin", "rb");				// data.bin파일을 바이너리 읽기 모드로 열음, 그 안에 저장되어 있던 게임 정보를 구조체에 불러옴(Game,Player,City)
		fread(&Game, sizeof(Game), 1, fp);	
		fread(&Player[0], sizeof(Player[0]), 1, fp);
		fread(&Player[1], sizeof(Player[1]), 1, fp);
		fread(&Player[2], sizeof(Player[2]), 1, fp);
		fread(&Player[3], sizeof(Player[3]), 1, fp);
		for (int i = 0; i < MAX_CITY; i++) {
			fread(&City[i], sizeof(City[i]), 1, fp);
		}
		fclose(fp);	// data.bin파일을 닫음
		mode = Game.mode;	// 현재 게임 모드를 불러온 게임 정보에 저장되어있던 게임 모드로 바꿈(이어하기 모드라서 4였기 때문)
		World_map();		// 게임판 출력
		Situation(mode);	// 플레이어의 이름, 자산, 도시수에 관한 정보를 화면에 출력하고 플레이어가 위치한 곳에 말(symbol)을 출력
		for (int i = 0; i < MAX_CITY; i++) {	
			if (strcmp(City[i].owner, Player[0].name) == 0) {	// 불러온 데이터를 기반으로 땅의 주인과 그 땅의 SIZE에 따라 게임판에 출력함
				for (int j = 0; j < City[i].size + 1; j++) {
					gotoxy(City[i].x[0], City[i].y[0]);
					RED;
					printf("■");
				}
			}
			else if (strcmp(City[i].owner, Player[1].name) == 0) {
				for (int j = 0; j < City[i].size + 1; j++) {
					gotoxy(City[i].x[0], City[i].y[0]);
					BLUE;
					printf("■");
				}
			}
			else if (strcmp(City[i].owner, Player[2].name) == 0) {
				for (int j = 0; j < City[i].size + 1; j++) {
					gotoxy(City[i].x[0], City[i].y[0]);
					YELLOW;
					printf("■");
				}
			}
			else if (strcmp(City[i].owner, Player[3].name) == 0) {
				for (int j = 0; j < City[i].size + 1; j++) {
					gotoxy(City[i].x[0], City[i].y[0]);
					GREEN;
					printf("■");
				}
			}
		}
	}
	else {
		World_map();		// 게임판 출력
		Situation(mode);	// 플레이어의 이름, 자산, 도시수에 관한 정보를 화면에 출력하고 플레이어가 위치한 곳에 말(symbol)을 출력
	}
	return mode;	// 이어하기 모드였을 경우 기존에 4였지만 게임 정보를 불러와 변경되었기 때문에 이 값을 수정해주기 위해서
}

void ESC_ending(void) {		// ESC 키를 눌러서 게임을 종료했을때의 창
	SKY;
	system("cls");
	gotoxy(35, 19);
	printf("데이터를 저장합니다.");
	gotoxy(30, 21);
	printf("다음에 이어서 진행하시고 싶다면");
	gotoxy(31, 23);
	printf("이어하기 모드로 진행해 주세요.\n\n");
}