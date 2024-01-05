#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int a);	// 팩토리얼을 계산하는 함수

int main(void) {
	float e = 1;	// 1/0! + 1/1! + 1/2! + ~을 계산하기 위해 1/0!(1)을 미리 계산
	float fac;	// 팩토리얼을 이용하여 분수를 계산하기 위하여 float으로 설정
	for (int i = 1; i < 34; i++) {	// i를 35이상으로 잡을경우 inf라 표기됨
		fac = 1.0 / factorial(i);	
		e += fac;
	}

	printf("e의 값: %.14f\n", e);	// e의 값 소숫점 14자리까지 출력

	return 0;
}

int factorial(int a) {
	int total = 1;
	while (a > 0) {
		total = total * a;	// ex) 2!의 경우 2*1과 같이 a값을 1씩 줄여가며 계산 (a=0일때 계산을 멈춤)
		a--;
	}
	return total;	// 팩토리얼을 계산하여 반환
}