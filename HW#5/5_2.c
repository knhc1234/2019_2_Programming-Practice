#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void perfectnumber(int a);	// 완전수인지 확인하고 완전수 일 경우 출력하는 함수

int main(void) {
	int i;
	for (i = 1; i <= 500; i++) {	// 1부터 500 사이의 완전수를 찾기 위해 for문을 이용
		perfectnumber(i);
	}

	return 0;
}

void perfectnumber(int a) {
	int sum = 0;	// 자기 자신을 제외한 약수의 합을 계산하기 위한 수
	for (int i = 1; i < a; i++) {	// 자기 자신을 제외한 약수의 합을 계산하기 위해 자기 자신은 제외
		if (a % i == 0) {	// 약수일 경우
			sum += i;	// sum에 약수를 계속해서 더해줌
		}
	}
	if (sum == a)	// sum(약수의 합)이 자신과 같은 경우 완전수 임을 출력
		printf("%d은 완전수 입니다.\n" , a);
}