#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseprint(char* p, int b);	// �Է��� ���ڸ� �������� ����ϴ� �Լ�

int main(void) {
	int length;	// �Է��� �ܾ��� ���� �� �����
	char word[100];	// �Է��� �ܾ� ����
	
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", word);	// �ܾ� �Է�
	length = strlen(word);	// �ܾ��� ���̸� ��

	reverseprint(word, length);	// �Է��� ���ڸ� �������� ���
	return 0;
}

void reverseprint(char* p, int b) {
	
	printf("������ ���ڿ�: ");
	for (b = b - 1; b >= 0; b--) {	// �ܾ��� ���̿��� 1�� ����(�迭�� 0���� �����ϱ� ����) �̿� �ش��ϴ� �迭�� ���ڸ� ��� (�������� �ݺ�-> �������� ���)
		printf("%c", p[b]);
	}
}
