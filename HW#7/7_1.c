#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseprint(char* p, int b);	// 입력한 문자를 역순으로 출력하는 함수

int main(void) {
	int length;	// 입력한 단어의 글자 수 세기용
	char word[100];	// 입력한 단어 저장
	
	printf("문자열을 입력하세요: ");
	scanf("%s", word);	// 단어 입력
	length = strlen(word);	// 단어의 길이를 셈

	reverseprint(word, length);	// 입력한 문자를 역순으로 출력
	return 0;
}

void reverseprint(char* p, int b) {
	
	printf("뒤집힌 문자열: ");
	for (b = b - 1; b >= 0; b--) {	// 단어의 길이에서 1을 빼고(배열은 0부터 시작하기 때문) 이에 해당하는 배열의 문자를 출력 (역순으로 반복-> 역순으로 출력)
		printf("%c", p[b]);
	}
}
