#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE* fpin;
	int ch;
	int n = 0;

	if (argc == 2) {	// 입력이 Homework9-1.exe sunshine.txt일 때
		fpin = fopen(argv[1], "r");	// sunshine.txt파일 open
		while ((ch = fgetc(fpin)) != EOF) {	// EOF까지 그대로 받아쓰기
			putchar(ch);
		}
		fclose(fpin);	// 파일 open
	}
	else if (argc == 4) {	// 입력이 총 4문자일 때
		if (strcmp("-n", argv[1]) == 0) {	// Homework9-1.exe -n 띄어쓰기횟수 sunshine.txt로 입력할 때
			n = atoi(argv[2]);	// 띄어쓰기 횟수를 정수형으로 변환
		}
		if (n <= 0) {	// n이 음수일 경우 error
			printf("잘못된 입력입니다.\n");
			return 0;
		}
		fpin = fopen(argv[3], "r");	// sunshine.txt파일 open
		while ((ch = fgetc(fpin)) != EOF) {	// EOF까지 실행
			if (ch == '\n') {	// 만약 띄어쓰기가 있을 경우
				for (int i = 0; i < n; i++) {	// 위에 입력한 띄어쓰기횟수만큼 띄어쓰기를 함
					putchar('\n');

				}
			}
			else {
				putchar(ch);	// 띄어쓰기가 아닐 경우 그대로 입력
			}
		}
		fclose(fpin);	// 파일 close
	}
	else {
		printf("잘못된 입력입니다.\n");
	}
	return 0;
}