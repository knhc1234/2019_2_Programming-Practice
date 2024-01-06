#include <stdio.h>
#define RESULT		

int main(void) {

	for (int i = 0; i < 26; i++) {
	#ifdef RESULT	// RESULT가 정의되었으면 대문자 알파벳을 차례대로 출력
		printf("%c ", i + 65);
		if (i % 5 == 4)
			printf("\n");
	#endif
	#ifndef RESULT	// RESULT가 정의되지 않았으면 소문자 알파벳을 차례대로 출력
		printf("%c ", i + 97);
		if (i % 5 == 4)
			printf("\n");
	#endif
	}
	return 0;
}

