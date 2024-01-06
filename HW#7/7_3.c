#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

void math(char a[SIZE], double(*fp[13])(double));	// a�� �м��� � �Լ��� ������ �ľ��� �Լ� ������ �迭�ȿ� �ִ� �Լ��� ���� ����־� ����� ���� ����ϴ� �Լ�

double sqrt_1(double a);	// sqrt�� ���� return�ϴ� �Լ�
double cos_1(double a);		// cos�� ���� return�ϴ� �Լ�
double sin_1(double a);		// sin�� ���� return�ϴ� �Լ�
double tan_1(double a);		// tan�� ���� return�ϴ� �Լ�
double exp_1(double a);		// exp�� ���� return�ϴ� �Լ�
double log_1(double a);		// log�� ���� return�ϴ� �Լ�
double log10_1(double a);	// log10�� ���� return�ϴ� �Լ�
double fabs_1(double a);	// fabs�� ���� return�ϴ� �Լ�
double ceil_1(double a);	// ceil�� ���� return�ϴ� �Լ�
double floor_1(double a);	// floor�� ���� return�ϴ� �Լ�
double asin_1(double a);	// asin�� ���� return�ϴ� �Լ�
double acos_1(double a);	// acos�� ���� return�ϴ� �Լ�
double atan_1(double a);	// atan�� ���� return�ϴ� �Լ�

int main(void) {

	double(*fp[13])(double);	// �Լ� ������ �迭 ����
	fp[0] = sqrt_1;		// ù ��° ��ҿ� sqrt_1�Լ��� �޸� �ּ� ����
	fp[1] = cos_1;		// �� ��° ��ҿ� cos_1�Լ��� �޸� �ּ� ����
	fp[2] = sin_1;		// �� ��° ��ҿ� sin_1�Լ��� �޸� �ּ� ����
	fp[3] = tan_1;		// �� ��° ��ҿ� tan_1�Լ��� �޸� �ּ� ����
	fp[4] = exp_1;		// �ټ� ��° ��ҿ� exp_1�Լ��� �޸� �ּ� ����
	fp[5] = log_1;		// ���� ��° ��ҿ� log_1�Լ��� �޸� �ּ� ����
	fp[6] = log10_1;	// �ϰ� ��° ��ҿ� log10_1�Լ��� �޸� �ּ� ����
	fp[7] = fabs_1;		// ���� ��° ��ҿ� fabs_1�Լ��� �޸� �ּ� ����
	fp[8] = ceil_1;		// ��ȩ ��° ��ҿ� ceil_1�Լ��� �޸� �ּ� ����
	fp[9] = floor_1;	// �� ��° ��ҿ� floor_1�Լ��� �޸� �ּ� ����
	fp[10] = asin_1;	// ���� ��° ��ҿ� asin_1�Լ��� �޸� �ּ� ����
	fp[11] = acos_1;	// ���� ��° ��ҿ� acos_1�Լ��� �޸� �ּ� ����
	fp[12] = atan_1;	// ���� ��° ��ҿ� atan_1�Լ��� �޸� �ּ� ����

	char a[SIZE] = { 0 };	// ���� �Է¹��� �迭
	
	printf("���ϴ� ���� �Է��Ͻÿ�:");
	scanf("%s", a);
	
	math(a, fp);	// ���� �˻��ϰ� �Է��� �Ŀ� �ش��ϴ� ��� ���
}

void math(char a[SIZE],double(*fp[13])(double)) {
	char c[6] = { 0 };	// ���� �˻��ϱ� ���� ī���ϴ� �迭
	int i = 0;
	int j = 0;
	char cStr[SIZE] = { 0 };	// ���� ��ȣ ���� ���� �����ϴ� �迭
	double num = 0;				// ��ȣ ���� ��(���ڿ�)�� atof�� double���·� �ٲ� ��
	double result = 0;			// �Լ��� �̿��Ͽ� ��� �Է��� �Ŀ� �ش��ϴ� ��� ��
	int errorcount = 0;			// error�� �߻��� ��� 1����(ex)���� �߸��� ���)

	while (a[i] != '(') {	// '('�Է������� ���ڿ��� ������ i�� ������ �� ��� errorcount 1���� 
		c[i] = a[i];
		i++;
		if (i == SIZE) {
			errorcount++;
			break;
		}
	};

	i = i + 1;	// ������ a[i]='('�̹Ƿ� i�� ������Ų�� ��ȣ ���� ���� cStr�� ������ �غ� �۾�

	if (strcmp(c, "sqrt") == 0) {	// '('���� ���ڿ��� sqrt�� ���
		while (a[i] != ')') {		// ')'�Է� ������ ��ȣ ���� ���� cStr�� ����
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);			// cStr�� ����� ���� double������ ��ȯ
		result = fp[0](num);		// �Լ� ������ �迭�� �̿��Ͽ� ���ϴ� ��� ���� ����
	}
	else if (strcmp(c, "cos") == 0) {	// '('���� ���ڿ��� cos�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[1](num);
	}
	else if (strcmp(c, "sin") == 0) {	// '('���� ���ڿ��� sin�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[2](num);
	}
	else if (strcmp(c, "tan") == 0) {	// '('���� ���ڿ��� tan�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[3](num);
	}
	else if (strcmp(c, "exp") == 0) {	// '('���� ���ڿ��� exp�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[4](num);
	}
	else if (strcmp(c, "log") == 0) {	// '('���� ���ڿ��� log�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[5](num);
	}
	else if (strcmp(c, "log10") == 0) {	// '('���� ���ڿ��� log10�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[6](num);
	}
	else if (strcmp(c, "fabs") == 0) {	// '('���� ���ڿ��� fabs�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[7](num);
	}
	else if (strcmp(c, "ceil") == 0) {	// '('���� ���ڿ��� ceil�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[8](num);
	}
	else if (strcmp(c, "floor") == 0) {	// '('���� ���ڿ��� floor�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[9](num);
	}
	else if (strcmp(c, "acos") == 0) {	// '('���� ���ڿ��� acos�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[10](num);
	}
	else if (strcmp(c, "asin") == 0) {	// '('���� ���ڿ��� asin�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[11](num);
	}
	else if (strcmp(c, "atan") == 0) {	// '('���� ���ڿ��� atan�� ���
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[12](num);
	}
	else {
		errorcount++;	// '('���� ���ڿ��� ���� � ��쵵 �ƴѰ�� errorcount 1 ����
	}

	if (errorcount == 0) 
		printf("��:%s = %g", a, result);	// errorcount�� 0�� ��� error�� ������ ���̹Ƿ� ���ϴ� ��� ���� ���
	else
		printf("�߸��� �Է��Դϴ�.\n");		// errorcount�� 0�� �ƴ� ��� error�� �߻��� ���̹Ƿ�(�Է��� �߸��� ���̹Ƿ�) �̸� ����
};

double sqrt_1(double a) {
	return sqrt(a);
}

double cos_1(double a) {
	return cos(a);
}

double sin_1(double a) {
	return sin(a);
}

double tan_1(double a) {
	return tan(a);
}

double exp_1(double a) {
	return exp(a);
}

double log_1(double a) {
	return log(a);
}

double log10_1(double a) {
	return log10(a);
}

double fabs_1(double a) {
	return fabs(a);
}

double ceil_1(double a) {
	return ceil(a);
}

double floor_1(double a) {
	return floor(a);
}

double asin_1(double a) {
	return asin(a);
}

double acos_1(double a) {
	return acos(a);
}

double atan_1(double a) {
	return atan(a);
}