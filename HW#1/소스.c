#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char name[80];	// �̸� 
	int koreanscore;	// ���� ���� 
	int englishscore;	// ���� ����
	int mathscore;		// ���� ����
	float average;		// �������� ���

	printf("�̸��� �Է��Ͻÿ�:");
	scanf("%s", name);	// �̸� ����(���ڿ� �迭�̹Ƿ� &����)
	while (1) {
		printf("���� ������ �Է��Ͻÿ�:");
		scanf("%d", &koreanscore);	// ���� ���� ����
		if (koreanscore >= 0 && koreanscore <= 100) 	// ������ 0~100���� �ƴ� ������ ��� �߸��� �����̹Ƿ� �ٽ� �Է�(100�� ��������)
			break;
		else
			printf("�߸��� ���� �Է��Դϴ�.\n");
	}
	while (1) {
		printf("���� ������ �Է��Ͻÿ�:");
		scanf("%d", &englishscore);	// ���� ���� ����
		if (englishscore >= 0 && englishscore <= 100) 	// ������ 0~100���� �ƴ� ������ ��� �߸��� �����̹Ƿ� �ٽ� �Է�(100�� ��������)
			break;
		else
			printf("�߸��� ���� �Է��Դϴ�.\n");
	}
	while (1) {
		printf("���� ������ �Է��Ͻÿ�:");
		scanf("%d", &mathscore);	// ���� ���� ����
		if (mathscore >= 0 && mathscore <= 100)			// ������ 0~100���� �ƴ� ������ ��� �߸��� �����̹Ƿ� �ٽ� �Է�(100�� ��������)
			break;
		else
			printf("�߸��� ���� �Է��Դϴ�.\n");
	}
	average = (koreanscore + englishscore + mathscore) / 3;	// �� ������ ��� ���

	printf("%s:%f(����:%d, ����:%d, ����:%d)", name, average, koreanscore, englishscore, mathscore);	// �̸�:���(���� ����, ���� ����, ���� ����)
	return 0;
}