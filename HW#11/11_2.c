#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COMPARE(a,b) {	if(a>=b) printf("큰 숫자:%d",a); else printf("큰 값:%d",b); }	// 두 숫자를 비교해 더 큰 값을 출력

int main(void) {
	int num1, num2;			// 숫자들을 입력받을 곳
	printf("num1의 값을 입력해 주세요:");
	scanf("%d", &num1);
	printf("num2의 값을 입력해 주세요:");
	scanf("%d", &num2);
	COMPARE(num1, num2);	// 두 숫자(num1,num2)를 비교하여 더 큰 값을 출력하는 매크로

	return 0;
}
