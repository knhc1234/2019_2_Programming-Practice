#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void perfectnumber(int a);	// ���������� Ȯ���ϰ� ������ �� ��� ����ϴ� �Լ�

int main(void) {
	int i;
	for (i = 1; i <= 500; i++) {	// 1���� 500 ������ �������� ã�� ���� for���� �̿�
		perfectnumber(i);
	}

	return 0;
}

void perfectnumber(int a) {
	int sum = 0;	// �ڱ� �ڽ��� ������ ����� ���� ����ϱ� ���� ��
	for (int i = 1; i < a; i++) {	// �ڱ� �ڽ��� ������ ����� ���� ����ϱ� ���� �ڱ� �ڽ��� ����
		if (a % i == 0) {	// ����� ���
			sum += i;	// sum�� ����� ����ؼ� ������
		}
	}
	if (sum == a)	// sum(����� ��)�� �ڽŰ� ���� ��� ������ ���� ���
		printf("%d�� ������ �Դϴ�.\n" , a);
}