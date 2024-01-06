#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void check1(int a);
void check2(int b, int c);

int main(void) {

	int a, b, c;
	printf("(2-1)정수를 입력하시오:");
	scanf("%d", &a);	// a에 입력된 정수 저장
	check1(a);			// a에 입력된 정수를 변환하고 비트값이 1인 비트의 수를 계산 
	
	printf("\n");

	printf("(2-2)두 정수를 입력하시오:");
	scanf("%d %d", &b, &c);	// b와 c에 입력된 정수 저장
	check2(b, c);			// b와 c의 두 비트값을 출력하고 비교해서 서로 다른 비트수를 출력

	return 0;
}



void check1(int a) {

	int count = 0;
	int c[32] = { 0 };			// 비트 값으로 변환하여 저장
	int i;
	for (i = 31; i >= 0; i--) {	// 역순으로 저장
		if (a >= 2) {			// a의 값이 2보다 클 경우
			if (a % 2 == 1) {	// 나머지가 1인 경우
				c[i] = 1;		// 해당 비트값에 1 저장
				a = a / 2;		// a를 2로 나눔
				count++;		// 1인 횟수 +1
			}
			else {				// 나머지가 0인 경우
				c[i] = 0;		// 해당 비트값에 0 저장
				a = a / 2;		// a를 2로 나눔
			}
		}
		else if (a == 1) {		// a가 1인 경우
			c[i] = a;			// 해당 비트값에 1을 저장
			count++;			// 1인 횟수 +1
			a = 0;				// a를 0으로 만듬 (비트를 다 구했으므로)
		}
		else					// a가 0인 경우
			c[i] = a;			// 이 이후에 저장 할 비트값은 모두 0
	}
	for (i = 0; i < 32; i++) {	// 저장을 역순으로 했으므로 원래 순서대로 비트 값을 표현
		printf("%d", c[i]);
		if (i % 4 == 3)			// 4자리 마다 띄어쓰기 처리
			printf(" ");
	}
	printf("\n");
	printf("비트 값이 1인 횟수:%d\n", count);	// count로 지금까지 측정한 비트값이 1인 횟수를 표현해 줌
}

void check2(int b, int c) {
	int orb = b;	// orb에 원래 b값을 저장(함수를 작동하면 b값이 0이 되므로)
	int orc = c;	// orc에 원래 c값을 저장(함수를 작동하면 c값이 0이 되므로)
	int count = 0;	// 서로 다른 비트수
	int d[32] = { 0 };
	int e[32] = { 0 };
	int i;
	for (i = 31; i >= 0; i--) {		// check1과 같은 원리
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
	for (i = 31; i >= 0; i--) {		// check1과 같은 원리
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
	printf("%d:", orb);				// "원래 입력된 b값: b값에 해당하는 비트형"꼴로 출력
	for (i = 0; i < 32; i++) {
		printf("%d", d[i]);
		if (i % 4 == 3)
			printf(" ");
	}
	printf("\n");
	printf("%d:", orc);				// "원래 입력된 c값: c값에 해당하는 비트형"꼴로 출력
 	for (i = 0; i < 32; i++) {
		printf("%d", e[i]);
		if (i % 4 == 3)
			printf(" ");
	}
	printf("\n");
	for (i = 0; i < 32; i++) {		// 각 비트값들을 비교하고 서로 다른 비트의 수를 계산
		if (d[i] != e[i])
			count++;
	}
	printf("서로 다른 비트의 수:%d\n", count);	// 서로 다른 비트수 출력
}