#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 25	// 나온 숫자들의 분포를 시각화 하기위한 SIZE (ex)1000이면 SIZE가 25일 경우 1000/25 = 40 즉 별이 40개 생성)

int main(void) {
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;	// 1~20까지의 숫자들 중 짝수인 2,4,6,8,10,12,14,16,18,20이 나온 횟수 저장
	int k;	// 랜덤으로 나온 값(2~20사이의 짝수)

	srand(time(NULL));

	for (int total = 0; total < 10000; total++) {	// 10000번 반복
		k = rand() % 10 * 2 + 2;	// 랜덤으로 나온 값(2~20사이의 짝수)
		switch (k) {
		case 2:a++;	// 2가 나올 경우 a의 숫자 증가(2가 나온 횟수 저장)
			break;
		case 4:b++;	// 4가 나올 경우 b의 숫자 증가(4가 나온 횟수 저장)
			break;
		case 6:c++;	// 6이 나올 경우 c의 숫자 증가(6이 나온 횟수 저장)
			break;
		case 8:d++;	// 8이 나올 경우 d의 숫자 증가(8이 나온 횟수 저장)
			break;
		case 10:e++;	// 10이 나올 경우 e의 숫자 증가(10이 나온 횟수 저장)
			break;
		case 12:f++;	// 12가 나올 경우 f의 숫자 증가(12가 나온 횟수 저장)
			break;
		case 14:g++;	// 14가 나올 경우 g의 숫자 증가(14가 나온 횟수 저장)
			break;
		case 16:h++;	// 16이 나올 경우 h의 숫자 증가(16이 나온 횟수 저장)
			break;
		case 18:i++;	// 18이 나올 경우 i의 숫자 증가(18이 나온 횟수 저장)
			break;
		case 20:j++;	// 20이 나올 경우 j의 숫자 증가(20이 나온 횟수 저장)
			break;
		}
	}

	printf(" 2:");	// 2가 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; a > 0; a -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf(" 4:");	// 4가 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; b > 0; b -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf(" 6:");	// 6이 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; c > 0; c -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf(" 8:");	// 8이 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; d > 0; d -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf("10:");	// 10이 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; e > 0; e -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf("12:");	// 12가 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; f > 0; f -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf("14:");	// 14가 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; g > 0; g -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf("16:");	// 16이 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; h > 0; h -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf("18:");	// 18이 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; i > 0; i -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf("20:");	// 20이 나온 숫자/SIZE 를 통해 그 숫자 만큼 별을 생성(대략적인 분포 확인용)
	for (; j > 0; j -= SIZE) {
		printf("*");
	}
	printf("\n");

	printf("       |    |    |    |    |    |    |    |\n");	// 별의 개수를 알기 쉽게 표시(별5개당 |1개)
	// 평균적으로 모든 숫자들이 각각 1000(SIZE가 25일 경우 별의 갯수가 40개)번에 가깝게 나오며 매번 약간의 차이가 있다.
	return 0;
}