#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change(int number, int base);

int main(void) {
	int number = 0;	// �Է¹��� 10�� ����
	int base = 0;	// ��ȯ�� ����
	
	printf("��ȯ�� 10�� ������ �Է��ϼ���:");	
	scanf("%d", &number);	// ��ȯ�� 10�� ���� �Է�
	
	printf("��ȯ�� ������ �Է��ϼ���:");
	scanf("%d", &base);	// ��ȯ�� ���� �Է�

	if (base < 2 || base>16) {
		printf("2�̸� 16�ʰ��� ������ ��ȯ�� �� �����ϴ�.");	// ������ 2���� �۰ų� 16���� ũ�� �Ұ���
		return 0;
	}

	change(number, base);	// ��ȯ�Ͽ� ���

	return 0;
}

int change(int number, int base) {
	char number2[100];	// ��ȯ�� ����(������ ��)
	char number3[100] = { 0 };	// ��ȯ�� ����
	int i = 0;
	int isave = 0;	// i�� �ִ�ġ �����
	
	while (number >= base) {
		number2[i] = number % base;	// ���ڸ� ������ ���� �������� ����
		number /= base;	// ���ڸ� �������� ����
		i++;
	}
	
	number2[i] = number;	// ���ڰ� �������� �۾��� ��� while���� ���������� ���� ���ڸ� number2�� ����
	isave = i;	// i�� �ִ�ġ ���� (������ �� ���(������¿��� �״�� ����ϸ� �Ųٷ� ����))	
	
	for (; i >= 0; i--) {		
		if (number2[i] < 10) {	// number2[i]�� 10���� ������
			number3[isave - i] = number2[i] + 48;	// �� ���� ���� ���� ���ڷ� ����� ����(���� �������� �ִ� �����̹Ƿ� ����� �����ϸ� ���� ���Ϸ��� ��ȯ�� ������ ������ ��)
		}
		else {
			number3[isave - i] = number2[i] + 55;	// 10���� ũ�� A~F�� �ش��ϴ� ���� ���ڷ� ����(���� �������� �ִ� �����̹Ƿ� ����� �����ϸ� ���� ���Ϸ��� ��ȯ�� ������ ������ ��)
		}
	}
	
	printf("%d�������� ��ȯ�� ��: ", base);
	
	for (i = 0; i <= isave; i++) {
		printf("%c", number3[i]);	// ��ȯ�� �� ���
	}
}