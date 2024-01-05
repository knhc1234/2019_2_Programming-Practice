#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int a);	// ���丮���� ����ϴ� �Լ�

int main(void) {
	float e = 1;	// 1/0! + 1/1! + 1/2! + ~�� ����ϱ� ���� 1/0!(1)�� �̸� ���
	float fac;	// ���丮���� �̿��Ͽ� �м��� ����ϱ� ���Ͽ� float���� ����
	for (int i = 1; i < 34; i++) {	// i�� 35�̻����� ������� inf�� ǥ���
		fac = 1.0 / factorial(i);	
		e += fac;
	}

	printf("e�� ��: %.14f\n", e);	// e�� �� �Ҽ��� 14�ڸ����� ���

	return 0;
}

int factorial(int a) {
	int total = 1;
	while (a > 0) {
		total = total * a;	// ex) 2!�� ��� 2*1�� ���� a���� 1�� �ٿ����� ��� (a=0�϶� ����� ����)
		a--;
	}
	return total;	// ���丮���� ����Ͽ� ��ȯ
}