#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void check1(int a);
void check2(int b, int c);

int main(void) {

	int a, b, c;
	printf("(2-1)������ �Է��Ͻÿ�:");
	scanf("%d", &a);	// a�� �Էµ� ���� ����
	check1(a);			// a�� �Էµ� ������ ��ȯ�ϰ� ��Ʈ���� 1�� ��Ʈ�� ���� ��� 
	
	printf("\n");

	printf("(2-2)�� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &b, &c);	// b�� c�� �Էµ� ���� ����
	check2(b, c);			// b�� c�� �� ��Ʈ���� ����ϰ� ���ؼ� ���� �ٸ� ��Ʈ���� ���

	return 0;
}



void check1(int a) {

	int count = 0;
	int c[32] = { 0 };			// ��Ʈ ������ ��ȯ�Ͽ� ����
	int i;
	for (i = 31; i >= 0; i--) {	// �������� ����
		if (a >= 2) {			// a�� ���� 2���� Ŭ ���
			if (a % 2 == 1) {	// �������� 1�� ���
				c[i] = 1;		// �ش� ��Ʈ���� 1 ����
				a = a / 2;		// a�� 2�� ����
				count++;		// 1�� Ƚ�� +1
			}
			else {				// �������� 0�� ���
				c[i] = 0;		// �ش� ��Ʈ���� 0 ����
				a = a / 2;		// a�� 2�� ����
			}
		}
		else if (a == 1) {		// a�� 1�� ���
			c[i] = a;			// �ش� ��Ʈ���� 1�� ����
			count++;			// 1�� Ƚ�� +1
			a = 0;				// a�� 0���� ���� (��Ʈ�� �� �������Ƿ�)
		}
		else					// a�� 0�� ���
			c[i] = a;			// �� ���Ŀ� ���� �� ��Ʈ���� ��� 0
	}
	for (i = 0; i < 32; i++) {	// ������ �������� �����Ƿ� ���� ������� ��Ʈ ���� ǥ��
		printf("%d", c[i]);
		if (i % 4 == 3)			// 4�ڸ� ���� ���� ó��
			printf(" ");
	}
	printf("\n");
	printf("��Ʈ ���� 1�� Ƚ��:%d\n", count);	// count�� ���ݱ��� ������ ��Ʈ���� 1�� Ƚ���� ǥ���� ��
}

void check2(int b, int c) {
	int orb = b;	// orb�� ���� b���� ����(�Լ��� �۵��ϸ� b���� 0�� �ǹǷ�)
	int orc = c;	// orc�� ���� c���� ����(�Լ��� �۵��ϸ� c���� 0�� �ǹǷ�)
	int count = 0;	// ���� �ٸ� ��Ʈ��
	int d[32] = { 0 };
	int e[32] = { 0 };
	int i;
	for (i = 31; i >= 0; i--) {		// check1�� ���� ����
		if (b >= 2) {
			if (b % 2 == 1) {
				d[i] = 1;
				b = b / 2;
			}
			else {
				d[i] = 0;
				b = b / 2;
			}
		}
		else if (b == 1) {
			d[i] = b;
			b = 0;
		}
		else
			d[i] = b;
	}
	for (i = 31; i >= 0; i--) {		// check1�� ���� ����
		if (c >= 2) {
			if (c % 2 == 1) {
				e[i] = 1;
				c = c / 2;
			}
			else {
				e[i] = 0;
				c = c / 2;
			}
		}
		else if (c == 1) {
			e[i] = c;
			c = 0;
		}
		else
			e[i] = c;
	}
	printf("%d:", orb);				// "���� �Էµ� b��: b���� �ش��ϴ� ��Ʈ��"�÷� ���
	for (i = 0; i < 32; i++) {
		printf("%d", d[i]);
		if (i % 4 == 3)
			printf(" ");
	}
	printf("\n");
	printf("%d:", orc);				// "���� �Էµ� c��: c���� �ش��ϴ� ��Ʈ��"�÷� ���
 	for (i = 0; i < 32; i++) {
		printf("%d", e[i]);
		if (i % 4 == 3)
			printf(" ");
	}
	printf("\n");
	for (i = 0; i < 32; i++) {		// �� ��Ʈ������ ���ϰ� ���� �ٸ� ��Ʈ�� ���� ���
		if (d[i] != e[i])
			count++;
	}
	printf("���� �ٸ� ��Ʈ�� ��:%d\n", count);	// ���� �ٸ� ��Ʈ�� ���
}