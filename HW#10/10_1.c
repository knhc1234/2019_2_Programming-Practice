#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct updown { 
	unsigned short up : 4; 
	unsigned short down : 4; 
};

union uud {
	struct updown ud;
	unsigned char value;
};

struct updown UD (int up, int down);

int main(void) {
	union uud c;  
	int u = 0, d = 0;	
	int b = 0;			
	printf("(1-1)8-bit 정수를 입력하시오(8진수): "); 
	scanf("%x", &b);	// 8bit 정수를 입력받아 정수형에 저장(unsigned char에 받을 경우 생기는 바이트 크기로 인해 생기는 오류를 막으려고)
	c.value = (unsigned char)b;	// 정수형을 unsigned char형으로 교체
	u = c.ud.up;		// 입력을 통해 얻은 상위 4비트 값을 u에 저장
	d = c.ud.down;		// 입력을 통해 얻은 하위 4비트 값을 d에 저장
	c.ud = UD(u,d);/* 구조체값으로 상위 4비트값과 하위 4비트값을 교환해 저장*/ 
	printf("교환 된 8-bit 정수 = 0x%02x\n", c.value);	// 바뀐 결과 값 출력

	unsigned char a;
	int e;
	printf("(1-2)8bit 정수를 입력하시오(8진수):");
	scanf("%x", &e);	// 8bit 정수를 입력받아 정수형에 저장(unsigned char에 받을 경우 생기는 바이트 크기로 인해 생기는 오류를 막으려고)
	e = (e << 4) | (e >> 4);	// 상위 4비트와 하위 4비트 교환
	a = (unsigned char)e;	// 정수형을 unsigned char형으로 교체
	printf("교환 된 8-bit 정수 = 0x%02x\n", a);	// 바뀐 결과 값 출력

}

struct updown UD (int up, int down) { 
	struct updown ud; 
	ud.down = up;	// up(기존의 상위 4비트)을 하위 4비트에 저장
	ud.up = down;	// down(기존의 하위 4비트)을 상위 4비트에 저장
	return ud;		// 교환된 구조체 값을 리턴
}