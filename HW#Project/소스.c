#include "���.h"

P_info Player[4] = { {"Player1", 5000000, 0, "��", 0, 1, 1, 1},
					{"Player2", 5000000, 0, "��", 0, 1, 1, 2},
					{"Player3", 5000000, 0, "��", 0, 1, 1, 3},
					{"Player4", 5000000, 0, "��", 0, 1, 1, 4}
};

C_info City[MAX_CITY] = {	// ���� �̸�, ���� ����, ������ �ܰ�, x��ǥ, y��ǥ, ������ ���� ��Ȳ									//       x��ǥ(�ǹ�,p1,p2,p3,p4)y��ǥ(�ǹ�,p1,p2,p3,p4)	 
	{"����",	{0,0,0,0},							0,	{81, 81, 88 ,83,86},	{31, 33, 33 ,33 ,33},	"����"},					//0		 81 81 88 83 86			31 33 33 33 33	
	{"���⿡",	{100000,200000,300000,400000},		0,	{68,68,75,70,73},		{31,33,33,33,33},		"����"},					//1		 68 68 75 70 73			31 33 33 33 33		
	{"����ũ",	{120000,240000,360000,480000},		0,	{55,55,62,57,60},		{31,33,33,33,33},		"����"},  					//2		 55 55 62 57 60			31 33 33 33 33      
	{"������",	{140000,280000,420000,560000},		0,	{42,42,49,44,47},		{31,33,33,33,33},		"����"},   					//3      42 42 49 44 47			31 33 33 33 33      
	{"�ɳ���",	{160000,320000,480000,640000},		0,	{29,29,36,31,34},		{31,33,33,33,33},		"����"},					//4      29 29 36 31 34			31 33 33 33 33    
	{"���ư�",	{180000,360000,540000,720000},		0,	{16,16,23,18,21},		{31,33,33,33,33},		"����"},					//5		 16 16 23 18 21			31 33 33 33 33		
	{"����",	{0,0,0,0},							0,	{3,3,10,5,8},			{31,33,33,33,33},		"����"}, 					//6		  3  3 10  5  8			31 33 33 33 33    
	{"�����",	{200000,400000,600000,800000},		0,	{3,3,10,5,8},			{27,29,29,29,29},		"����"},					//7		  3  3 10  5  8			27 29 29 29 29		      
	{"ĥ��",	{220000,440000,660000,880000},		0,	{3,3,10,5,8},			{23,25,25,25,25},		"����"}, 					//8		  3  3 10  5  8			23 25 25 25 25		
	{"�븸",	{240000,480000,720000,960000},		0,	{3,3,10,5,8},			{19,21,21,21,21},		"����"}, 					//9		  3  3 10  5  8			19 21 21 21 21		
	{"��Ʈ��",	{260000,520000,780000,1040000},		0,	{3,3,10,5,8},			{15,17,17,17,17},		"����"}, 					//10	  3  3 10  5  8			15 17 17 17 17		
	{"�ε�",	{280000,560000,840000,1120000},		0,	{3,3,10,5,8},			{11,13,13,13,13},		"����"},					//11	  3  3 10  5  8			11 13 13 13 13		
	{"�߱�",	{300000,600000,900000,1200000},		0,	{3,3,10,5,8},			{7,9,9,9,9},			"����"},	    			//12	  3  3 10  5  8			 7  9  9  9  9		
	{"����",	{320000,640000,960000,1280000},		0,	{3,3,10,5,8},			{3,5,5,5,5},			"����"},   					//13	  3  3 10  5  8			 3  5  5  5  5		
	{"����",	{340000,680000,1020000,1360000},	0,	{16,16,23,18,21},		{3,5,5,5,5},			"����"},    				//14	 16 16 23 18 21			 3  5  5  5  5			
	{"��Ż����",{360000,720000,1080000,1440000},	0,	{29,29,36,31,34},		{3,5,5,5,5},			"����"}, 					//15	 29 29 36 31 34			 3  5  5  5  5		
	{"������",	{380000,760000,1140000,1520000},	0,	{42,42,49,44,47},		{3,5,5,5,5},			"����"},     				//16	 42 42 49 44 47			 3  5  5  5  5		
	{"����",	{400000,800000,1200000,1600000},	0,	{55,55,62,57,60},		{3,5,5,5,5},			"����"},  					//17	 55 55 62 57 60			 3  5  5  5  5		
	{"ȫ��",	{420000,840000,1260000,1680000},	0,	{68,68,75,70,73},		{3,5,5,5,5},			"����"},  					//18	 68 68 75 70 73			 3  5  5  5  5	
	{"Ȳ�ݿ���",{0,0,0,0},							0,	{81, 81, 88 ,83, 86},	{3,5,5,5,5},			"����"},					//19	 81 81 88 83 86			 3  5  5  5  5	
	{"�״�����",{440000,880000,1320000,1760000},	0,	{81, 81, 88 ,83, 86},	{7,9,9,9,9},			"����"},  					//20	 81 81 88 83 86			 7  9  9  9  9	
	{"�Ϻ�",	{460000,920000,1380000,1840000},	0,	{81, 81, 88 ,83, 86},	{11,13,13,13,13},		"����"},  					//21	 81 81 88 83 86			11 13 13 13 13		
	{"����",	{480000,960000,1440000,1920000},	0,	{81, 81, 88 ,83, 86},	{15,17,17,17,17},		"����"},  					//22	 81 81 88 83 86			15 17 17 17 17		
	{"�̰�����",{500000,1000000,1500000,2000000},	0,	{81, 81, 88 ,83, 86},	{19,21,21,21,21},		"����"},					//23	 81 81 88 83 86			19 21 21 21 21		
	{"�̱�",	{520000,1040000,1560000,2080000},	0,	{81, 81, 88 ,83, 86},	{23,25,25,25,25},		"����"},					//24	 81 81 88 83 86			23 25 25 25 25		
	{"�ѱ�",	{540000,1080000,1620000,2160000},	0,	{81, 81, 88 ,83, 86},	{27,29,29,29,29},		"����"}						//25	 81 81 88 83 86			27 29 29 29 29	
};

G_info Game = { 0,0,1 };
// ����(������, ����ȣ) ����(main, gotoxy, Dice, Goldenkey, Trade, Answer, takeover_development, Gambling, Bankrupt�Լ�)
int main(void) {
	int i = 0;				// �÷��̾��� ���ʸ� Ȯ���ϱ� ���� ��
	int mode = 0;			// ���� ��带 Ȯ���ϱ� ���� ��
	int wincount = 0;		// ���а���� ������ ��� ������ �����ϱ� ���� ��
	int endcode = 0;		// ESC�� ���� �߰��� ������ �����ϰ� ��Ż �� ��� ������ �����ϱ� ���� ��
	int c = 0;				// ESC�� ���� �߰��� ������ �����ϰ� ��Ż �� ��츦 Ȯ���ϱ� ���� ��
	int turn = 0;			// ������ ���� Ȯ���ϱ� ���� ��

	system("mode con: cols=100 lines=40");	// �ܼ�â ũ�� ���� �Լ�
	Opening();								// ���� â
	_getch();
	system("cls");
	PlaySound(Music, NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);		// bgm���� 
	mode = Modeselect();					// ���� ��带 �����ϱ� ���� â
	mode = gamecontinue(mode);				// '�̾��ϱ�'�� ��� ���� ���� �����͸� �ҷ����� ���� ���� �ƴ� ��� ���ο� ���� ����
	i = Game.turn;							// '�̾��ϱ�'�� ��� ������ ����� ������ ���� �ҷ����� �ƴ� ��� �÷��̾���� ������ ���� ��
	turn = Game.totalturn;					// '�̾��ϱ�'�� ��� ������ ����� ������ �� ���� �ҷ����� �ƴ� ��� 1���� ī��Ʈ ��

	while (wincount == 0 && endcode == 0) {		// ���а� ������ ��� Ȥ�� ESC�� ���� �ߵ���Ż�� �Ǳ� ������ ���� ����
		Clear();							// ���� ������Ʈ �� ������ �������� ȭ�鿡�� ���� ��
		info_Update(mode);					// �÷��̾ �����ϰ� �ִ� ���� �����ϰ� �ִ� ������ �� ������ ��ŷ������ ���� �� (���� ������Ʈ)
		Position(i);						// ������ ������ �ֻ����� ������ ���� ���Դ����� �����ָ� �̵������� ���� ��
		c = Trade(i, mode);					// ��� ���� �����ߴ��� �����ϰ� (�������, ����, Ȳ�ݿ���, �Ϲ� ��) �׿� ���� �̺�Ʈ�� �߻��ϰ� �ϴ� �Լ�(�μ��� ���׷��̵� �� �Ļ� ������� ������)
		Sleep(1000);						// 1�� �Ͻ� ���� (�ʹ� ���� ������ ����Ǿ� ����ε� ���� ó�� ��� �� ���� ������)
		Bankrupt(mode);						// �Ļ� �������� Ȯ��(�Ļ� ������ ��� ���� �Ű� ����)
		wincount = ingameranking(mode);		// ���� �� ���� ����
		//wincount = Win(mode);				// ���и� �Ǵ��ϰ� ������ ���� ���а� ������� wincount�� 1�� �Ǿ� ������ ������ Endingâ�� ����
		i = turnchange(mode, i);			// �� ����� ���� ������ �ٸ� ����� ������ ��ü��
		turn++;								// �� �ϼ� ����
		Game.totalturn = turn;				// ����ü�� ������ �� �ϼ� ��Ȳ�� ����

		if (c == 2) {						// ESC�� ���� �ߵ���Ż �Ͽ��� ���
			endcode = 1;					// endcode�� 1�̵Ǿ� ������ ����
			Game.mode = mode;				// ����ü�� ������ mode���� ����
			Game.turn = i;					// ����ü�� ������ �� ��Ȳ ����
			savegame();						// ESCŰ�� ������ ������ �� ���� ���� ������(����ü)�� ���� ��
			ESC_ending();					// ESCŰ�� ������ ������ ���� ����ȭ���� ���� ��
		}
	}
	return 0;
}

void gotoxy(int x, int y) {	// ��ǥ ���� �Լ�
	COORD Position;
	Position.X = x;
	Position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Position);
}

int Dice() {
	srand(time(NULL));
	int d = rand() % 6 + 1;		// 1~6������ �������� �ֻ��� ���� ����
	return d;					// �� ���� ��ȯ
}

void GoldenKey(int a, int mode) {
	GOLD;								// Ȳ�ݻ����� ���
	int p;
	Clear();							// ���ݱ����� �������� �����
	info_Update(mode);					// ������Ʈ ��
	gotoxy(16, 26);
	printf("==<Ȳ �� �� ��>==");
	Sleep(500);
	gotoxy(16, 27);
	printf("�ֻ����� �����ּ���.");
	if (a == 0) {						// �÷��̾ ���� �̿����� ���
		gotoxy(37, 19);
		printf("�ֻ����� �����ּ���");
		_getch();						// Ű���带 �Է� �޾� �����ϰ� ��(�ֻ����� ������ ����) 
		gotoxy(37, 19);
		printf("                     ");// "�ֻ����� �����ּ���" �����
		Sleep(500);
		p = Dice();						// �ֻ��� ���� ����
	}
	else								// �÷��̾ ��ǻ���� ���
		p = Dice();						// �ٷ� �ֻ��� ���� ����

	gotoxy(49, 17);
	printf("%d", p);					// �ֻ��� ���� ������ ���
	Sleep(1000);
	Clear();							// ���ݱ����� �������� �����
	info_Update(mode);					// ������Ʈ ��

	switch (p) {
	case 1:								// �ֻ��� ���� 1�� ��� �ٸ� �÷��̾�κ��� 50������ ��Ż
		gotoxy(16, 26);
		printf("�ֻ��� : %d", p);
		gotoxy(16, 27);
		printf("�ٸ� �÷��̾�κ��� 50�������� ��Ż�մϴ�!");
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
	case 2:		// �ֻ��� ���� 2�� ��� �ζǴ�÷ +2000000�� ȹ��
		gotoxy(16, 26);
		printf("�ֻ��� : %d", p);
		gotoxy(16, 27);
		printf("!�ζ� ��÷!");
		gotoxy(16, 28);
		printf("200������ ȹ���մϴ�!");
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
	case 3:		// �ֻ��� ���� 3�� ��� ��� 500000�� ����
		gotoxy(16, 26);
		printf("�ֻ��� : %d", p);
		gotoxy(16, 27);
		printf("������ī ��̵鿡�� ����մϴ�.");
		gotoxy(16, 28);
		printf("50������ �Ҹ��մϴ�.");
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
	case 4:				// �ֻ��� ���� 4�� ��� ������������ �̵�
		gotoxy(16, 26);
		printf("�ֻ��� : %d", p);
		gotoxy(16, 27);
		printf("<����>�������� �̵�!");
		for (int i = 0; i < 7; i++) {	// Ȳ�ݿ���κ��� ������������ 7ĭ ��ŭ �̵�
			gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);
			printf("  ");				// �÷��̾��� ���� �������ڸ��� �ܻ��� ����
			if (Player[a].pos > 24) {	// pos���� 25(��������)�� ���
				Player[a].pos = 0;		// pos���� 0���� ����(��������-0)
				OneCycle(a);			// ���� ������ ��
				Sleep(2000);
				ShowMove(0);			// �̵��� ������ �̵��� ĭ�� ���� ���
			}
			else {
				Player[a].pos++;		// �׿��� ��� pos���� 1�� �÷�����
				ShowMove(a);			// �̵��� ������ �̵��� ĭ�� ���� ���
			}
		}
		break;
	case 5:				// �ֻ��� ���� 5�� ��� �������� �̵�
		gotoxy(16, 26);
		printf("�ֻ��� : %d", p);
		gotoxy(16, 27);
		printf("<����>���� �̵�!");
		for (int i = 0; i < 13; i++) {	// Ȳ�ݿ���κ��� ������������ 13ĭ ��ŭ �̵�
			gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);
			printf("  ");				// �÷��̾��� ���� �������ڸ��� �ܻ��� ����
			if (Player[a].pos > 24) {	// pos���� 25(��������)�� ���
				Player[a].pos = 0;		// pos���� 0���� ����(��������-0)
				OneCycle(a);			// ���� ������ ��
				Sleep(2000);
				ShowMove(0);			// �̵��� ������ �̵��� ĭ�� ���� �����
			}
			else {
				Player[a].pos++;		// �׿��� ��� pos���� 1�� �÷�����
				ShowMove(a);			// �̵��� ������ �̵��� ĭ�� ���� ���
			}
		}
		Trade(a, mode);					// ���� ����
		break;
	case 6:				// �ֻ��� ���� 6�� ��� ���� ����(�ڽ��� ���� ���� ������ �����Ͽ� �̵� ����)
		if (a == 0) {	// �÷��̾ ���� �̿����� ���
			gotoxy(16, 26);
			printf("�ֻ��� : %d", p);
			gotoxy(16, 27);
			printf("���� ����!");
			gotoxy(16, 28);
			printf("������� ������ ������ �ּ���!");
			Sleep(500);
			RED;

			int x = 81, y = 5;				// ���� x��ǥ, y��ǥ�� ���� ����(�̵� �� ��ǥ �����)
			int last_x = 81, last_y = 5;	// ���� x��ǥ, y��ǥ�� ���� ����(�̵� �� ��ǥ �����)
			int key = 72;

			gotoxy(81, 5);
			printf("��");
			while (key != ENTER && key != SPACE) {		// ENTER�� SPACE�� �Է��� �� ���� �ݺ�(���� ������ ȭ��ǥ �̵� ����)
				if (_kbhit() != 0) {
					key = _getch();						// Ű���� �Է��� ����
					if (key == 224) {					// ����Ű�� ������ ��� 224�� ��ȯ�ް� �ٽ� �ѹ� ��ȯ���� �����Ƿ�
						key = _getch();					// �ش� ����Ű�� ���� ������ ����
					}
					switch (key) {
					case UP:									// ���� ����Ű�� ���
						if ((y > 5) && (x == 3 || x == 81)) {	// ���� ��ĭ�� �ƴ� ���
							y = y - 4;							// y��ǥ�� 4����(��ĭ ���� ��)
							gotoxy(x, y);						// ��ĭ ���� �̵�
							printf("��");
							gotoxy(last_x, last_y);				// ������ ��ġ�ߴ� �ܻ� ����
							printf("  ");
							last_x = x;							// ���� ��ǥ�� �̵� �� ��ǥ�� ����
							last_y = y;
						}
						break;
					case DOWN:									// �Ʒ��� ����Ű�� ���
						if ((y < 33) && (x == 3 || x == 81)) {	// ���� �Ʒ�ĭ�� �ƴ� ���
							y = y + 4;							// y��ǥ�� 4�ø�(��ĭ �Ʒ��� ��)
							gotoxy(x, y);						// ��ĭ �Ʒ��� �̵�
							printf("��");
							gotoxy(last_x, last_y);				// ������ ��ġ�ߴ� �ܻ� ����
							printf("  ");
							last_x = x;							// ���� ��ǥ�� �̵� �� ��ǥ�� ����
							last_y = y;
						}
						break;
					case LEFT:									// ���� ����Ű�� ���
						if ((x > 3) && (y == 5 || y == 33)) {	// ���� ����ĭ�� �ƴ� ���
							x = x - 13;							// x��ǥ�� 13����(��ĭ �������� ��)
							gotoxy(x, y);						// ��ĭ �������� �̵�
							printf("��");
							gotoxy(last_x, last_y);				// ������ ��ġ�ߴ� �ܻ� ����
							printf("  ");
							last_x = x;							// ���� ��ǥ�� �̵� �� ��ǥ�� ����
							last_y = y;
						}
						break;
					case RIGHT:									// ������ ����Ű�� ���
						if ((x < 81) && (y == 5 || y == 33)) {	// ���� ������ĭ�� �ƴ� ���
							x = x + 13;							// x��ǥ�� 13�ø�(��ĭ ���������� ��)
							gotoxy(x, y);						// ��ĭ ���������� �̵�
							printf("��");
							gotoxy(last_x, last_y);				// ������ ��ġ�ߴ� �ܻ� ����
							printf("  ");
							last_x = x;							// ���� ��ǥ�� �̵� �� ��ǥ�� ����
							last_y = y;
						}
						break;
					case ENTER:									// ENTER�� SPACE �Է� ��(����)
					case SPACE:
						for (int i = 0; i < MAX_CITY; i++) {	// Player[a].pos�� �÷��̾ �̵��� ������ pos���� �ְ� ���� ��ǥ�� ���Ͽ� �������� ��� ���ֺ����� �� 
							int last_pos = Player[a].pos;
							if (City[i].x[1] == x && City[i].y[1] == y) {
								Player[a].pos = i;
								if (Player[a].pos - last_pos < 0)
									OneCycle(a);
							}
						}
						Trade(a, mode);							// ���� �̵��� �� �� ���� �ش��ϴ�(�μ�,��ȭ,Ȳ�ݿ���,����)��� ����
						break;
					}
				}
			}
		}
		else if (a != 0) {	// �÷��̾ ��ǻ���� ���
			int last_pos = Player[a].pos;
			for (int i = MAX_CITY - 1; i >= 0; i--) {	// ���� ���� ��� ������ ���� ���̳� �ڽ��� ������ �̵�(��� ������ �� ū �̵��� ì�ܾ� �ϹǷ�)
				if (strcmp(City[i].owner, "����") == 0 || strcmp(City[i].owner, Player[a].name) == 0) {
					Player[a].pos = i;	// Player[a].pos�� �÷��̾ �̵��� ������ pos���� ����
					gotoxy(City[last_pos].x[a + 1], City[last_pos].y[a + 1]);
					printf("  ");		// �̵��� �����ִ� �ܻ� ����
					if (a == 1)
						BLUE;
					if (a == 2)
						YELLOW;
					if (a == 3)
						GREEN;
					gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);	// �ش� �÷��̾��� �������� ��(symbol)�� �̿��� ��ġ ǥ��
					printf("%s", Player[a].symbol);
					if (Player[a].pos - last_pos < 0)	// ���� ��ġ�ߴ� ��ǥ�� �񱳸� ���� �� ���������� ������ ��� ���ֺ����� ����
						OneCycle(a);
					break;
				}
			}
			Trade(a, mode);	// ���� �̵��� �� �� ���� �ش��ϴ�(�μ�,��ȭ,Ȳ�ݿ���,����)��� ����
			break;
		}
	}
}

int Trade(int a, int mode) {
	int c = 0;
	if (strcmp(City[Player[a].pos].name, "����") == 0) {			// ���������� ��� �ƹ��� �ϵ� ����
		return 0;
	}
	else if (strcmp(City[Player[a].pos].name, "Ȳ�ݿ���") == 0) {	// Ȳ�ݿ����� ��� Ȳ�ݿ����̺�Ʈ ����
		GoldenKey(a, mode);
		Sleep(1000);
		return 0;
	}
	else if (strcmp(City[Player[a].pos].name, "����") == 0) {		// ������ ��� �����̺�Ʈ ����
		Gambling(a);
		Sleep(1000);
		return 0;
	}
	else if (strcmp(City[Player[a].pos].owner, "����") == 0) {		// ������ ���� ���� ���
		if (City[Player[a].pos].price[0] > Player[a].money) {		// �μ� ��뺸�� �÷��̾ ������ ���� ���� ��� �μ� �Ұ�
			gotoxy(16, 27);
			printf("��������� �Ͻ� �� �����ϴ�.");
			gotoxy(16, 28);
			printf("           <���� : %d ��>", City[Player[a].pos].price[0]);
			Sleep(1000);
			return 0;
		}
		else {
			gotoxy(16, 26);											// �� ���� ��� �÷��̾��� �μ� �ǻ� Ȯ��
			printf("<%s>��/�� ����ֽ��ϴ�.", City[Player[a].pos].name);
			gotoxy(16, 27);
			printf("��������� �Ͻðڽ��ϱ�?");
			gotoxy(16, 28);
			printf("           <���� : %d ��>", City[Player[a].pos].price[0]);
			Sleep(500);
			int c = Answer(a, 0);
			if (c == 1) {											// �μ��ϴ� ���
				strcpy(City[Player[a].pos].owner, Player[a].name);	// ������ ������ �÷��̾ �ǰ�
				ShowSize(a);										// �� ������ �����ǿ� �����
				Player[a].money -= City[Player[a].pos].price[0];	// �μ� ��� ����
			}
			return c;												// ESC�� ��츦 Ȯ���ϱ� ���� c�� ����
		}
	}
	else if (strcmp(City[Player[a].pos].owner, Player[a].name) == 0) {	// ������ �ڽ��� ���� ���
		gotoxy(16, 26);
		printf("<%s>��/�� ����� �����Դϴ�.", City[Player[a].pos].name);
		if (City[Player[a].pos].size == 0) {
			if (City[Player[a].pos].price[0] > Player[a].money) {		// ��ȭ ��뺸�� �÷��̾ ������ ���� ���� ��� ��ȭ �Ұ�
				gotoxy(16, 27);
				printf("���� ����� �� �����ϴ�.");
				gotoxy(16, 28);
				printf("           <�߰����� : %d ��>", City[Player[a].pos].price[0]);
				Sleep(1000);
				return 0;
			}
			else {
				gotoxy(16, 27);
				printf("���� ����ðڽ��ϱ�?");
				gotoxy(16, 28);
				printf("       <�߰����� : %d ��>", City[Player[a].pos].price[0]);
				Sleep(500);
				int c = Answer(a, 1);
				if (c == 1) {											// ��ȭ�ϴ� ���
					City[Player[a].pos].size++;							// size+1
					ShowSize(a);										// �� ������ �����ǿ� �����				
					Player[a].money -= City[Player[a].pos].price[0];	// ��ȭ ��� ����
				}
				return c;												// ESC�� ��츦 Ȯ���ϱ� ���� c�� ����
			}
		}
		else if (City[Player[a].pos].size == 1) {
			if (City[Player[a].pos].price[0] > Player[a].money) {		// ��ȭ ��뺸�� �÷��̾ ������ ���� ���� ��� ��ȭ �Ұ�
				gotoxy(16, 27);
				printf("������ ����� �� �����ϴ�.");
				gotoxy(16, 28);
				printf("           <�߰����� : %d ��>", City[Player[a].pos].price[0]);
				Sleep(1000);
				return 0;
			}
			else {
				gotoxy(16, 27);
				printf("������ ����ðڽ��ϱ�?");
				gotoxy(16, 28);
				printf("       <�߰����� : %d��>", City[Player[a].pos].price[0]);
				Sleep(500);
				int c = Answer(a, 1);
				if (c == 1) {											// ��ȭ�ϴ� ���
					City[Player[a].pos].size++;							// size+1
					ShowSize(a);										// �� ������ �����ǿ� �����			
					Player[a].money -= City[Player[a].pos].price[0];	// ��ȭ ��� ����
				}
				return c;												// ESC�� ��츦 Ȯ���ϱ� ���� c�� ����
			}
		}
		else if (City[Player[a].pos].size == 2) {
			if (City[Player[a].pos].price[0] > Player[a].money) {		// ��ȭ ��뺸�� �÷��̾ ������ ���� ���� ��� ��ȭ �Ұ�
				gotoxy(16, 27);
				printf("���ø� �Ǽ��Ͻ� �� �����ϴ�.");
				gotoxy(16, 28);
				printf("           <�߰����� : %d ��>", City[Player[a].pos].price[0]);
				Sleep(1000);
				return 0;
			}
			else {
				gotoxy(16, 27);
				printf("���ø� �Ǽ��Ͻðڽ��ϱ�?");
				gotoxy(16, 28);
				printf("      <�߰����� : %d��>", City[Player[a].pos].price[0]);
				Sleep(500);
				int c = Answer(a, 1);
				if (c == 1) {											// ��ȭ�ϴ� ���
					City[Player[a].pos].size++;							// size+1
					ShowSize(a);										// �� ������ �����ǿ� �����			
					Player[a].money -= City[Player[a].pos].price[0];	// ��ȭ ��� ����
				}
				return c;												// ESC�� ��츦 Ȯ���ϱ� ���� c�� ����
			}
		}
		else {
			gotoxy(16, 27);
			printf("�̹� ����(Lv max)���� �Ǽ��ϼ̽��ϴ�.");			// ������ ��� ���̻� ��ȭ �Ұ�
			Sleep(1000);
			return 0;
		}
	}
	else {																// ������ ������ ���
		gotoxy(16, 26);
		if (strcmp(City[Player[a].pos].owner, Player[0].name) == 0) {
			printf("[%s]���� ���� �Դϴ�", Player[0].name);
		}
		else if (strcmp(City[Player[a].pos].owner, Player[1].name) == 0) {
			printf("[%s]���� ���� �Դϴ�", Player[1].name);
		}
		else if (strcmp(City[Player[a].pos].owner, Player[2].name) == 0) {
			printf("[%s]���� ���� �Դϴ�", Player[2].name);
		}
		else if (strcmp(City[Player[a].pos].owner, Player[3].name) == 0) {
			printf("[%s]���� ���� �Դϴ�", Player[3].name);
		}

		gotoxy(16, 27);
		printf("����Ḧ �����մϴ�.");
		gotoxy(16, 28);
		printf("����� ���� :  <-%d ��>", City[Player[a].pos].price[City[Player[a].pos].size] * Toll);	// �ش� ���� ����*����� �ΰ�������ŭ ����� �ΰ� 
		Sleep(1000);
		Player[a].money -= City[Player[a].pos].price[City[Player[a].pos].size] * Toll;

		if (strcmp(City[Player[a].pos].owner, Player[0].name) == 0) {									// �ش� ���� ������ �ΰ��� ����Ḹŭ ȹ��
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

		int c = takeover_development(a, mode);															// �μ��� ���� Ȯ��
		Sleep(1000);
		return c;																						// ESC�� ��츦 Ȯ���ϱ� ���� c�� ����
	}
}

int Answer(int a, int b) {	// ���� ������ ���� ��� + �μ�(b=0), �μ� �� �߰� �Ǽ�(b=1)
	SKY;					// �ϴû����� ���
	gotoxy(55, 26);
	printf("   �� ");
	gotoxy(55, 29);
	printf(" �ƴϿ� ");
	gotoxy(67, 26);
	printf("<-");

	if (a == 1 || a == 2 || a == 3) {
		return C_Answer(a, b);			// ��ǻ�Ͱ� �Ǵ��Ͽ� �����ϴ� �˰���
	}

	else {
		int x = 67, y = 26, key = 72;				// ó�� ȭ��ǥ�� x��ǥ, y��ǥ ���� ����
		while (key != ENTER && key != SPACE) {		// ENTER�� SPACE�� �Է��� �� ���� �ݺ�(���� ������ ȭ��ǥ �̵� ����)
			if (_kbhit() != 0)
				if (_kbhit() != 0)
				{
					key = _getch();						// Ű���� �Է��� ����
					if (key == 27) {					// ESC�Է½�
						return 2;						// ���� �߰��� ����
					}
					else if (key == 224) {				// ����Ű�� ������ ��� 224�� ��ȯ�ް� �ٽ� �ѹ� ��ȯ���� �����Ƿ�
						key = _getch();					// �ش� ����Ű�� ���� ������ ����
					}
					switch (key)
					{
					case UP:							// ���� ����Ű�� ���
						if (y == 26) {					// ���� ��ĭ�� ���
							y = 29;
							gotoxy(67, 26);
							printf("  ");
							gotoxy(67, 29);
							printf("<-");				// ���� �Ʒ�ĭ���� �̵�(�ܻ� ����)
						}
						else if (y == 29) {				// ���� �Ʒ�ĭ�� ���
							y = 26;
							gotoxy(67, 26);
							printf("<-");				// ���� ��ĭ���� �̵�(�ܻ� ����)
							gotoxy(67, 29);
							printf("  ");
						}
						break;
					case DOWN:							// ���� ����Ű�� ���
						if (y == 26) {					// ���� ��ĭ�� ���
							y = 29;
							gotoxy(67, 26);
							printf("  ");
							gotoxy(67, 29);
							printf("<-");				// ���� �Ʒ�ĭ���� �̵�(�ܻ� ����)
						}
						else if (y == 29) {				// ���� �Ʒ�ĭ�� ���
							y = 26;
							gotoxy(67, 26);
							printf("<-");				// ���� ��ĭ���� �̵�(�ܻ� ����)
							gotoxy(67, 29);
							printf("  ");
						}
						break;
					case ENTER:							// ENTER�� SPACE �Է� ��(����)
					case SPACE:
						if (y == 26)
							return 1;					// '��'�� 1 ��ȯ
						else
							return 0;					// '�ƴϿ�'�� 0 ��ȯ
						break;
					}
				}
		}
	}
};

int takeover_development(int a, int mode) {
	Clear();				// ���ݱ����� �������� �����
	info_Update(mode);		// ������Ʈ ��
	VIOLET;					// ��������� ���
	int c = 0;				// ESC�� �Է����� ��츦 �˱� ���� ���
	if (City[Player[a].pos].size == 3) {	// ������ ��� �μ� �Ұ���
		gotoxy(16, 26);
		printf("<%s>��/�� �μ��� �� �����ϴ�.", City[Player[a].pos].name);
		gotoxy(16, 27);
		printf("����(Lv Max)�� �μ��� �� �����ϴ�.");
		Sleep(500);
	}
	if (Player[a].money >= City[Player[a].pos].price[City[Player[a].pos].size] && City[Player[a].pos].size != 3) {	// �÷��̾ �μ��� ���� �ְ� ���ð� �ƴ� ��� �μ� �ǻ縦 Ȯ����
		gotoxy(16, 26);
		printf("<%s>��/�� �μ��� �� �ֽ��ϴ�.", City[Player[a].pos].name);
		gotoxy(16, 27);
		printf("<%s>��/�� �μ��Ͻðڽ��ϱ�?", City[Player[a].pos].name);
		gotoxy(16, 28);
		printf("<%d>�� �Դϴ�.", City[Player[a].pos].price[City[Player[a].pos].size]);
		Sleep(500);
		c = Answer(a, 0);													// �μ� �ǻ縦 Ȯ��(1:�μ�, 0:x, 2:ESC)
		if (c == 1) {														// �μ��� �ϴ� ���
			if (strcmp(City[Player[a].pos].owner, Player[0].name) == 0) {	// �ش� ������ ���ο��� �μ������ �ְ� �μ��� ��
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
			strcpy(City[Player[a].pos].owner, Player[a].name);				// ������ ������ �÷��̾ ��(�μ���)
			Clear();														// ���ݱ����� �������� �����
			info_Update(mode);												// ������Ʈ ��
			VIOLET;															// ��������� ���

			if (strcmp(City[Player[a].pos].owner, Player[a].name) == 0) {	// ������ ������ �÷��̾��� ���(�μ� �� Ȥ�� �������� �ڽ��� ���� ���) ���׷��̵� �ǻ縦 Ȯ��
				gotoxy(16, 26);
				printf("<%s>��/�� ����� �����Դϴ�.", City[Player[a].pos].name);
				if (City[Player[a].pos].size == 0) {
					gotoxy(16, 27);
					printf("���� ����ðڽ��ϱ�?");
					gotoxy(16, 28);
					printf("       <�߰����� : %d ��>", City[Player[a].pos].price[0]);
					Sleep(500);
					c = Answer(a, 1);
					if (c == 1) {											// ��ȭ�� �ϴ� ���
						City[Player[a].pos].size++;							// size+1
						ShowSize(a);										// �̸� ȭ����� ������ ���
						Player[a].money -= City[Player[a].pos].price[0];	// ��� �Ҹ�
					}
				}
				else if (City[Player[a].pos].size == 1) {
					gotoxy(16, 27);
					printf("������ ����ðڽ��ϱ�?");
					gotoxy(16, 28);
					printf("       <�߰����� : %d��>", City[Player[a].pos].price[0]);
					Sleep(500);
					c = Answer(a, 1);
					if (c == 1) {											// ��ȭ�� �ϴ� ���
						City[Player[a].pos].size++;							// size+1
						ShowSize(a);										// �̸� ȭ����� ������ ���												
						Player[a].money -= City[Player[a].pos].price[0];	// ��� �Ҹ�
					}
				}
				else if (City[Player[a].pos].size == 2) {
					gotoxy(16, 27);
					printf("���ø� �Ǽ��Ͻðڽ��ϱ�?");
					gotoxy(16, 28);
					printf("      <�߰����� : %d��>", City[Player[a].pos].price[0]);
					Sleep(500);
					c = Answer(a, 1);
					if (c == 1) {											// ��ȭ�� �ϴ� ���
						City[Player[a].pos].size++;							// size+1
						ShowSize(a);										// �̸� ȭ����� ������ ���
						Player[a].money -= City[Player[a].pos].price[0];	// ��� �Ҹ�
					}
				}
			}
			ShowSize(a);	// �̸� ȭ����� ������ ���(�μ��� ��쵵)
		}
	}
	return c;				// ESC�ΰ� Ȯ���ϱ� ���� c�� ��ȯ
}

void Gambling(int i) {
	GOLD;					// Ȳ�ݻ����� ���
	int p = Dice();			// Ȧ¦ ���� �ֻ����� ���� ����
	int choose;
	Clear();				// ���ݱ����� �������� ����
	gotoxy(16, 26);
	printf("�ֻ����� Ȧ���ϱ��? ¦���ϱ��?");
	gotoxy(16, 27);
	printf("Ȧ��(��) , ¦��(�ƴϿ�)");
	if (i == 0)							// �÷��̾ ���� �̿����� ���
		choose = Answer(i, 0);			// ���� ����
	else								// �÷��̾ ��ǻ���� ���
		choose = C_Gambling_Answer(i);	// �������� ����
	Sleep(1000);
	gotoxy(49, 17);
	printf("%d", p);					// ���� ����� Ȧ¦ ���� ���� ���Դ��� ���
	if (p % 2 == choose) {				// Ȧ¦�� ���� ��� ���� ���� +600000�� ȹ��
		gotoxy(16, 28);
		printf("���� ����! +600000");
		Player[i].money += 600000;
	}
	else {								// ������ ��� ���� ���� 300000�� ����
		gotoxy(16, 28);
		printf("���� ���� ��_��");
		Player[i].money -= 300000;
	}
}

void Bankrupt(int mode) {
	Clear();														// ���ݱ����� �������� �����
	info_Update(mode);												// ������Ʈ ��
	BLOOD;															// �˺��������� ���

	for (int j = 0; j <= mode; j++) {
		if (Player[j].money < 0) {									// �÷��̾ �Ļ� �������� Ȯ�� �Ļ� ������ ���
			gotoxy(16, 26);
			printf("<%s>���� �Ļ� �����Դϴ�.", Player[j].name);
			gotoxy(16, 27);
			printf("�������� ���ø� ó���մϴ�");
			Sleep(3000);
			Bankrupt_Answer(j);										// �������� ���� �ڵ����� ó��
		}
	}
}
// ������ ����(Opening, OneCycle, Situation, Modeselect, World_map, ShowMove, ShowSize, Clear, Position, Ending, info_Update, C_Answer, C_Gambling_Answer, CheckCityCount, Bankrupt_Answer, turnchange, ingameranking, savegame, gamecontinue, ESC_ending�Լ� �� �ҽ�.c�� ���.h������ ��� �ּ�)
void Opening() {						// ���۽� ȭ�� �ϴû����� ���
	SKY;								
	gotoxy(36, 10);
	printf("�ڡں�縶��ڡ�");
	gotoxy(39, 15);
	printf("������: 3��");
	gotoxy(32, 17);
	printf("����: 2019253025 ������");
	gotoxy(32, 19);
	printf("����: 2019253069 ������");
	gotoxy(32, 21);
	printf("      2019253053 ����ȣ");
	gotoxy(35, 24);
	printf("---Press Any Key---");
}

void OneCycle(int a) {				
	gotoxy(16, 26);
	GOLD;								// Ȳ�ݻ����� ��� ���� �������� �ش� �÷��̾�� +500000�� ����
	printf("���� ���� ����!");
	gotoxy(16, 27);
	printf("���� ���ʽ� +500000��");
	Player[a].money += 500000;
}

void Situation(int mode) {

	switch (mode) {														
	case 3: GREEN;														// mode�� 3(1vs1vs1vs1)�� ��� Player4�� ���� ���(���� ��ġ, �̸�, ���� �ڻ�, ���� ���� ��)
		gotoxy(City[Player[3].pos].x[4], City[Player[3].pos].y[4]);
		printf("%s", Player[3].symbol);
		gotoxy(49, 22);
		printf("%s", Player[3].name);
		gotoxy(49, 23);
		printf("�� �� : %d", Player[3].money);
		gotoxy(49, 24);
		printf("�� �� : %d", Player[3].citycount);

	case 2:	YELLOW;														// mode�� 2(1vs1vs1), 3(break�� �������Ƿ�)�� ��� Player3�� ���� ���(���� ��ġ, �̸�, ���� �ڻ�, ���� ���� ��)
		gotoxy(City[Player[2].pos].x[3], City[Player[2].pos].y[3]);
		printf("%s", Player[2].symbol);
		gotoxy(16, 22);
		printf("%s", Player[2].name);
		gotoxy(16, 23);
		printf("�� �� : %d", Player[2].money);
		gotoxy(16, 24);
		printf("�� �� :");

	case 1:	RED;														// mode�� 1(1vs1), 2, 3(break�� �������Ƿ�)�� ��� Player3�� ���� ���(���� ��ġ, �̸�, ���� �ڻ�, ���� ���� ��)
		gotoxy(City[Player[0].pos].x[1], City[Player[0].pos].y[1]);
		printf("%s", Player[0].symbol);
		gotoxy(16, 7);
		printf("%s", Player[0].name);
		gotoxy(16, 8);
		printf("�� �� : %d", Player[0].money);
		gotoxy(16, 9);
		printf("�� �� :");

		BLUE;
		gotoxy(City[Player[1].pos].x[2], City[Player[1].pos].y[2]);
		printf("%s", Player[1].symbol);
		gotoxy(49, 7);
		printf("%s", Player[1].name);
		gotoxy(49, 8);
		printf("�� �� : %d", Player[1].money);
		gotoxy(49, 9);
		printf("�� �� :");
		break;
	}
}

int Modeselect() {

	gotoxy(31, 10);
	printf("��带 �����Ͻÿ�");
	RED;							// ���������� 1vs1: ���
	gotoxy(31, 13);
	printf("1 vs 1");
	gotoxy(50, 13);
	printf(":");
	BLUE;							// �Ķ������� 1vs1vs1: ���
	gotoxy(31, 16);
	printf("1 vs 1 vs 1");
	gotoxy(50, 16);
	printf(":");
	YELLOW;							// ��������� 1vs1vs1vs1: ���
	gotoxy(31, 19);
	printf("1 vs 1 vs 1 vs 1");
	gotoxy(50, 19);
	printf(":");
	GREEN;							// �ʷϻ����� �̾��ϱ�: ���
	gotoxy(31, 22);
	printf("�̾��ϱ�");
	gotoxy(50, 22);
	printf(":");
	SKY;							// �ϴû����� "�� ��: Enter or Space"����� ȭ��ǥ ���
	gotoxy(31, 24);
	printf("�� ��: Enter or Space");
	gotoxy(55, 13);
	printf("<-");

	int x = 55, y = 13, key = 72;	// ȭ��ǥ�� ó�� ��ġ�� x��ǥ�� y��ǥ�� ����

	while (key != ENTER && key != SPACE) {		// ENTER�� SPACE�� �Է��� �� ���� �ݺ�(���� ������ ȭ��ǥ �̵� ����)
		if (_kbhit() != 0)
		{
			key = _getch();						// Ű���� �Է��� ����
			if (key == 224) {					// ����Ű�� ������ ��� 224�� ��ȯ�ް� �ٽ� �ѹ� ��ȯ���� �����Ƿ�
				key = _getch();					// �ش� ����Ű�� ���� ������ ����
			}
			switch (key)
			{
			case UP:							// ���� ����Ű�� ���
				if (y == 13) {					// ���� ��ĭ�� ���
					gotoxy(x, y);
					printf("  ");				// ���� ��ġ�� ȭ��ǥ�� �����(�ܻ� ����)
					y = 22;
					gotoxy(x, y);
					printf("<-");				// ���� �Ʒ�ĭ���� �̵�
				}
				else {							// �� ���� ���
					gotoxy(x, y);
					printf("  ");				// ���� ��ġ�� ȭ��ǥ�� �����(�ܻ� ����)
					y -= 3;
					gotoxy(x, y);
					printf("<-");				// �� ĭ ��ĭ���� �̵�
				}
				break;
			case DOWN:							// �Ʒ��� ����Ű�� ���
				if (y == 22) {					// ���� �Ʒ�ĭ�� ���
					gotoxy(x, y);
					printf("  ");				// ���� ��ġ�� ȭ��ǥ�� �����(�ܻ� ����)
					y = 13;
					gotoxy(x, y);
					printf("<-");				// ���� ��ĭ���� �̵�
				}
				else {							// �� ���� ���
					gotoxy(x, y);
					printf("  ");				// ���� ��ġ�� ȭ��ǥ�� �����(�ܻ� ����)
					y += 3;
					gotoxy(x, y);
					printf("<-");				// �� ĭ �Ʒ�ĭ���� �̵�
				}
				break;
			case ENTER:							// ENTER�� SPACE �Է� ��(����)
			case SPACE:
				if (y == 13)
					return 1;					// '1vs1'�� mode�� 1 ��ȯ
				else if (y == 16)
					return 2;					// '1vs1vs1'�� mode�� 2 ��ȯ
				else if (y == 19)
					return 3;					// '1vs1vs1vs1'�� mode�� 3 ��ȯ
				else if (y == 22)
					return 4;					// '�̾��ϱ�'�� mode�� 4 ��ȯ
				break;
			}
		}
	}
}

void World_map() {
	BLUE_GREEN;			// û������� ���Ӻ����� ���
	printf("\n\n");
	printf("��------------��------------��------------��------------��------------��------------��------------�� \n");
	printf("��            ��            ��            ��            ��            ��            ��            �� \n");
	printf("��   ��  ��   ��  �� �� ��  ��  ��Ż����  ��  �� �� ��  ��   ��  ��   ��   ȫ  ��   ��  Ȳ�ݿ���  �� \n");
	printf("��            ��            ��            ��            ��            ��            ��            �� \n");
	printf("��------------��------------��------------��------��-----��------------��------------��------------�� \n");
	printf("��            ��                                ��                               ��            �� \n");
	printf("��   ��  ��   ��                                ��                               ��  �״�����  �� \n");
	printf("��            ��                                ��                               ��            �� \n");
	printf("��------------��--------------------------------��-------------------------------��------------�� \n");
	printf("��            ��                                                                ��            �� \n");
	printf("��   ��  ��   ��                                                                ��   ��  ��   �� \n");
	printf("��            ��                                                                ��            �� \n");
	printf("��------------��                                                                ��------------�� \n");
	printf("��            ��                                                                ��            �� \n");
	printf("��  �� Ʈ ��  ��                     ��-------��----------��                       ��   ��  ��   �� \n");
	printf("��            ��                     �� �ֻ�����          ��                       ��            �� \n");
	printf("��------------��                     ��-------��----------��                       ��------------�� \n");
	printf("��            ��                                                                ��            �� \n");
	printf("��   ��  ��   ��                                                                ��  �̰�����  �� \n");
	printf("��            ��--------------------------------��-------------------------------��            �� \n");
	printf("��------------��                                ��                               ��------------�� \n");
	printf("��            ��                                ��                               ��            �� \n");
	printf("��   ĥ  ��   ��                                ��                               ��   ��  ��   �� \n");
	printf("��            ��--------------------------------��-------------------------------��            �� \n");
	printf("��------------��                                                                ��------------�� \n");
	printf("��            ��                                                                ��            �� \n");
	printf("��  �� �� ��  ��                                                                ��   ��  ��   �� \n");
	printf("��            ��                                                                ��            �� \n");
	printf("��------------��------------��------------��------------��------------��------------��------------�� \n");
	printf("��            ��            ��            ��            ��            ��            ��            �� \n");
	printf("��   ��  ��   ��  �� �� ��  ��  �� �� ��  ��  �� �� ��  ��  �� �� ũ  ��  �� �� ��  ��   ��  ��   �� \n");
	printf("��            ��            ��            ��            ��            ��            ��            �� \n");
	printf("��------------��------------��------------��------------��------------��------------��------------�� \n");
	printf(" �� / �ƴϿ�: Ű���� ����Ű (��,��)\n");
	printf(" ��       ��: Enter or Space\n");
	printf(" ��  ��   ��: �ƹ� Ű��\n");
	printf(" ��       ��: ESC(�ڽ��� ���ʿ���)\n");
}

void ShowMove(int a) {
	gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);	// �÷��̾��� ���� ��ġ�� �ش� �÷��̾� ����� symbol�� ����� (�̵� �� ���)
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
	gotoxy(City[Player[a].pos].x[0], City[Player[a].pos].y[0]);		// �ش� ������ ����(SIZE)��ŭ ��� ǥ��
	for (int i = 0; i <= City[Player[a].pos].size; i++) {
		if (a == 0)	//��
			RED;

		if (a == 1)
			BLUE;

		if (a == 2)
			YELLOW;

		if (a == 3)
			GREEN;

		printf("��");
	}
}

void Clear() {
	gotoxy(37, 15);							// ���ʸ� ����
	printf("                     ");
	gotoxy(49, 17);							// �ֻ������� ����
	printf("  ");
	gotoxy(16, 26);										// ���� ����� ���� �������� ����
	printf("                                                  ");
	gotoxy(16, 27);
	printf("                                                  ");
	gotoxy(16, 28);
	printf("                                                  ");
	gotoxy(24, 8);		// Player1�� �ܰ� ����
	printf("            ");
	gotoxy(24, 9);		// Player1�� �ǹ����� ����
	printf("      ");
	gotoxy(40, 8);		// Player1�� ��ŷ�� ����
	printf("    ");
	gotoxy(57, 8);		// Player2�� �ܰ� ����
	printf("            ");
	gotoxy(57, 9);		// Player2�� �ǹ����� ����
	printf("      ");
	gotoxy(73, 8);		// Player2�� ��ŷ�� ����
	printf("    ");
	gotoxy(24, 23);		// Player3�� �ܰ� ����
	printf("            ");
	gotoxy(24, 24);		// Player3�� �ǹ����� ����
	printf("      ");
	gotoxy(40, 23);		// Player3�� ��ŷ�� ����
	printf("    ");
	gotoxy(57, 23);		// Player4�� �ܰ� ����
	printf("            ");
	gotoxy(57, 24);		// Player4�� �ǹ����� ����
	printf("      ");
	gotoxy(73, 23);		// Player4�� ��ŷ�� ����
	printf("    ");

	gotoxy(55, 26);		// '��'ǥ�ø� ����
	printf("       ");
	gotoxy(55, 29);		// '�ƴϿ�'ǥ�ø� ����
	printf("       ");
	gotoxy(67, 29);		// ȭ��ǥ�� ����
	printf("  ");
	gotoxy(67, 26);
	printf("  ");
};

void Position(int a) {
	int p;
	gotoxy(37, 15);
	if (a == 0)	//��
		RED;

	if (a == 1)
		BLUE;

	if (a == 2)
		YELLOW;

	if (a == 3)
		GREEN;

	printf("*<%s>�� ��*", Player[a].name);		// �ش� �÷��̾��� �������� ��� ������ ������ �˷���
	Sleep(300);

	if (a == 0) {								// �÷��̾ ���� �̿����� ���
		gotoxy(37, 19);
		printf("�ֻ����� �����ּ���");
		_getch();								// Ű���带 �Է� �޾� �����ϰ� ��(�ֻ����� ������ ����)
		gotoxy(37, 19);
		printf("                   ");			// "�ֻ����� �����ּ���" �����
		Sleep(300);
		p = Dice();								// �ֻ��� ���� ����
	}
	else										// �÷��̾ ��ǻ���� ���
		p = Dice();								// �ٷ� �ֻ��� ���� ����

	gotoxy(49, 17);
	printf("%d", p);							// �ֻ��� ���� ������ ���

	for (int i = 0; i < p; i++) {
		gotoxy(City[Player[a].pos].x[a + 1], City[Player[a].pos].y[a + 1]);		// �ֻ��� ����ŭ �̵��ϸ� ���� �������ڸ��� �ܻ� ����
		printf("  ");															
		if (Player[a].pos > 24) {												// pos���� 25(��������)�� ���
			Player[a].pos = 0;													// pos���� 0���� ����(��������-0)
			OneCycle(a);														// ���� ������ ��
			Sleep(1500);														
			ShowMove(0);														// �̵��� ������ �̵��� ĭ�� ���� ���
		}
		else {
			Player[a].pos++;													// �׿��� ��� pos���� 1�� �÷�����
			ShowMove(a);														// �̵��� ������ �̵��� ĭ�� ���� ���
		}
		Sleep(300);
	}
};

void Ending(int mode) {
	if (mode == 1) {							// 1vs1�� ���
		char no1[50] = { 0 };					// 1�� �̸� �����
		char no2[50] = { 0 };					// 2�� �̸� �����
		for (int i = 0; i <= mode; i++) {
			if (Player[i].ranking == 1) {		// �÷��̾��� ��ŷ�� 1���̶��
				strcpy(no1, Player[i].name);	// �� �÷��̾��� �̸��� no1�� ����(����)
			}
			else if (Player[i].ranking == 2) {	// �÷��̾��� ��ŷ�� 2���̶��
				strcpy(no2, Player[i].name);	// �� �÷��̾��� �̸��� no2�� ����(����)
			}
		}
		GOLD;									// Ȳ�ݻ����� ���
		gotoxy(32, 15);
		printf("*<%s>�� �¸�*", no1);			// �����(1��)�� �¸�ǥ�ø� ���ָ� �� ������ �ش��ϴ� �÷��̾��� �̸��� ���ʴ�� �����, ����޼��� ���
		gotoxy(32, 17);
		printf("1�� : <%s> ", no1);
		gotoxy(32, 19);
		printf("2�� : <%s> ", no2);
		gotoxy(22, 21);
		printf("������ ����ּż� �����մϴ�. -������ �ϵ�-\n");	
	}
	else if (mode == 2) {						// 1vs1vs1�� ���
		char no1[50] = { 0 };					// 1�� �̸� �����
		char no2[50] = { 0 };					// 2�� �̸� �����
		char no3[50] = { 0 };					// 3�� �̸� �����
		for (int i = 0; i <= mode; i++) {
			if (Player[i].ranking == 1) {		// �÷��̾��� ��ŷ�� 1���̶��
				strcpy(no1, Player[i].name);	// �� �÷��̾��� �̸��� no1�� ����(����)
			}
			else if (Player[i].ranking == 2) {	// �÷��̾��� ��ŷ�� 2���̶��
				strcpy(no2, Player[i].name);	// �� �÷��̾��� �̸��� no2�� ����(����)
			}
			else if (Player[i].ranking == 3) {	// �÷��̾��� ��ŷ�� 3���̶��
				strcpy(no3, Player[i].name);	// �� �÷��̾��� �̸��� no3�� ����(����)
			}
		}
		GOLD;									// Ȳ�ݻ����� ���
		gotoxy(32, 15);
		printf("*<%s>�� �¸�*", no1);			// �����(1��)�� �¸�ǥ�ø� ���ָ� �� ������ �ش��ϴ� �÷��̾��� �̸��� ���ʴ�� �����, ����޼��� ���
		gotoxy(32, 17);
		printf("1�� : <%s> ", no1);
		gotoxy(32, 19);
		printf("2�� : <%s> ", no2);
		gotoxy(32, 21);
		printf("3�� : <%s> ", no3);
		gotoxy(22, 23);
		printf("������ ����ּż� �����մϴ�. -������ �ϵ�-\n");
	}
	else if (mode == 3) {						// 1vs1vs1vs1�� ���	
		char no1[50] = { 0 };					// 1�� �̸� �����
		char no2[50] = { 0 };					// 2�� �̸� �����
		char no3[50] = { 0 };					// 3�� �̸� �����
		char no4[50] = { 0 };					// 4�� �̸� �����
		for (int i = 0; i <= mode; i++) {		
			if (Player[i].ranking == 1) {		// �÷��̾��� ��ŷ�� 1���̶��
				strcpy(no1, Player[i].name);	// �� �÷��̾��� �̸��� no1�� ����(����)
			}
			else if (Player[i].ranking == 2) {	// �÷��̾��� ��ŷ�� 2���̶��
				strcpy(no2, Player[i].name);	// �� �÷��̾��� �̸��� no2�� ����(����)
			}
			else if (Player[i].ranking == 3) {	// �÷��̾��� ��ŷ�� 3���̶��
				strcpy(no3, Player[i].name);	// �� �÷��̾��� �̸��� no3�� ����(����)
			}
			else if (Player[i].ranking == 4) {	// �÷��̾��� ��ŷ�� 4���̶��
				strcpy(no4, Player[i].name);	// �� �÷��̾��� �̸��� no4�� ����(����)
			}
		}
		GOLD;									// Ȳ�ݻ����� ���
		gotoxy(32, 15);
		printf("*<%s>�� �¸�*", no1);			// �����(1��)�� �¸�ǥ�ø� ���ָ� �� ������ �ش��ϴ� �÷��̾��� �̸��� ���ʴ�� �����, ����޼��� ���
		gotoxy(32, 18);
		printf("1�� : <%s> ", no1);
		gotoxy(32, 21);
		printf("2�� : <%s> ", no2);
		gotoxy(32, 24);
		printf("3�� : <%s> ", no3);
		gotoxy(32, 27);
		printf("4�� : <%s> ", no4);
		gotoxy(22, 30);
		printf("������ ����ּż� �����մϴ�. -������ �ϵ�-\n");
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
// win�Լ��� ����� ingameranking�� ���� ��Ŵ

void info_Update(int mode) {
	GOLD;						// Ȳ�ݻ����� ���
	Player[0].citycount = 0;	// ���� �÷��̾��� ���� ���� 0���� �ʱ�ȭ(�ٽ� ���)
	Player[1].citycount = 0;
	Player[2].citycount = 0;
	Player[3].citycount = 0;

	for (int i = 0; i < MAX_CITY; i++) {						// ���� �÷��̾��� ���ü��� �ٽ� ���
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
	case 3:	gotoxy(57, 23);						// mode�� 3(1vs1vs1vs1)�� ��� Player4�� ���� ������Ʈ
		printf("%d ��", Player[3].money);
		gotoxy(57, 24);
		printf("%d", Player[3].citycount);
		gotoxy(73, 23);
		printf("%d ��", Player[3].ranking);
	case 2:	gotoxy(24, 23);						// mode�� 2(1vs1vs1), 3(break�� ������)�� ��� Player3�� ���� ������Ʈ
		printf("%d ��", Player[2].money);
		gotoxy(24, 24);
		printf("%d", Player[2].citycount);
		gotoxy(40, 23);
		printf("%d ��", Player[2].ranking);
	case 1: gotoxy(24, 8);						// mode�� 1(1vs1), 2, 3(break�� ������)�� ��� Player1, Player2�� ���� ������Ʈ
		printf("%d ��", Player[0].money);
		gotoxy(24, 9);
		printf("%d", Player[0].citycount);
		gotoxy(40, 8);
		printf("%d ��", Player[0].ranking);
		gotoxy(57, 8);
		printf("%d ��", Player[1].money);
		gotoxy(57, 9);
		printf("%d", Player[1].citycount);
		gotoxy(73, 8);
		printf("%d ��", Player[1].ranking);
		break;
	}
}

int C_Answer(int a, int b) {	// ���� ���� �� ���� ����, �μ� ����, �μ� �� �߰� ���� ����
	int enemyland = 0;			// ���� ���� �� ���� ����
	int myland = 0;				// �÷��̾��� ���� �� ���� ����

	for (int i = 0; i < MAX_CITY; i++) {
		if (strcmp(City[i].owner, "����") != 0) {				// ������ �ִ� ������ ���
			if (strcmp(City[i].owner, Player[a].name) != 0)		// ������ �ڽ��� �ƴϸ�(����) enemyland�� �� ������ ������ ����
				enemyland += City[i].price[City[i].size];		
			else												// ������ �ڽ��̸� myland�� �� ������ ������ ����
				myland += City[i].price[City[i].size];
		}
	}
	if (b == 0) {	// ������ ���� �� Ȥ�� ������ ������ ���� �μ��� ���
		if (strcmp(City[Player[a].pos].owner, "����") == 0) {	// ������ ���� ��� �� ���� �μ��� �� ���� ���� ������ ���� ������ ����Ǵ� ��밪���� ������ ����Ȯ���� �����Ƿ� �μ��ϰ� ������(���� �ڻ�-�μ� ���)>= ���� ������ ����Ǵ� ���((���� ���� �� ���� - �� ���� �� ����(������ ���� ���) - �μ� �� �� ���� �Ǵ� �� ���� ����)/�� ���ü�)�� �����ϸ� �μ��Ŀ��� �Ļ� ������ ���� ��� �μ���
			if (Player[a].money - City[Player[a].pos].price[City[Player[a].pos].size] >= (enemyland - myland - City[Player[a].pos].price[City[Player[a].pos].size]) / MAX_CITY && Player[a].money - City[Player[a].pos].price[City[Player[a].pos].size] >= 0) 
				return 1;
			else
				return 0;
		}
		else {	// ������ ���� �μ��ϴ� ��� �� ���� �μ��� �� ������ ���� ������ ����Ǵ� ��밪���� ������ ����Ȯ���� �����Ƿ� �μ��ϰ� ������(���� �ڻ�-�μ� ���)>= ���� ������ ����Ǵ� ���((���� ���� �� ���� - �� ���� �� ����(������ ���� ���) - �μ� �� �� ���� �Ǵ� �� ���� ����*2(������ �����ݿ��� ���� �� ���� ���ݿ� ���ϹǷ� *2))/�� ���ü�)�� �����ϸ� �μ��Ŀ��� �Ļ� ������ ���� ��� �μ���
			if (Player[a].money - City[Player[a].pos].price[City[Player[a].pos].size] >= (enemyland - myland - City[Player[a].pos].price[City[Player[a].pos].size] * 2) / MAX_CITY && Player[a].money - City[Player[a].pos].price[City[Player[a].pos].size] >= 0) // ��� ���ú��� ���� ���� �� ���� �� ���� ��(�Ļ� ����x)
				return 1;
			else
				return 0;
		}
	}
	else if (b == 1) {	// �μ��ϰ� �߰� �Ǽ��� �� ���, ������ �� �ϰ�� �߰� �Ǽ��� �� ���
		if (Player[a].money - City[Player[a].pos].price[0] >= (enemyland - myland - City[Player[a].pos].price[0]) / MAX_CITY && (Player[a].money - City[Player[a].pos].price[0]) >= 0) // �� ���� ��ȭ�� �� ���� ���� ������ ���� ������ ����Ǵ� ��밪���� ������ ����Ȯ���� �����Ƿ� �μ��ϰ� ������(���� �ڻ� - ��ȭ ���) >= ���� ������ ����Ǵ� ���((���� ���� �� ���� - �� ���� �� ����(������ ���� ���) - ��ȭ �� �����Ǵ� �� ���� ����) / �� ���ü�)�� �����ϸ� �μ��Ŀ��� �Ļ� ������ ���� ��� �μ���
			return 1;
		else
			return 0;
	}
}

int C_Gambling_Answer(int a) {
	if (a == 1 || a == 2 || a == 3) {	// �÷��̾ ��ǻ���� ���
		return rand() % 2;				// �������� 1(Ȧ��) , 0(¦��)�� ��ȯ
	}
	else								// �׷����� ������ �÷��̾��� ���
		return Answer(a, 0);			// ������ �����ϵ��� ����
}

void CheckCityCount(int j) {
	Player[j].citycount = 0;								// �÷��̾� ���� ���� �ľ��� ���� 0���� �ʱ�ȭ�ϰ� �ٽ� ī��Ʈ��
	for (int i = 0; i < MAX_CITY; i++)	{
		if (strcmp(City[i].owner, Player[j].name) == 0) {	// �ش� �÷��̾ ������ ������ ��� ���ü�+1
			Player[j].citycount++;
		}
	}
}

void Bankrupt_Answer(int j) {
	int i = 0;			
	int total = 0;				// �� ó�� ����
	int lowest_number = 0;		// ���� �� ������ ���� ������ ����
	int save_number = 0;		// �Ļ� ���Ⱑ �����Ǵ� ���� �� ����� ��� ������ ����
	int cyclecount = 0;			// ������� ���Ҵ��� ����
	while (Player[j].money + total < 0) {	// �÷��̾ ���� ������ ���� ó���� ������ ����� ���� 0���� ������(�Ļ� ����) �ݺ�
		int lowest_price = Highest;			// �񱳸� ���� ���� ��� �������� ����(�������� ���� �� ���� �� ��������)
		int save_price = Highest;			// �񱳸� ���� ���� ��� �������� ����(�������� ���� �� ���� �ΰ� �Ļ� ���⸦ Ż���� �� �ִ� ��������)
		int now_price = 0;					// ���� �� ���� ���� ����
		if (Player[j].citycount == 0) {				// ��� ó���ߴµ��� �Ļ� ������ ���(�Ļ��̹Ƿ�)
			Player[j].deathcount = 0;				// �ش� �÷��̾��� ������ 0�� ��
			Player[j].deathturn = Game.totalturn;	// �ش� �÷��̾ ���� �� ����(���� �񱳿�)
			Player[j].money = 0;					// ���� 0���� �ʱ�ȭ ��
			break;
		}

		for (i = 0; i < MAX_CITY; i++)									
		{
			if (strcmp(City[i].owner, Player[j].name) == 0) {			// �÷��̾��� ���� ���� �ľ�
				if (City[i].price[City[i].size] <= lowest_price) {		// ������ ���� �� ���� �� ������ �������� Ȯ��
					lowest_price = City[i].price[City[i].size];			// ���� �δٸ� �� ������ lowest_price�� ����(����ؼ� ���� �� ������ Ȯ���ϱ� ����)
					lowest_number = i;									// �� ���ÿ� ���� ���� ����(���° ���ÿ�����)
				}
				else {													// ���� �� ������ �ƴ� ���
					if (cyclecount >= 1) {								// �ѹ����̻� ������ ���(���� ��� ���ø� �ȾƵ� �Ļ� ���⸦ ��� �� ������ ���� �� 2���� ���ø� �ȾƵ� �Ļ� ���⸦ ��� �� ���� ��� ���ڰ� �� ������ ������) 
						now_price = City[i].price[City[i].size];		// now_price�� ���� ���� ������ �״�� �ְ�
						if (Player[j].money + total + now_price > 0 && now_price < save_price) {	// ���� ���� �ڻ� + ó���� �� + now_price > 0�̰�(�Ļ� ���� ����), �� ������ ������ ������ now_price(save_price�� �����)�� ���ݺ��� �� ���
							save_price = now_price;						// save_price�� now_price������ ����
							save_number = i;							// �� ���ÿ� ���� ���� ����(���° ���ÿ�����)
						}
					}
				}
			}
		}
		if (Player[j].money + total + lowest_price >= 0) {					// ���� ���� �ڻ� + ó���� �� + ���� �� ������ ���� >= 0�̶��(�Ļ� ���� ����)
			Player[j].money += total + lowest_price;						// ���� �ڻ꿡 ó���� ���� ���� �� ������ ������ ����
			gotoxy(City[lowest_number].x[0], City[lowest_number].y[0]);		// ���� �� ���ø� ó��(size�� 0���� ����� ������ "����"���� ����� �������� �ǹ� ��絵 ����)
			printf("         ");
			strcpy(City[lowest_number].owner, "����");					
			City[lowest_number].size = 0;
		}
		else if (Player[j].money + total + save_price >= 0 && cyclecount >= 1) {	// ���� ���� �ڻ� + ó���� �� + save_price(�Ļ� ���⸦ �����ϴ� ���� ������ ����) >= 0�̶��
			Player[j].money += total + save_price;									// ���� �ڻ꿡 ó���� ���� save_price�� ������ ����	
			gotoxy(City[save_number].x[0], City[save_number].y[0]);					// save_number�� ����� ������ ���� ���ø� ó��(size�� 0���� ����� ������ "����"���� ����� �������� �ǹ� ��絵 ����)
			printf("         ");
			strcpy(City[save_number].owner, "����");
			City[save_number].size = 0;
		}
		else {																// �� ���� ��쿣
			total += lowest_price;											// ó���� ���� ���� �� ������ ������ �߰�
			gotoxy(City[lowest_number].x[0], City[lowest_number].y[0]);		// ���� �� ���ø� ó����(size�� 0���� ����� ������ "����"���� ����� �������� �ǹ� ��絵 ����)
			printf("         ");
			strcpy(City[lowest_number].owner, "����");
			City[lowest_number].size = 0;
		}
		CheckCityCount(j);													// �÷��̾��� ���� ���� �� Ȯ��(0�ε� �Ļ� ���Ⱑ �������� �ʾҴٸ� �Ļ��ΰ� �˱� ���ؼ� ���� ������Ʈ)
		cyclecount++;														// �� ������ ��� �ݺ��Ǵ°��� Ȯ��(ù��°�� ���� �� ���ø� �Ű��ϱ� ����)
	}
}

int turnchange(int mode, int i) {
	if (mode == 1) {	// �÷��̾� �� ��ȭ
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
		if (Player[i].deathcount == 0) {		// � �÷��̾ ����� ��� �� �÷��̾��� ���� �ѱ�
			i = turnchange(mode, i);
		}

	}
	else if (mode == 3) {
		if (i == 3)
			i = 0;
		else
			i++;
		if (Player[i].deathcount == 0) {		// � �÷��̾ ����� ��� �� �÷��̾��� ���� �ѱ�
			i = turnchange(mode, i);
		}
	}
	return i;
}

int ingameranking(int mode) {
	int p[4] = { 0 };	// �� �÷��̾���� ���� ���� �� �ڻ�(���ð��� + �ڻ�(����))
	if (mode == 1) {	// 1 vs 1�� ���
		for (int i = 0; i < MAX_CITY; i++) {
			if (strcmp(City[i].owner, Player[0].name) == 0) {		// ������ ������ �� �ڻ꿡 ������ ������ ����
				p[0] += City[i].price[City[i].size];
			}
			else if (strcmp(City[i].owner, Player[1].name) == 0) {
				p[1] += City[i].price[City[i].size];
			}
		}
		p[0] += Player[0].money;	// �� �÷��̾���� �� �ڻ꿡 ���� ������ �ڻ�(����)�� ����
		p[1] += Player[1].money;
		if (p[0] >= p[1]) {			// �� �ڻ��� Player1>=Player2�� ���
			Player[0].ranking = 1;	// Player1�� 1�� Player2�� 2��
			Player[1].ranking = 2;
		}
		else if (p[0] < p[1]) {		// �� �ڻ��� Player2>Player1�� ���
			Player[0].ranking = 2;	// Player2�� 1�� Player1�� 2��
			Player[1].ranking = 1;
		}
		if (Player[1].deathcount == 0) {	// Player2�� ���� ���
			Player[0].ranking = 1;			// Player1�� 1�� Player2�� 2��
			Player[1].ranking = 2;
			system("cls");					// ���� ȭ���� ����
			Ending(mode);					// ���� â(������ �������Ƿ�)
			return 1;						// ���α׷� ����(wincount�� 1��ȯ�Ͽ� while���� ����)
		}
		else if (Player[0].deathcount == 0) {	// Player1�� ���� ���
			Player[0].ranking = 2;				// Player2�� 1�� Player1�� 2��
			Player[1].ranking = 1;
			system("cls");						// ���� ȭ���� ����
			Ending(mode);						// ���� â(������ �������Ƿ�)
			return 1;							// ���α׷� ����(wincount�� 1��ȯ�Ͽ� while���� ����)
		}
		else
			return 0;

	}
	if (mode == 2) {	// 1 vs 1 vs 1�� ���
		int flag = 0;	// ���� �÷��̾��� �� ��
		for (int i = 0; i < MAX_CITY; i++) {
			if (strcmp(City[i].owner, Player[0].name) == 0) {		// ������ ������ �� �ڻ꿡 ������ ������ ����
				p[0] += City[i].price[City[i].size];
			}
			else if (strcmp(City[i].owner, Player[1].name) == 0) {
				p[1] += City[i].price[City[i].size];
			}
			else if (strcmp(City[i].owner, Player[2].name) == 0) {
				p[2] += City[i].price[City[i].size];
			}
		}
		p[0] += Player[0].money;	// �� �÷��̾���� �� �ڻ꿡 ���� ������ �ڻ�(����)�� ����
		p[1] += Player[1].money;
		p[2] += Player[2].money;
		if (Player[0].deathcount == 0 && Player[1].deathcount != 0 && Player[2].deathcount != 0) {		// Player1�� ���� ���
			if (p[1] >= p[2]) {																			// �� �ڻ��� Player2>=Player3�� ���
				Player[1].ranking = 1;																	// Player2�� 1�� Player3�� 2��
				Player[2].ranking = 2;
			}
			else {																						// �� �ڻ��� Player2<Player3�� ���
				Player[1].ranking = 2;																	// Player2�� 2�� Player3�� 1��
				Player[2].ranking = 1;
			}
			Player[0].ranking = 3;																		// Player1�� 3��
		}
		else if (Player[0].deathcount != 0 && Player[1].deathcount == 0 && Player[2].deathcount != 0) {	// Player2�� ���� ���
			if (p[0] >= p[2]) {																			// �� �ڻ��� Player1>=Player3�� ���
				Player[0].ranking = 1;																	// Player1�� 1�� Player3�� 2��
				Player[2].ranking = 2;
			}
			else {																						// �� �ڻ��� Player1<Player3�� ���
				Player[0].ranking = 2;																	// Player1�� 2�� Player3�� 1��
				Player[2].ranking = 1;
			}
			Player[1].ranking = 3;																		// Player2�� 3��
		}
		else if (Player[0].deathcount != 0 && Player[1].deathcount != 0 && Player[2].deathcount == 0) {	// Player3�� ���� ���
			if (p[0] >= p[1]) {																			// �� �ڻ��� Player1>=Player2�� ���
				Player[0].ranking = 1;																	// Player1�� 1�� Player2�� 2��
				Player[1].ranking = 2;
			}
			else {																						// �� �ڻ��� Player1<Player2�� ���
				Player[0].ranking = 2;																	// Player1�� 2�� Player2�� 1��
				Player[1].ranking = 1;
			}
			Player[2].ranking = 3;																		// Player3�� 3��
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount == 0 && Player[2].deathcount != 0) {	// Player1, Player2�� ���� ���
			if (Player[0].deathturn >= Player[1].deathturn) {											// Player1�� Player2���� ���� ������ ���
				Player[0].ranking = 2;																	// Player1�� 2�� Player2�� 3��
				Player[1].ranking = 3;
			}
			else {																						// Player2�� Player1���� ���� ������ ���
				Player[0].ranking = 3;																	// Player1�� 3�� Player2�� 2��
				Player[1].ranking = 2;
			}
			Player[2].ranking = 1;																		// Player3�� 1��
		}
		else if (Player[0].deathcount == 0 && Player[1].deathcount != 0 && Player[2].deathcount == 0) {	// Player1, Player3�� ���� ���
			if (Player[0].deathturn >= Player[2].deathturn) {											// Player1�� Player3���� ���� ������ ���
				Player[0].ranking = 2;																	// Player1�� 2�� Player3�� 3��
				Player[2].ranking = 3;
			}
			else {																						// Player3�� Player1���� ���� ������ ���
				Player[0].ranking = 3;																	// Player1�� 3�� Player3�� 2��
				Player[2].ranking = 2;
			}
			Player[1].ranking = 1;																		// Player2�� 1��
		}
		else if (Player[0].deathcount != 0 && Player[1].deathcount == 0 && Player[2].deathcount == 0) {	// Player2, Player3�� ���� ���
			if (Player[1].deathturn >= Player[2].deathturn) {											// Player2�� Player3���� ���� ������ ���
				Player[1].ranking = 2;																	// Player2�� 2�� Player3�� 3��
				Player[2].ranking = 3;
			}
			else {																						// Player3�� Player2���� ���� ������ ���
				Player[1].ranking = 3;																	// Player2�� 3�� Player3�� 2��
				Player[2].ranking = 2;
			}
			Player[0].ranking = 1;																		// Player1�� 1��
		}
																										// ��� ������ ���
		else if (p[0] >= p[1] && p[0] >= p[2] && p[1] >= p[2]) {										// ���ڻ��� Player1>=Player2>=Player3�� ���
			Player[0].ranking = 1;																		// Player1�� 1�� Player2�� 2�� Player3�� 3��
			Player[1].ranking = 2;
			Player[2].ranking = 3;
		}
		else if (p[0] >= p[1] && p[0] >= p[2] && p[2] > p[1]) {											// ���ڻ��� Player1>=Player3>Player2�� ���
			Player[0].ranking = 1;																		// Player1�� 1�� Player2�� 3�� Player3�� 2��
			Player[1].ranking = 3;
			Player[2].ranking = 2;
		}
		else if (p[1] > p[0] && p[1] >= p[2] && p[0] >= p[2]) {											// ���ڻ��� Player2>Player1>=Player3�� ���
			Player[0].ranking = 2;																		// Player1�� 2�� Player2�� 1�� Player3�� 3��
			Player[1].ranking = 1;
			Player[2].ranking = 3;
		}
		else if (p[2] > p[0] && p[2] > p[1] && p[0] >= p[1]) {											// ���ڻ��� Player3>Player1>=Player2�� ���	
			Player[0].ranking = 2;																		// Player1�� 2�� Player2�� 3�� Player3�� 1��
			Player[1].ranking = 3;
			Player[2].ranking = 1;
		}
		else if (p[1] > p[0] && p[1] >= p[2] && p[2] > p[0]) {											// ���ڻ��� Player2>=Player3>Player1�� ���
			Player[0].ranking = 3;																		// Player1�� 3�� Player2�� 1�� Player3�� 2��
			Player[1].ranking = 1;
			Player[2].ranking = 2;
		}
		else if (p[2] > p[0] && p[2] > p[1] && p[1] > p[0]) {											// ���ڻ��� Player3>Player2>Player1�� ���
			Player[0].ranking = 3;																		// Player1�� 3�� Player2�� 2�� Player3�� 1��
			Player[1].ranking = 2;
			Player[2].ranking = 1;
		}
		for (int i = 0; i <= mode; i++) {		// ���� �÷��̾� �� ��ŭ flag++
			if (Player[i].deathcount == 0) {
				flag++;
			}
		}
		if (flag == 2) {	// 1vs1vs1���� �θ��� �׾����Ƿ� ������ ����
			system("cls");	// ���� ȭ���� ����
			Ending(mode);	// ���� â(������ �������Ƿ�)
			return 1;		// ���α׷� ����(wincount�� 1��ȯ�Ͽ� while���� ����)
		}
		else
			return 0;
	}
	if (mode == 3) {		// 1vs1vs1vs1�� ���
		for (int i = 0; i < MAX_CITY; i++) {
			if (strcmp(City[i].owner, Player[0].name) == 0) {			// ������ ������ �� �ڻ꿡 ������ ������ ����
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
		p[0] += Player[0].money;	// �� �÷��̾���� �� �ڻ꿡 ���� ������ �ڻ�(����)�� ����
		p[1] += Player[1].money;
		p[2] += Player[2].money;
		p[3] += Player[3].money;
		int first = 0;			// �ڻ��� ���� ���� ����� �ڻ�
		int first_num = 0;		// �ڻ��� ���� ���� ����� ����
		int second = 0;			// �ڻ��� �ι�°�� ���� ����� �ڻ�
		int second_num = 0;		// �ڻ��� �ι�°�� ���� ����� ����
		int third = 0;			// �ڻ��� ����°�� ���� ����� �ڻ�
		int third_num = 0;		// �ڻ��� ����°�� ���� ����� ����
		int fourth = 0;			// �ڻ��� ���� ���� ����� �ڻ�
		int fourth_num = 0;		// �ڻ��� ���� ���� ����� ����
		int livecount = 0;		// ����ִ� �÷��̾� ��
		int deathcount = 0;		// ���� �÷��̾� ��
		for (int i = 0; i <= mode; i++) {		
			if (Player[i].deathcount == 0) {	// �÷��̾ �׾���ٸ� deathcount++
				deathcount++;
			}
			else								// �÷��̾ ����ִٸ� livecount++
				livecount++;
		}
		if (deathcount == 3) {					// ���� �÷��̾ 3���̶��
			int a[3] = { 0 };					// ���� �÷��̾��� �ϼ� ����
			int b[3] = { 0 };					// ���� �÷��̾��� ���� ����
			int j = 0;
			for (int i = 0; i <= mode; i++) {
				if (Player[i].deathcount == 0) {	// �÷��̾ �׾��ִٸ�
					a[j] = Player[i].deathturn;		// a�� ���� �÷��̾��� �ϼ��� ����
					b[j] = i;						// b�� ���� �÷��̾��� ������ ����
					j++;
				}
				else
					Player[i].ranking = 1;			// ����ִ� �÷��̾�� 1��(�������� �׾����Ƿ�)
			}

			if (a[0] >= a[1] && a[0] >= a[2] && a[1] >= a[2]) {		// ���� �ϼ��� Player[b[0]]>=Player[b[1]]>=Player[b[2]]�� ���
				Player[b[0]].ranking = 2;							// Player[b[0]]�� 2�� Player[b[1]]�� 3�� Player[b[2]]�� 4�� 
				Player[b[1]].ranking = 3;
				Player[b[2]].ranking = 4;
			}
			else if (a[0] >= a[1] && a[0] >= a[2] && a[2] > a[1]) {	// ���� �ϼ��� Player[b[0]]>=Player[b[2]]>Player[b[1]]�� ���
				Player[b[0]].ranking = 2;							// Player[b[0]]�� 2�� Player[b[1]]�� 4�� Player[b[2]]�� 3�� 
				Player[b[1]].ranking = 4;
				Player[b[2]].ranking = 3;
			}
			else if (a[1] > a[0] && a[1] >= a[2] && a[0] >= a[2]) {	// ���� �ϼ��� Player[b[1]]>Player[b[0]]>=Player[b[2]]�� ���
				Player[b[0]].ranking = 3;							// Player[b[0]]�� 3�� Player[b[1]]�� 2�� Player[b[2]]�� 4�� 
				Player[b[1]].ranking = 2;
				Player[b[2]].ranking = 4;
			}
			else if (a[2] > a[0] && a[2] > a[1] && a[0] >= a[1]) {	// ���� �ϼ��� Player[b[2]]>Player[b[0]]>=Player[b[1]]�� ���
				Player[b[0]].ranking = 3;							// Player[b[0]]�� 3�� Player[b[1]]�� 4�� Player[b[2]]�� 2�� 
				Player[b[1]].ranking = 4;
				Player[b[2]].ranking = 2;
			}
			else if (a[1] > a[0] && a[1] >= a[2] && a[2] > a[0]) {	// ���� �ϼ��� Player[b[1]]>=Player[b[2]]>Player[b[0]]�� ���
				Player[b[0]].ranking = 4;							// Player[b[0]]�� 4�� Player[b[1]]�� 2�� Player[b[2]]�� 3�� 
				Player[b[1]].ranking = 2;
				Player[b[2]].ranking = 3;
			}
			else if (a[2] > a[0] && a[2] > a[1] && a[1] > a[0]) {	// ���� �ϼ��� Player[b[2]]>Player[b[1]]>Player[b[0]]�� ���
				Player[b[0]].ranking = 4;							// Player[b[0]]�� 4�� Player[b[1]]�� 3�� Player[b[2]]�� 2�� 
				Player[b[1]].ranking = 3;
				Player[b[2]].ranking = 2;
			}
			system("cls");											// ���� ȭ���� ����
			Ending(mode);											// ���� â(������ �������Ƿ�)
			return 1;												// ���α׷� ����(wincount�� 1��ȯ�Ͽ� while���� ����)
		}
		else if (deathcount == 2) {				// ���� �÷��̾ 2���̶��
			int a[2] = { 0 };					// ���� �÷��̾��� ���� ����
			int b[2] = { 0 };					// ����ִ� �÷��̾��� ���� ����
			int j = 0;
			int k = 0;
			for (int i = 0; i <= mode; i++) {
				if (Player[i].deathcount == 0) {	// �÷��̾ �׾��ִٸ�
					a[j] = i;						// a�� ���� �÷��̾��� ������ ����
					j++;							
				}
				else {								// �÷��̾ ����ִٸ�
					b[k] = i;						// b�� ����ִ� �÷��̾��� ������ ����
					k++;
				}
			}
			if (Player[a[0]].deathturn > Player[a[1]].deathturn) {	// Player[a[0]]�� Player[a[1]]���� ���� �����ߴٸ�
				Player[a[0]].ranking = 3;							// Player[a[0]]�� 3�� Player[a[1]]�� 4��
				Player[a[1]].ranking = 4;
			}
			else {													// Player[a[1]]�� Player[a[0]]���� ���� �����ߴٸ�		
				Player[a[0]].ranking = 4;							// Player[a[0]]�� 4�� Player[a[1]]�� 3��
				Player[a[1]].ranking = 3;
			}
			if (p[b[0]] >= p[b[1]]) {								// �� �ڻ��� Player[b[0]]>=Player[b[1]]�� ���
				Player[b[0]].ranking = 1;							// Player[b[0]]�� 1�� Player[b[1]]�� 2��
				Player[b[1]].ranking = 2;
			}
			else {													// �� �ڻ��� Player[b[0]]<Player[b[1]]�� ���
				Player[b[0]].ranking = 2;							// Player[b[0]]�� 2�� Player[b[1]]�� 1��
				Player[b[1]].ranking = 1;
			}
		}
		else if (deathcount == 1) {				// ���� �÷��̾ 1���̶��			
			int j = 0;
			for (int i = 0; i <= mode; i++) {
				if (Player[i].deathcount == 0) {	// ���� �÷��̾�� 4��
					Player[i].ranking = 4;
					j = i;	// ���� �÷��̾��� ���� ����
				}
			}
			if (j == 0) {	// ���� �÷��̾ Player1�̶��
				if (p[1] >= p[2] && p[1] >= p[3] && p[2] >= p[3]) {		// �� �ڻ��� Player2>=Player3>=Player4�� ���
					Player[1].ranking = 1;								// Player2�� 1�� Player3�� 2�� Player4�� 3��
					Player[2].ranking = 2;
					Player[3].ranking = 3;
				}
				else if (p[1] >= p[2] && p[1] >= p[3] && p[2] < p[3]) {	// �� �ڻ��� Player2>=Player4>Player3�� ���
					Player[1].ranking = 1;								// Player2�� 1�� Player3�� 3�� Player4�� 2��
					Player[2].ranking = 3;
					Player[3].ranking = 2;
				}
				else if (p[2] > p[1] && p[2] >= p[3] && p[1] >= p[3]) {	// �� �ڻ��� Player3>Player2>=Player4�� ���
					Player[1].ranking = 2;								// Player2�� 2�� Player3�� 1�� Player4�� 3��
					Player[2].ranking = 1;
					Player[3].ranking = 3;
				}
				else if (p[2] > p[1] && p[2] >= p[3] && p[1] < p[3]) {	// �� �ڻ��� Player3>=Player4>Player2�� ���
					Player[1].ranking = 3;								// Player2�� 3�� Player3�� 1�� Player4�� 2��
					Player[2].ranking = 1;
					Player[3].ranking = 2;
				}
				else if (p[3] > p[1] && p[3] > p[2] && p[1] >= p[2]) {	// �� �ڻ��� Player4>Player2>=Player3�� ���
					Player[1].ranking = 2;								// Player2�� 2�� Player3�� 3�� Player4�� 1��
					Player[2].ranking = 3;
					Player[3].ranking = 1;
				}
				else if (p[3] > p[1] && p[3] > p[2] && p[1] < p[2]) {	// �� �ڻ��� Player4>Player3>Player2�� ���
					Player[1].ranking = 3;								// Player2�� 3�� Player3�� 2�� Player4�� 1��
					Player[2].ranking = 2;
					Player[3].ranking = 1;
				}
			}
			else if (j == 1) {	// ���� �÷��̾ Player2���												
				if (p[0] >= p[2] && p[0] >= p[3] && p[2] >= p[3]) {		// �� �ڻ��� Player1>=Player3>=Player4�� ���
					Player[0].ranking = 1;								// Player1�� 1�� Player3�� 2�� Player4�� 3��
					Player[2].ranking = 2;
					Player[3].ranking = 3;
				}
				else if (p[0] >= p[2] && p[0] >= p[3] && p[2] < p[3]) {	// �� �ڻ��� Player1>=Player4>Player3�� ���
					Player[0].ranking = 1;								// Player1�� 1�� Player3�� 3�� Player4�� 2��
					Player[2].ranking = 3;
					Player[3].ranking = 2;
				}
				else if (p[2] > p[0] && p[2] >= p[3] && p[0] >= p[3]) {	// �� �ڻ��� Player3>Player1>=Player4�� ���
					Player[0].ranking = 2;								// Player1�� 2�� Player3�� 1�� Player4�� 3��
					Player[2].ranking = 1;
					Player[3].ranking = 3;
				}
				else if (p[2] > p[0] && p[2] >= p[3] && p[0] < p[3]) {	// �� �ڻ��� Player3>=Player4>Player1�� ���
					Player[0].ranking = 3;								// Player1�� 3�� Player3�� 1�� Player4�� 2��
					Player[2].ranking = 1;
					Player[3].ranking = 2;
				}
				else if (p[3] > p[0] && p[3] > p[2] && p[0] >= p[2]) {	// �� �ڻ��� Player4>Player1>=Player3�� ���
					Player[0].ranking = 2;								// Player1�� 2�� Player3�� 3�� Player4�� 1��
					Player[2].ranking = 3;
					Player[3].ranking = 1;
				}
				else if (p[3] > p[0] && p[3] > p[2] && p[0] < p[2]) {	// �� �ڻ��� Player4>Player3>Player1�� ���
					Player[0].ranking = 3;								// Player1�� 3�� Player3�� 2�� Player4�� 1��
					Player[2].ranking = 2;
					Player[3].ranking = 1;
				}
			}
			else if (j == 2) {	// ���� �÷��̾ Player3�̶��	
				if (p[0] >= p[1] && p[0] >= p[3] && p[1] >= p[3]) {		// �� �ڻ��� Player1>=Player2>=Player4�� ���
					Player[0].ranking = 1;								// Player1�� 1�� Player2�� 2�� Player4�� 3��
					Player[1].ranking = 2;
					Player[3].ranking = 3;
				}
				else if (p[0] >= p[1] && p[0] >= p[3] && p[1] < p[3]) {	// �� �ڻ��� Player1>=Player4>Player2�� ���
					Player[0].ranking = 1;								// Player1�� 1�� Player2�� 3�� Player4�� 2��
					Player[1].ranking = 3;
					Player[3].ranking = 2;
				}
				else if (p[1] > p[0] && p[1] >= p[3] && p[0] >= p[3]) {	// �� �ڻ��� Player2>Player1>=Player4�� ���
					Player[0].ranking = 2;								// Player1�� 2�� Player2�� 1�� Player4�� 3��
					Player[1].ranking = 1;
					Player[3].ranking = 3;
				}
				else if (p[1] > p[0] && p[1] >= p[3] && p[0] < p[3]) {	// �� �ڻ��� Player2>=Player4>Player1�� ���
					Player[0].ranking = 3;								// Player1�� 3�� Player2�� 1�� Player4�� 2��
					Player[1].ranking = 1;
					Player[3].ranking = 2;
				}
				else if (p[3] > p[0] && p[3] > p[1] && p[0] >= p[1]) {	// �� �ڻ��� Player4>Player1>=Player2�� ���
					Player[0].ranking = 2;								// Player1�� 2�� Player2�� 3�� Player4�� 1��
					Player[1].ranking = 3;
					Player[3].ranking = 1;
				}
				else if (p[3] > p[0] && p[3] > p[1] && p[0] < p[1]) {	// �� �ڻ��� Player4>Player2>Player1�� ���
					Player[0].ranking = 3;								// Player1�� 3�� Player2�� 2�� Player4�� 1��
					Player[1].ranking = 2;
					Player[3].ranking = 1;
				}
			}
			else if (j == 3) {	// ���� �÷��̾ Player4���
				if (p[0] >= p[1] && p[0] >= p[2] && p[1] >= p[2]) {		// �� �ڻ��� Player1>=Player2>=Player3�� ���
					Player[0].ranking = 1;								// Player1�� 1�� Player2�� 2�� Player3�� 3��
					Player[1].ranking = 2;
					Player[2].ranking = 3;
				}
				else if (p[0] >= p[1] && p[0] >= p[2] && p[1] < p[2]) {	// �� �ڻ��� Player1>=Player3>Player2�� ���
					Player[0].ranking = 1;								// Player1�� 1�� Player2�� 3�� Player3�� 2��
					Player[1].ranking = 3;
					Player[2].ranking = 2;
				}
				else if (p[1] > p[0] && p[1] >= p[2] && p[0] >= p[2]) {	// �� �ڻ��� Player2>Player1>=Player3�� ���
					Player[0].ranking = 2;								// Player1�� 2�� Player2�� 1�� Player3�� 3��
					Player[1].ranking = 1;
					Player[2].ranking = 3;
				}
				else if (p[1] > p[0] && p[1] >= p[2] && p[0] < p[2]) {	// �� �ڻ��� Player2>=Player3>Player1�� ���
					Player[0].ranking = 3;								// Player1�� 3�� Player2�� 1�� Player3�� 2��
					Player[1].ranking = 1;
					Player[2].ranking = 2;
				}
				else if (p[2] > p[0] && p[2] > p[1] && p[0] >= p[1]) {	// �� �ڻ��� Player3>Player1>=Player2�� ���
					Player[0].ranking = 2;								// Player1�� 2�� Player2�� 3�� Player3�� 1��
					Player[1].ranking = 3;
					Player[2].ranking = 1;
				}
				else if (p[2] > p[0] && p[2] > p[1] && p[0] < p[1]) {	// �� �ڻ��� Player3>Player2>Player1�� ���
					Player[0].ranking = 3;								// Player1�� 3�� Player2�� 2�� Player3�� 1��
					Player[1].ranking = 2;
					Player[2].ranking = 1;
				}
			}
		}
		else {	// ���� ����� ���� ���
			for (int i = mode; i >= 0; i--) {	
				if (p[i] >= first) {	// �� �ڻ��� ���� ���� ����� �ڻ��� first�� �ǰ� first_num�� �� ����� ������ ���� ��
					first = p[i];		
					first_num = i;
				}
			}
			for (int i = mode; i >= 0; i--) {
				if (p[i] >= second && p[i] <= first && i != first_num) {	// �� �ڻ��� �ι�°�� ���� ����� �ڻ��� second�� �ǰ� second_num�� �� ����� ������ ���� ��
					second = p[i];
					second_num = i;
				}
			}
			for (int i = mode; i >= 0; i--) {
				if (p[i] >= third && p[i] <= second && i != first_num && i != second_num) {	// �� �ڻ��� ����°�� ���� ����� �ڻ��� third�� �ǰ� third_num�� �� ����� ������ ���� ��
					third = p[i];
					third_num = i;
				}
			}
			for (int i = mode; i >= 0; i--) {
				if (p[i] >= fourth && p[i] <= third && i != first_num && i != second_num && i != third_num) {	// �� �ڻ��� ���� ���� ����� �ڻ��� fourth�� �ǰ� fourth_num�� �� ����� ������ ���� ��
					fourth = p[i];
					fourth_num = i;
				}
			}
			Player[first_num].ranking = 1;		// �ڻ��� ���� ���� ����� 1��
			Player[second_num].ranking = 2;		// �ڻ��� �ι�°�� ���� ����� 2��
			Player[third_num].ranking = 3;		// �ڻ��� ����°�� ���� ����� 3��
			Player[fourth_num].ranking = 4;		// �ڻ��� ���� ���� ����� 4��
		}
		return 0;
	}
}

void savegame(void) {
	FILE* fp;	
	fp = fopen("data.bin", "wb");					// data.bin������ ���̳ʸ� ���� ���� ���� ����ü�� ����� Game,Player,City������ data.bin���Ͽ� ����(��������� ���� ���� ����)
	fwrite(&Game, sizeof(Game), 1, fp);
	fwrite(&Player[0], sizeof(Player[0]), 1, fp);
	fwrite(&Player[1], sizeof(Player[1]), 1, fp);
	fwrite(&Player[2], sizeof(Player[2]), 1, fp);
	fwrite(&Player[3], sizeof(Player[3]), 1, fp);
	for (int i = 0; i < MAX_CITY; i++) {
		fwrite(&City[i], sizeof(City[i]), 1, fp);
	}
	fclose(fp);										// ������ ����
}

int gamecontinue(int mode) {						
	system("cls");		// ���� ȭ���� ����
	if (mode == 4) {
		FILE* fp = fopen("data.bin", "rb");				// data.bin������ ���̳ʸ� �б� ���� ����, �� �ȿ� ����Ǿ� �ִ� ���� ������ ����ü�� �ҷ���(Game,Player,City)
		fread(&Game, sizeof(Game), 1, fp);	
		fread(&Player[0], sizeof(Player[0]), 1, fp);
		fread(&Player[1], sizeof(Player[1]), 1, fp);
		fread(&Player[2], sizeof(Player[2]), 1, fp);
		fread(&Player[3], sizeof(Player[3]), 1, fp);
		for (int i = 0; i < MAX_CITY; i++) {
			fread(&City[i], sizeof(City[i]), 1, fp);
		}
		fclose(fp);	// data.bin������ ����
		mode = Game.mode;	// ���� ���� ��带 �ҷ��� ���� ������ ����Ǿ��ִ� ���� ���� �ٲ�(�̾��ϱ� ���� 4���� ����)
		World_map();		// ������ ���
		Situation(mode);	// �÷��̾��� �̸�, �ڻ�, ���ü��� ���� ������ ȭ�鿡 ����ϰ� �÷��̾ ��ġ�� ���� ��(symbol)�� ���
		for (int i = 0; i < MAX_CITY; i++) {	
			if (strcmp(City[i].owner, Player[0].name) == 0) {	// �ҷ��� �����͸� ������� ���� ���ΰ� �� ���� SIZE�� ���� �����ǿ� �����
				for (int j = 0; j < City[i].size + 1; j++) {
					gotoxy(City[i].x[0], City[i].y[0]);
					RED;
					printf("��");
				}
			}
			else if (strcmp(City[i].owner, Player[1].name) == 0) {
				for (int j = 0; j < City[i].size + 1; j++) {
					gotoxy(City[i].x[0], City[i].y[0]);
					BLUE;
					printf("��");
				}
			}
			else if (strcmp(City[i].owner, Player[2].name) == 0) {
				for (int j = 0; j < City[i].size + 1; j++) {
					gotoxy(City[i].x[0], City[i].y[0]);
					YELLOW;
					printf("��");
				}
			}
			else if (strcmp(City[i].owner, Player[3].name) == 0) {
				for (int j = 0; j < City[i].size + 1; j++) {
					gotoxy(City[i].x[0], City[i].y[0]);
					GREEN;
					printf("��");
				}
			}
		}
	}
	else {
		World_map();		// ������ ���
		Situation(mode);	// �÷��̾��� �̸�, �ڻ�, ���ü��� ���� ������ ȭ�鿡 ����ϰ� �÷��̾ ��ġ�� ���� ��(symbol)�� ���
	}
	return mode;	// �̾��ϱ� ��忴�� ��� ������ 4������ ���� ������ �ҷ��� ����Ǿ��� ������ �� ���� �������ֱ� ���ؼ�
}

void ESC_ending(void) {		// ESC Ű�� ������ ������ ������������ â
	SKY;
	system("cls");
	gotoxy(35, 19);
	printf("�����͸� �����մϴ�.");
	gotoxy(30, 21);
	printf("������ �̾ �����Ͻð� �ʹٸ�");
	gotoxy(31, 23);
	printf("�̾��ϱ� ���� ������ �ּ���.\n\n");
}