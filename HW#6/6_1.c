#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change(int number, int base);

int main(void) {
	int number = 0;	// 입력받은 10진 정수
	int base = 0;	// 변환할 진법
	
	printf("변환할 10진 정수를 입력하세요:");	
	scanf("%d", &number);	// 변환할 10진 정수 입력
	
	printf("변환할 진법을 입력하세요:");
	scanf("%d", &base);	// 변환할 진법 입력

	if (base < 2 || base>16) {
		printf("2미만 16초과의 진법은 변환할 수 없습니다.");	// 진법이 2보다 작거나 16보다 크면 불가능
		return 0;
	}

	change(number, base);	// 변환하여 출력

	return 0;
}

int change(int number, int base) {
	char number2[100];	// 변환한 숫자(뒤집은 것)
	char number3[100] = { 0 };	// 변환한 숫자
	int i = 0;
	int isave = 0;	// i의 최대치 저장용
	
	while (number >= base) {
		number2[i] = number % base;	// 숫자를 진법에 나눠 나머지를 저장
		number /= base;	// 숫자를 진법으로 나눔
		i++;
	}
	
	number2[i] = number;	// 숫자가 진법보다 작아질 경우 while문을 빠져나오고 남은 숫자를 number2에 저장
	isave = i;	// i의 최대치 저장 (뒤집을 때 사용(현재상태에서 그대로 출력하면 거꾸로 나옴))	
	
	for (; i >= 0; i--) {		
		if (number2[i] < 10) {	// number2[i]가 10보다 작으면
			number3[isave - i] = number2[i] + 48;	// 그 값과 같은 숫자 문자로 뒤집어서 저장(현재 뒤집어져 있는 상태이므로 뒤집어서 저장하면 원래 구하려는 변환된 값으로 나오게 됨)
		}
		else {
			number3[isave - i] = number2[i] + 55;	// 10보다 크면 A~F에 해당하는 숫자 문자로 저장(현재 뒤집어져 있는 상태이므로 뒤집어서 저장하면 원래 구하려는 변환된 값으로 나오게 됨)
		}
	}
	
	printf("%d진법으로 변환된 수: ", base);
	
	for (i = 0; i <= isave; i++) {
		printf("%c", number3[i]);	// 변환된 값 출력
	}
}