#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void stringcopy(char* a, char* b);	// a에 저장된 문자열을 b에 똑같이 copy하는 함수

int main(void) {
	char word1[100];	// 입력한 단어(복사할 단어)저장
	char word2[100] = { 0 };	// 복사한 단어 저장

	printf("복사할 단어를 입력해주세요:");
	scanf("%s", word1);	// 복사할 단어 입력

	stringcopy(word1, word2);	// word1에 저장된 문자열을 word2에 똑같이 copy

	printf("복사된 단어는 %s입니다.", word2);	// copy한 문자가 출력
}

void stringcopy(char* a, char* b) {
	int i = 0;
	while (a[i] != '\0') {	// a에 저장된 문자열이 끝날때 까지(NULL문자가 나올때까지) 반복
		b[i] = a[i];	// b[i]에 a[i]에 저장된 문자를 똑같이 copy
		i++;			// i를 하나 늘리고 계속해서 반복
	}
}
