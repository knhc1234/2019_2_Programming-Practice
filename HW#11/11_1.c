#include <stdio.h>
#define RESULT		

int main(void) {

	for (int i = 0; i < 26; i++) {
	#ifdef RESULT	// RESULT�� ���ǵǾ����� �빮�� ���ĺ��� ���ʴ�� ���
		printf("%c ", i + 65);
		if (i % 5 == 4)
			printf("\n");
	#endif
	#ifndef RESULT	// RESULT�� ���ǵ��� �ʾ����� �ҹ��� ���ĺ��� ���ʴ�� ���
		printf("%c ", i + 97);
		if (i % 5 == 4)
			printf("\n");
	#endif
	}
	return 0;
}

