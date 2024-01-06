#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {

	int frequency[15] = { 0 };	// frequency[0]에는 단어길이가 1이 나온 빈도를 frequency[1]에는 단어길이가 2가 나온 빈도를 ,..., frequency[n]에는 n+1이 나온 빈도를 저장해 총 frequency[14]까지 단어길이가 1~15까지의 문자열 빈도를 저장함
	char ch;	// 단어 입력용
	int word = 0;	// 입력된 단어 수 계산 용

	while ((ch = getchar()) != EOF) {	// 만약 EOF를 입력할 때 까지 반복해서 입력
		while (1) {
			if (ch == '\n') {	// ch가 입력버퍼에 저장되어 있는데 맨 아랫줄의 ch = getchar()를 통해 하나씩 단어 길이를 세가면서 '\n'이 나오면 그 단어길이의 빈도에 +1을 해줌
				if (word >= 15) {	// 문자 길이가 15이거나 15보다 클 경우 15가 나온 빈도인 frequency[14]에 +1 해줌
					frequency[14]++;
					word = 0;	// 문자 길이는 빈도를 센 후 0으로 초기화
					break;
				}
				else if (word == 0)	// 문자 길이가 0인 경우 그대로 종료
					break;
				else {
					frequency[word - 1]++;	// 문자길이가 0보다 크고 15보다 작을 경우 그에 맞는 빈도에 +1을 해줌
					word = 0;	// 문자 길이는 빈도를 센 후 0으로 초기화
					break;
				}
			}
			else
				word++;	// 입력버퍼에 저장된 문자가 '\n'이 아니라면 문자 길이를 하나 증가해주고
			ch = getchar();	// 입력버퍼에 저장된 문자를 하나 빼줌
		}
	}
	for (int i = 1; i <= 15; i++) {	// EOF를 입력해 빠져나온 경우 단어의 길이와 그에 해당하는 빈도수를 표시해줌.
		printf("단어 길이가 %d인 문자열의 빈도:%d\n", i, frequency[i - 1]);
	}
}
