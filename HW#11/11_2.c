#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COMPARE(a,b) {	if(a>=b) printf("ū ����:%d",a); else printf("ū ��:%d",b); }	// �� ���ڸ� ���� �� ū ���� ���

int main(void) {
	int num1, num2;			// ���ڵ��� �Է¹��� ��
	printf("num1�� ���� �Է��� �ּ���:");
	scanf("%d", &num1);
	printf("num2�� ���� �Է��� �ּ���:");
	scanf("%d", &num2);
	COMPARE(num1, num2);	// �� ����(num1,num2)�� ���Ͽ� �� ū ���� ����ϴ� ��ũ��

	return 0;
}
