#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void primenumber(int a);	// �Ҽ����� �Ǻ��ϰ� �� �������� ����� ���Ͽ� ����Ʈ�ϴ� �Լ�

int main(void) {
	int i;
	for (i = 1; i <= 50; i++) {	// 1���� 50���� �Ҽ����� �Ǻ��ϰ� ��� ������ ����� ���
		primenumber(i);
	}
	return 0;
}

void primenumber(int a) {	
	int primecount = 0;	// primecount�� 1�� �ڱ� �ڽ����� �������� �� �� primecount�� 2�� ��� �Ҽ����� �˰� �׿��� ��쿣 �Ҽ��� �ƴ��� �Ǻ��ϱ� ���� ��
	printf("%d�� �����:", a);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {	// �־��� ������ i�� ������ �������� i�� ������ ����̹Ƿ�
			printf("%d ",i);	// ����� i�� ����Ʈ��
			primecount++;		// primecount�� ����
		}
	}
	printf("\n");
	if (primecount == 2)	// primecount�� 2�ϰ�� 1�� �ڱ� �ڽ����θ� ���������Ƿ� �Ҽ�
		printf("%d�� �Ҽ��Դϴ�.\n", a);
	else	// �׿ܿ� �Ҽ��� �ƴ�
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", a);
}
