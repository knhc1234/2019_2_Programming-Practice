#define _CRT_SECURE_NO_WARNING	// scanf�� ����ϱ� ���� ������
#include <stdio.h>
#define PI 3.14	// PI�� 3.14�� ����(��ȣ��� �̿�)

int main(void) {
	
	float radius;	// ������
	float circumference;	// ���� �ѷ�
	float area;	// ���� ����
	printf("�������� �Է����ֽʽÿ�: ");	
	scanf("%f", &radius);	// ������ �� �Է�

	circumference = 2 * PI * radius;	// ���� �ѷ� = 2 * PI * ������
	area = radius * radius * PI;	// ���� ���� = ������ * ������ * PI

	printf("���� �ѷ�: %f , ���� ����: %f\n", circumference, area);	// ���� �ѷ��� ���� ���̰� ���
	return 0;
}