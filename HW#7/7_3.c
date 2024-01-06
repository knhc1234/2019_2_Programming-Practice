#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

void math(char a[SIZE], double(*fp[13])(double));	// a를 분석해 어떤 함수를 쓰는지 파악후 함수 포인터 배열안에 있는 함수에 값을 집어넣어 계산한 것을 출력하는 함수

double sqrt_1(double a);	// sqrt한 값을 return하는 함수
double cos_1(double a);		// cos한 값을 return하는 함수
double sin_1(double a);		// sin한 값을 return하는 함수
double tan_1(double a);		// tan한 값을 return하는 함수
double exp_1(double a);		// exp한 값을 return하는 함수
double log_1(double a);		// log한 값을 return하는 함수
double log10_1(double a);	// log10한 값을 return하는 함수
double fabs_1(double a);	// fabs한 값을 return하는 함수
double ceil_1(double a);	// ceil한 값을 return하는 함수
double floor_1(double a);	// floor한 값을 return하는 함수
double asin_1(double a);	// asin한 값을 return하는 함수
double acos_1(double a);	// acos한 값을 return하는 함수
double atan_1(double a);	// atan한 값을 return하는 함수

int main(void) {

	double(*fp[13])(double);	// 함수 포인터 배열 선언
	fp[0] = sqrt_1;		// 첫 번째 요소에 sqrt_1함수의 메모리 주소 저장
	fp[1] = cos_1;		// 두 번째 요소에 cos_1함수의 메모리 주소 저장
	fp[2] = sin_1;		// 세 번째 요소에 sin_1함수의 메모리 주소 저장
	fp[3] = tan_1;		// 네 번째 요소에 tan_1함수의 메모리 주소 저장
	fp[4] = exp_1;		// 다섯 번째 요소에 exp_1함수의 메모리 주소 저장
	fp[5] = log_1;		// 여섯 번째 요소에 log_1함수의 메모리 주소 저장
	fp[6] = log10_1;	// 일곱 번째 요소에 log10_1함수의 메모리 주소 저장
	fp[7] = fabs_1;		// 여덟 번째 요소에 fabs_1함수의 메모리 주소 저장
	fp[8] = ceil_1;		// 아홉 번째 요소에 ceil_1함수의 메모리 주소 저장
	fp[9] = floor_1;	// 열 번째 요소에 floor_1함수의 메모리 주소 저장
	fp[10] = asin_1;	// 열한 번째 요소에 asin_1함수의 메모리 주소 저장
	fp[11] = acos_1;	// 열두 번째 요소에 acos_1함수의 메모리 주소 저장
	fp[12] = atan_1;	// 열세 번째 요소에 atan_1함수의 메모리 주소 저장

	char a[SIZE] = { 0 };	// 식을 입력받을 배열
	
	printf("원하는 식을 입력하시오:");
	scanf("%s", a);
	
	math(a, fp);	// 식을 검사하고 입력한 식에 해당하는 결과 출력
}

void math(char a[SIZE],double(*fp[13])(double)) {
	char c[6] = { 0 };	// 식을 검사하기 위해 카피하는 배열
	int i = 0;
	int j = 0;
	char cStr[SIZE] = { 0 };	// 식의 괄호 안의 값을 저장하는 배열
	double num = 0;				// 괄호 안의 값(문자열)을 atof로 double형태로 바꾼 값
	double result = 0;			// 함수를 이용하여 얻는 입력한 식에 해당하는 결과 값
	int errorcount = 0;			// error가 발생할 경우 1증가(ex)식이 잘못된 경우)

	while (a[i] != '(') {	// '('입력전까지 문자열을 복사함 i가 끝까지 갈 경우 errorcount 1증가 
		c[i] = a[i];
		i++;
		if (i == SIZE) {
			errorcount++;
			break;
		}
	};

	i = i + 1;	// 현재의 a[i]='('이므로 i를 증가시킨후 괄호 안의 값을 cStr에 저장할 준비 작업

	if (strcmp(c, "sqrt") == 0) {	// '('전의 문자열이 sqrt인 경우
		while (a[i] != ')') {		// ')'입력 전까지 괄호 안의 값을 cStr에 저장
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);			// cStr에 저장된 값을 double형으로 전환
		result = fp[0](num);		// 함수 포인터 배열을 이용하여 원하는 결과 값을 얻음
	}
	else if (strcmp(c, "cos") == 0) {	// '('전의 문자열이 cos인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[1](num);
	}
	else if (strcmp(c, "sin") == 0) {	// '('전의 문자열이 sin인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[2](num);
	}
	else if (strcmp(c, "tan") == 0) {	// '('전의 문자열이 tan인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[3](num);
	}
	else if (strcmp(c, "exp") == 0) {	// '('전의 문자열이 exp인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[4](num);
	}
	else if (strcmp(c, "log") == 0) {	// '('전의 문자열이 log인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[5](num);
	}
	else if (strcmp(c, "log10") == 0) {	// '('전의 문자열이 log10인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[6](num);
	}
	else if (strcmp(c, "fabs") == 0) {	// '('전의 문자열이 fabs인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[7](num);
	}
	else if (strcmp(c, "ceil") == 0) {	// '('전의 문자열이 ceil인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[8](num);
	}
	else if (strcmp(c, "floor") == 0) {	// '('전의 문자열이 floor인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[9](num);
	}
	else if (strcmp(c, "acos") == 0) {	// '('전의 문자열이 acos인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[10](num);
	}
	else if (strcmp(c, "asin") == 0) {	// '('전의 문자열이 asin인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[11](num);
	}
	else if (strcmp(c, "atan") == 0) {	// '('전의 문자열이 atan인 경우
		while (a[i] != ')') {
			cStr[j] = a[i];
			i++;
			j++;
		};
		num = atof(cStr);
		result = fp[12](num);
	}
	else {
		errorcount++;	// '('전의 문자열이 위의 어떤 경우도 아닌경우 errorcount 1 증가
	}

	if (errorcount == 0) 
		printf("답:%s = %g", a, result);	// errorcount가 0인 경우 error가 없었던 것이므로 원하는 결과 값이 출력
	else
		printf("잘못된 입력입니다.\n");		// errorcount가 0이 아닌 경우 error가 발생한 것이므로(입력이 잘못된 것이므로) 이를 설명
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