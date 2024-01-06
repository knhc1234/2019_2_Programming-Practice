#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student_Info {
	int schoolnum;
	char name[40];
	int meanscore;
};

int main(void) {
	int* px;
	int year;
	int n;
	struct Student_Info p;


	printf("학번(10자리)을 입력하세요:");
	scanf("%d", &p.schoolnum);
	printf("성명을 입력하세요:");
	scanf("%s", &p.name);
	printf("평균점수를 입력하세요:");
	scanf("%d", &p.meanscore);

	FILE* fp;
	fp = fopen("data.bin", "ab");
	fseek(fp, 0L, SEEK_END);
	long loc = ftell(fp);
	fseek(fp, 0L, SEEK_SET);

	px = (int*)malloc(loc);
		if (px == NULL) {
			printf("메모리가 없습니다.");
			exit(1);
		}
		
	fwrite(&p, sizeof(p), 1, fp);
	fclose(fp);
	free(px);

	fp = fopen("data.bin", "rb");
	printf("특정 연도를 입력하시오:");
	scanf("%d", &year);

	struct Student_Info asdf;
	struct Student_Info *buff = &asdf;
	
	fseek(fp, 0L, SEEK_SET);
	printf("%d년 학생들 정보\n", year);
	while (fread(buff, sizeof(struct Student_Info), 1, fp)) {
		if (buff->schoolnum % (year * 1000000) >= 0 && buff->schoolnum % (year * 1000000) < 1000000) {
			printf("학번:%d\n", buff->schoolnum);
			printf("이름:%s\n", buff->name);
			printf("평균점수:%d\n", buff->meanscore);
		}
	}

	printf("정수를 입력하시오(0:종료, 양수(n):파일의 앞에서 n번째 정보까지 불러옴, 음수(-n): 파일의 뒤에서 n번째 정보까지 불러옴):");
	scanf("%d", &n);
	while (n != 0) {
		if (n > 0) {
			fseek(fp, 0L, SEEK_SET);
			for (int i = 0; i < n; i++) {
				fread(buff, sizeof(struct Student_Info), 1, fp);
				printf("학번:%d\n", buff->schoolnum);
				printf("이름:%s\n", buff->name);
				printf("평균점수:%d\n", buff->meanscore);
			}
		}
		else if (n < 0) {
			fseek(fp, sizeof(struct Student_Info)*(n), SEEK_END);
			for (int i = 0; i < -n; i++) {
				fread(buff, sizeof(struct Student_Info), 1, fp);
				printf("학번:%d\n", buff->schoolnum);
				printf("이름:%s\n", buff->name);
				printf("평균점수:%d\n", buff->meanscore);
			}
		}
		printf("정수를 입력하시오(0:종료, 양수(n):파일의 앞에서 n번째 정보까지 불러옴, 음수(-n): 파일의 뒤에서 n번째 정보까지 불러옴):");
		scanf("%d", &n);
	}
	fclose(fp);

	return 0;
}