#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct updown { 
	unsigned short up : 4; 
	unsigned short down : 4; 
};

union uud {
	struct updown ud;
	unsigned char value;
};

struct updown UD (int up, int down);

int main(void) {
	union uud c;  
	int u = 0, d = 0;	
	int b = 0;			
	printf("(1-1)8-bit ������ �Է��Ͻÿ�(8����): "); 
	scanf("%x", &b);	// 8bit ������ �Է¹޾� �������� ����(unsigned char�� ���� ��� ����� ����Ʈ ũ��� ���� ����� ������ ��������)
	c.value = (unsigned char)b;	// �������� unsigned char������ ��ü
	u = c.ud.up;		// �Է��� ���� ���� ���� 4��Ʈ ���� u�� ����
	d = c.ud.down;		// �Է��� ���� ���� ���� 4��Ʈ ���� d�� ����
	c.ud = UD(u,d);/* ����ü������ ���� 4��Ʈ���� ���� 4��Ʈ���� ��ȯ�� ����*/ 
	printf("��ȯ �� 8-bit ���� = 0x%02x\n", c.value);	// �ٲ� ��� �� ���

	unsigned char a;
	int e;
	printf("(1-2)8bit ������ �Է��Ͻÿ�(8����):");
	scanf("%x", &e);	// 8bit ������ �Է¹޾� �������� ����(unsigned char�� ���� ��� ����� ����Ʈ ũ��� ���� ����� ������ ��������)
	e = (e << 4) | (e >> 4);	// ���� 4��Ʈ�� ���� 4��Ʈ ��ȯ
	a = (unsigned char)e;	// �������� unsigned char������ ��ü
	printf("��ȯ �� 8-bit ���� = 0x%02x\n", a);	// �ٲ� ��� �� ���

}

struct updown UD (int up, int down) { 
	struct updown ud; 
	ud.down = up;	// up(������ ���� 4��Ʈ)�� ���� 4��Ʈ�� ����
	ud.up = down;	// down(������ ���� 4��Ʈ)�� ���� 4��Ʈ�� ����
	return ud;		// ��ȯ�� ����ü ���� ����
}