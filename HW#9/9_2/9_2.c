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


	printf("�й�(10�ڸ�)�� �Է��ϼ���:");
	scanf("%d", &p.schoolnum);
	printf("������ �Է��ϼ���:");
	scanf("%s", &p.name);
	printf("��������� �Է��ϼ���:");
	scanf("%d", &p.meanscore);

	FILE* fp;
	fp = fopen("data.bin", "ab");
	fseek(fp, 0L, SEEK_END);
	long loc = ftell(fp);
	fseek(fp, 0L, SEEK_SET);

	px = (int*)malloc(loc);
		if (px == NULL) {
			printf("�޸𸮰� �����ϴ�.");
			exit(1);
		}
		
	fwrite(&p, sizeof(p), 1, fp);
	fclose(fp);
	free(px);

	fp = fopen("data.bin", "rb");
	printf("Ư�� ������ �Է��Ͻÿ�:");
	scanf("%d", &year);

	struct Student_Info asdf;
	struct Student_Info *buff = &asdf;
	
	fseek(fp, 0L, SEEK_SET);
	printf("%d�� �л��� ����\n", year);
	while (fread(buff, sizeof(struct Student_Info), 1, fp)) {
		if (buff->schoolnum % (year * 1000000) >= 0 && buff->schoolnum % (year * 1000000) < 1000000) {
			printf("�й�:%d\n", buff->schoolnum);
			printf("�̸�:%s\n", buff->name);
			printf("�������:%d\n", buff->meanscore);
		}
	}

	printf("������ �Է��Ͻÿ�(0:����, ���(n):������ �տ��� n��° �������� �ҷ���, ����(-n): ������ �ڿ��� n��° �������� �ҷ���):");
	scanf("%d", &n);
	while (n != 0) {
		if (n > 0) {
			fseek(fp, 0L, SEEK_SET);
			for (int i = 0; i < n; i++) {
				fread(buff, sizeof(struct Student_Info), 1, fp);
				printf("�й�:%d\n", buff->schoolnum);
				printf("�̸�:%s\n", buff->name);
				printf("�������:%d\n", buff->meanscore);
			}
		}
		else if (n < 0) {
			fseek(fp, sizeof(struct Student_Info)*(n), SEEK_END);
			for (int i = 0; i < -n; i++) {
				fread(buff, sizeof(struct Student_Info), 1, fp);
				printf("�й�:%d\n", buff->schoolnum);
				printf("�̸�:%s\n", buff->name);
				printf("�������:%d\n", buff->meanscore);
			}
		}
		printf("������ �Է��Ͻÿ�(0:����, ���(n):������ �տ��� n��° �������� �ҷ���, ����(-n): ������ �ڿ��� n��° �������� �ҷ���):");
		scanf("%d", &n);
	}
	fclose(fp);

	return 0;
}