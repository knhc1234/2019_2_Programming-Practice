#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void stringcopy(char* a, char* b);	// a�� ����� ���ڿ��� b�� �Ȱ��� copy�ϴ� �Լ�

int main(void) {
	char word1[100];	// �Է��� �ܾ�(������ �ܾ�)����
	char word2[100] = { 0 };	// ������ �ܾ� ����

	printf("������ �ܾ �Է����ּ���:");
	scanf("%s", word1);	// ������ �ܾ� �Է�

	stringcopy(word1, word2);	// word1�� ����� ���ڿ��� word2�� �Ȱ��� copy

	printf("����� �ܾ�� %s�Դϴ�.", word2);	// copy�� ���ڰ� ���
}

void stringcopy(char* a, char* b) {
	int i = 0;
	while (a[i] != '\0') {	// a�� ����� ���ڿ��� ������ ����(NULL���ڰ� ���ö�����) �ݺ�
		b[i] = a[i];	// b[i]�� a[i]�� ����� ���ڸ� �Ȱ��� copy
		i++;			// i�� �ϳ� �ø��� ����ؼ� �ݺ�
	}
}
