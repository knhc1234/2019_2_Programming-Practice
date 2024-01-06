#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct fractionalnumber {
	int numerator;		// 분자
	int denominator;	// 분모
};

void add(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f);				// 분수를 더하는 함수
void substraction(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f);	// 분수를 빼는 함수
void multiply(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f);		// 분수를 곱하는 함수
void divide(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber* f);			// 분수를 나누는 함수

int main(void) {
	struct fractionalnumber a = { 0 };	// 입력받는 분수1
	struct fractionalnumber b = { 0 };	// 입력받는 분수2
	struct fractionalnumber* c = malloc(sizeof(struct fractionalnumber));	// 결과값이 저장되는 구조체 포인터 선언 및 메모리 할당	
	char arithmetic_operations;	// 분수들 사이에 입력되는 기호(+,-,*,/)

	printf("입력:");
	scanf("%d/%d %c %d/%d =",&a.numerator,&a.denominator, &arithmetic_operations,&b.numerator,&b.denominator);	// 분수1,기호,분수2가 입력받음
	
	switch (arithmetic_operations) {	// 기호에 따라 case가 나뉘어짐
	case '+': add(a, b, c);				// 기호가 +일 경우 분수를 더하는 함수로 c에 결과 값이 저장됨
		break;
	case '-': substraction(a, b, c);	// 기호가 -일 경우 분수를 빼는 함수로 c에 결과 값이 저장됨
		break;
	case '*': multiply(a, b, c);		// 기호가 *일 경우 분수를 곱하는 함수로 c에 결과 값이 저장됨
		break;
	case '/': divide(a, b, c);			// 기호가 /일 경우 분수를 나누는 함수로 c에 결과 값이 저장됨
		break;
	}
	printf("답: %d/%d", c->numerator, c->denominator);	// 결과 값 출력
	free(c);											// 동적 메모리를 해제 해줌
}

void add(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f) {
	int i = 2;	// 기약분수로 만들기 위해 2부터 차례대로 나누어 떨어지는 걸 찾아내기 위한 용도
	int checkcount = 0;	// 음수의 경우 계산할 때 양수로 만들어 놓으므로 이를 확인하여 나중에 checkcount가 1이면 원래대로 음수로 돌려놓기 위한 수
	d.numerator = d.numerator * e.denominator;	// (a/b) + (c/d) = (ad+bc)/bd 꼴로 만드는 과정
	e.numerator = e.numerator * d.denominator;
	f->denominator = e.denominator * d.denominator;
	f->numerator = d.numerator + e.numerator;
	if (f->numerator < 0) {	// 만약 값이 음수 인경우 양수로 바꾸어준 후 기약분수로 만든 뒤 다시 음수로 돌려 놓음
		f->numerator = f->numerator * -1;	
		checkcount++;	// 이를 확인하기 위해 1 증가
	}
	while (i < f->numerator) {	// i가 분자와 분모 모두 나누어 떨어질 경우 그 수로 나누고 다시 2부터 이를 반복하여 기약분수를 만듬
		if (f->numerator % i == 0 && f->denominator % i == 0) {
			f->numerator = f->numerator / 2;
			f->denominator = f->denominator / 2;
			i = 2;
		}
		else
			i++;
	}
	if (checkcount == 1) {	// 원래 음수였던 수를 다시 돌려 놓음
		f->numerator = f->numerator * -1;
	}
};

void substraction(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f) {
	int i = 2;	// 기약분수로 만들기 위해 2부터 차례대로 나누어 떨어지는 걸 찾아내기 위한 용도
	int checkcount = 0;	// 음수의 경우 계산할 때 양수로 만들어 놓으므로 이를 확인하여 나중에 checkcount가 1이면 원래대로 음수로 돌려놓기 위한 수
	d.numerator = d.numerator * e.denominator;	// (a/b) - (c/d) = (ad-bc)/bd 꼴로 만드는 과정
	e.numerator = e.numerator * d.denominator;
	f->denominator = e.denominator * d.denominator;
	f->numerator = d.numerator - e.numerator;
	if (f->numerator < 0) {	// 만약 값이 음수 인경우 양수로 바꾸어준 후 기약분수로 만든 뒤 다시 음수로 돌려 놓음
		f->numerator = f->numerator * -1;
		checkcount++;	// 이를 확인하기 위해 1 증가
	}
	while (i < f->numerator) {	// i가 분자와 분모 모두 나누어 떨어질 경우 그 수로 나누고 다시 2부터 이를 반복하여 기약분수를 만듬
		if (f->numerator % i == 0 && f->denominator % i == 0) {
			f->numerator = f->numerator / 2;
			f->denominator = f->denominator / 2;
			i = 2;
		}
		else
			i++;
	}
	if (checkcount == 1) {	// 원래 음수였던 수를 다시 돌려 놓음
		f->numerator = f->numerator * -1;
	}
}

void multiply(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f) {
	int i = 2;	// 기약분수로 만들기 위해 2부터 차례대로 나누어 떨어지는 걸 찾아내기 위한 용도
	int checkcount = 0;	// 음수의 경우 계산할 때 양수로 만들어 놓으므로 이를 확인하여 나중에 checkcount가 1이면 원래대로 음수로 돌려놓기 위한 수
	f->denominator = e.denominator * d.denominator;	// (a/b) * (c/d) = ac/bd 꼴로 만드는 과정
	f->numerator = d.numerator * e.numerator;
	if (f->numerator < 0) {	// 만약 값이 음수 인경우 양수로 바꾸어준 후 기약분수로 만든 뒤 다시 음수로 돌려 놓음
		f->numerator = f->numerator * -1;
		checkcount++;	// 이를 확인하기 위해 1 증가
	}
	while (i < f->numerator) {	// i가 분자와 분모 모두 나누어 떨어질 경우 그 수로 나누고 다시 2부터 이를 반복하여 기약분수를 만듬
		if (f->numerator % i == 0 && f->denominator % i == 0) {	
			f->numerator = f->numerator / 2;
			f->denominator = f->denominator / 2;
			i = 2;
		}
		else
			i++;
	}
	if (checkcount == 1) {	// 원래 음수였던 수를 다시 돌려 놓음
		f->numerator = f->numerator * -1;
	}
}

void divide(struct fractionalnumber d, struct fractionalnumber e, struct fractionalnumber *f) {
	int i = 2;	// 기약분수로 만들기 위해 2부터 차례대로 나누어 떨어지는 걸 찾아내기 위한 용도
	int checkcount = 0;	// 음수의 경우 계산할 때 양수로 만들어 놓으므로 이를 확인하여 나중에 checkcount가 1이면 원래대로 음수로 돌려놓기 위한 수
	f->denominator = d.denominator * e.numerator;	// (a/b) / (c/d) = ad/bc 꼴로 만드는 과정
	f->numerator = d.numerator * e.denominator;
;
	if (f->numerator < 0) {	// 만약 값이 음수 인경우 양수로 바꾸어준 후 기약분수로 만든 뒤 다시 음수로 돌려 놓음
		f->numerator = f->numerator * -1;
		checkcount++;	// 이를 확인하기 위해 1 증가
	}
	while (i < f->numerator) {	// i가 분자와 분모 모두 나누어 떨어질 경우 그 수로 나누고 다시 2부터 이를 반복하여 기약분수를 만듬
		if (f->numerator % i == 0 && f->denominator % i == 0) {
			f->numerator = f->numerator / 2;
			f->denominator = f->denominator / 2;
			i = 2;
		}
		else
			i++;
	}
	if (checkcount == 1) {	// 원래 음수였던 수를 다시 돌려 놓음
		f->numerator = f->numerator * -1;
	}
}
