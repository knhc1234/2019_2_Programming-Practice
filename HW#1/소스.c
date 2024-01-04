#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char name[80];	// 이름 
	int koreanscore;	// 국어 점수 
	int englishscore;	// 영어 점수
	int mathscore;		// 수학 점수
	float average;		// 점수들의 평균

	printf("이름을 입력하시오:");
	scanf("%s", name);	// 이름 저장(문자열 배열이므로 &생략)
	while (1) {
		printf("국어 점수를 입력하시오:");
		scanf("%d", &koreanscore);	// 국어 점수 저장
		if (koreanscore >= 0 && koreanscore <= 100) 	// 점수가 0~100점이 아닌 점수일 경우 잘못된 점수이므로 다시 입력(100점 만점기준)
			break;
		else
			printf("잘못된 점수 입력입니다.\n");
	}
	while (1) {
		printf("영어 점수를 입력하시오:");
		scanf("%d", &englishscore);	// 영어 점수 저장
		if (englishscore >= 0 && englishscore <= 100) 	// 점수가 0~100점이 아닌 점수일 경우 잘못된 점수이므로 다시 입력(100점 만점기준)
			break;
		else
			printf("잘못된 점수 입력입니다.\n");
	}
	while (1) {
		printf("수학 점수를 입력하시오:");
		scanf("%d", &mathscore);	// 수학 점수 저장
		if (mathscore >= 0 && mathscore <= 100)			// 점수가 0~100점이 아닌 점수일 경우 잘못된 점수이므로 다시 입력(100점 만점기준)
			break;
		else
			printf("잘못된 점수 입력입니다.\n");
	}
	average = (koreanscore + englishscore + mathscore) / 3;	// 세 점수의 평균 계산

	printf("%s:%f(국어:%d, 영어:%d, 수학:%d)", name, average, koreanscore, englishscore, mathscore);	// 이름:평균(국어 점수, 영어 점수, 수학 점수)
	return 0;
}