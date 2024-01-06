#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE* fpin;
	int ch;
	int n = 0;

	if (argc == 2) {	// �Է��� Homework9-1.exe sunshine.txt�� ��
		fpin = fopen(argv[1], "r");	// sunshine.txt���� open
		while ((ch = fgetc(fpin)) != EOF) {	// EOF���� �״�� �޾ƾ���
			putchar(ch);
		}
		fclose(fpin);	// ���� open
	}
	else if (argc == 4) {	// �Է��� �� 4������ ��
		if (strcmp("-n", argv[1]) == 0) {	// Homework9-1.exe -n ����Ƚ�� sunshine.txt�� �Է��� ��
			n = atoi(argv[2]);	// ���� Ƚ���� ���������� ��ȯ
		}
		if (n <= 0) {	// n�� ������ ��� error
			printf("�߸��� �Է��Դϴ�.\n");
			return 0;
		}
		fpin = fopen(argv[3], "r");	// sunshine.txt���� open
		while ((ch = fgetc(fpin)) != EOF) {	// EOF���� ����
			if (ch == '\n') {	// ���� ���Ⱑ ���� ���
				for (int i = 0; i < n; i++) {	// ���� �Է��� ����Ƚ����ŭ ���⸦ ��
					putchar('\n');

				}
			}
			else {
				putchar(ch);	// ���Ⱑ �ƴ� ��� �״�� �Է�
			}
		}
		fclose(fpin);	// ���� close
	}
	else {
		printf("�߸��� �Է��Դϴ�.\n");
	}
	return 0;
}