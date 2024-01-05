#define _CRT_SECURE_NO_WARNING	// scanf를 사용하기 위해 적어줌
#include <stdio.h>
#define PI 3.14	// PI를 3.14로 설정(기호상수 이용)

int main(void) {
	
	float radius;	// 반지름
	float circumference;	// 원의 둘레
	float area;	// 원의 넓이
	printf("반지름을 입력해주십시오: ");	
	scanf("%f", &radius);	// 반지름 값 입력

	circumference = 2 * PI * radius;	// 원의 둘레 = 2 * PI * 반지름
	area = radius * radius * PI;	// 원의 넓이 = 반지름 * 반지름 * PI

	printf("원의 둘레: %f , 원의 넓이: %f\n", circumference, area);	// 원의 둘레와 원의 넓이값 출력
	return 0;
}