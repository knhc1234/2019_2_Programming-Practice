#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void primenumber(int a);	// 소수인지 판별하고 그 과정에서 약수를 구하여 프린트하는 함수

int main(void) {
	int i;
	for (i = 1; i <= 50; i++) {	// 1부터 50까지 소수인지 판별하고 모든 정수의 약수를 계산
		primenumber(i);
	}
	return 0;
}

void primenumber(int a) {	
	int primecount = 0;	// primecount가 1과 자기 자신으로 나뉘었을 때 즉 primecount가 2일 경우 소수임을 알고 그외의 경우엔 소수가 아님을 판별하기 위한 수
	printf("%d의 약수는:", a);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {	// 주어진 정수가 i로 나누어 떨어지면 i가 정수의 약수이므로
			printf("%d ",i);	// 약수에 i가 프린트됨
			primecount++;		// primecount가 증가
		}
	}
	printf("\n");
	if (primecount == 2)	// primecount가 2일경우 1과 자기 자신으로만 나뉘었으므로 소수
		printf("%d는 소수입니다.\n", a);
	else	// 그외엔 소수가 아님
		printf("%d는 소수가 아닙니다.\n", a);
}
