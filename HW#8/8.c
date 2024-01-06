#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct fractionalnumber {
	int numerator;		// ����
	int denominator;	// �и�
};

void add(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f);				// �м��� ���ϴ� �Լ�
void substraction(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f);	// �м��� ���� �Լ�
void multiply(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f);		// �м��� ���ϴ� �Լ�
void divide(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber* f);			// �м��� ������ �Լ�

int main(void) {
	struct fractionalnumber a = { 0 };	// �Է¹޴� �м�1
	struct fractionalnumber b = { 0 };	// �Է¹޴� �м�2
	struct fractionalnumber* c = malloc(sizeof(struct fractionalnumber));	// ������� ����Ǵ� ����ü ������ ���� �� �޸� �Ҵ�	
	char arithmetic_operations;	// �м��� ���̿� �ԷµǴ� ��ȣ(+,-,*,/)

	printf("�Է�:");
	scanf("%d/%d %c %d/%d =",&a.numerator,&a.denominator, &arithmetic_operations,&b.numerator,&b.denominator);	// �м�1,��ȣ,�м�2�� �Է¹���
	
	switch (arithmetic_operations) {	// ��ȣ�� ���� case�� ��������
	case '+': add(a, b, c);				// ��ȣ�� +�� ��� �м��� ���ϴ� �Լ��� c�� ��� ���� �����
		break;
	case '-': substraction(a, b, c);	// ��ȣ�� -�� ��� �м��� ���� �Լ��� c�� ��� ���� �����
		break;
	case '*': multiply(a, b, c);		// ��ȣ�� *�� ��� �м��� ���ϴ� �Լ��� c�� ��� ���� �����
		break;
	case '/': divide(a, b, c);			// ��ȣ�� /�� ��� �м��� ������ �Լ��� c�� ��� ���� �����
		break;
	}
	printf("��: %d/%d", c->numerator, c->denominator);	// ��� �� ���
	free(c);											// ���� �޸𸮸� ���� ����
}

void add(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f) {
	int i = 2;	// ���м��� ����� ���� 2���� ���ʴ�� ������ �������� �� ã�Ƴ��� ���� �뵵
	int checkcount = 0;	// ������ ��� ����� �� ����� ����� �����Ƿ� �̸� Ȯ���Ͽ� ���߿� checkcount�� 1�̸� ������� ������ �������� ���� ��
	d.numerator = d.numerator * e.denominator;	// (a/b) + (c/d) = (ad+bc)/bd �÷� ����� ����
	e.numerator = e.numerator * d.denominator;
	f->denominator = e.denominator * d.denominator;
	f->numerator = d.numerator + e.numerator;
	if (f->numerator < 0) {	// ���� ���� ���� �ΰ�� ����� �ٲپ��� �� ���м��� ���� �� �ٽ� ������ ���� ����
		f->numerator = f->numerator * -1;	
		checkcount++;	// �̸� Ȯ���ϱ� ���� 1 ����
	}
	while (i < f->numerator) {	// i�� ���ڿ� �и� ��� ������ ������ ��� �� ���� ������ �ٽ� 2���� �̸� �ݺ��Ͽ� ���м��� ����
		if (f->numerator % i == 0 && f->denominator % i == 0) {
			f->numerator = f->numerator / 2;
			f->denominator = f->denominator / 2;
			i = 2;
		}
		else
			i++;
	}
	if (checkcount == 1) {	// ���� �������� ���� �ٽ� ���� ����
		f->numerator = f->numerator * -1;
	}
};

void substraction(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f) {
	int i = 2;	// ���м��� ����� ���� 2���� ���ʴ�� ������ �������� �� ã�Ƴ��� ���� �뵵
	int checkcount = 0;	// ������ ��� ����� �� ����� ����� �����Ƿ� �̸� Ȯ���Ͽ� ���߿� checkcount�� 1�̸� ������� ������ �������� ���� ��
	d.numerator = d.numerator * e.denominator;	// (a/b) - (c/d) = (ad-bc)/bd �÷� ����� ����
	e.numerator = e.numerator * d.denominator;
	f->denominator = e.denominator * d.denominator;
	f->numerator = d.numerator - e.numerator;
	if (f->numerator < 0) {	// ���� ���� ���� �ΰ�� ����� �ٲپ��� �� ���м��� ���� �� �ٽ� ������ ���� ����
		f->numerator = f->numerator * -1;
		checkcount++;	// �̸� Ȯ���ϱ� ���� 1 ����
	}
	while (i < f->numerator) {	// i�� ���ڿ� �и� ��� ������ ������ ��� �� ���� ������ �ٽ� 2���� �̸� �ݺ��Ͽ� ���м��� ����
		if (f->numerator % i == 0 && f->denominator % i == 0) {
			f->numerator = f->numerator / 2;
			f->denominator = f->denominator / 2;
			i = 2;
		}
		else
			i++;
	}
	if (checkcount == 1) {	// ���� �������� ���� �ٽ� ���� ����
		f->numerator = f->numerator * -1;
	}
}

void multiply(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f) {
	int i = 2;	// ���м��� ����� ���� 2���� ���ʴ�� ������ �������� �� ã�Ƴ��� ���� �뵵
	int checkcount = 0;	// ������ ��� ����� �� ����� ����� �����Ƿ� �̸� Ȯ���Ͽ� ���߿� checkcount�� 1�̸� ������� ������ �������� ���� ��
	f->denominator = e.denominator * d.denominator;	// (a/b) * (c/d) = ac/bd �÷� ����� ����
	f->numerator = d.numerator * e.numerator;
	if (f->numerator < 0) {	// ���� ���� ���� �ΰ�� ����� �ٲپ��� �� ���м��� ���� �� �ٽ� ������ ���� ����
		f->numerator = f->numerator * -1;
		checkcount++;	// �̸� Ȯ���ϱ� ���� 1 ����
	}
	while (i < f->numerator) {	// i�� ���ڿ� �и� ��� ������ ������ ��� �� ���� ������ �ٽ� 2���� �̸� �ݺ��Ͽ� ���м��� ����
		if (f->numerator % i == 0 && f->denominator % i == 0) {	
			f->numerator = f->numerator / 2;
			f->denominator = f->denominator / 2;
			i = 2;
		}
		else
			i++;
	}
	if (checkcount == 1) {	// ���� �������� ���� �ٽ� ���� ����
		f->numerator = f->numerator * -1;
	}
}

void divide(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f) {
	int i = 2;	// ���м��� ����� ���� 2���� ���ʴ�� ������ �������� �� ã�Ƴ��� ���� �뵵
	int checkcount = 0;	// ������ ��� ����� �� ����� ����� �����Ƿ� �̸� Ȯ���Ͽ� ���߿� checkcount�� 1�̸� ������� ������ �������� ���� ��
	f->denominator = d.denominator * e.numerator;	// (a/b) / (c/d) = ad/bc �÷� ����� ����
	f->numerator = d.numerator * e.denominator;
;
	if (f->numerator < 0) {	// ���� ���� ���� �ΰ�� ����� �ٲپ��� �� ���м��� ���� �� �ٽ� ������ ���� ����
		f->numerator = f->numerator * -1;
		checkcount++;	// �̸� Ȯ���ϱ� ���� 1 ����
	}
	while (i < f->numerator) {	// i�� ���ڿ� �и� ��� ������ ������ ��� �� ���� ������ �ٽ� 2���� �̸� �ݺ��Ͽ� ���м��� ����
		if (f->numerator % i == 0 && f->denominator % i == 0) {
			f->numerator = f->numerator / 2;
			f->denominator = f->denominator / 2;
			i = 2;
		}
		else
			i++;
	}
	if (checkcount == 1) {	// ���� �������� ���� �ٽ� ���� ����
		f->numerator = f->numerator * -1;
	}
}
