# 2019_2_Programming-Practice
2019_2학기 프로그래밍실습 (과제)

HW#1

어떤 학생의 이름과 세 과목(국어, 영어, 수학)의 점수를 입력받아, 입력된 학생의 이름, 세 과목의 성적 및 평균을 아래 예와 같이 출력하는 프로그램을 작성하시오.

- 홍길동 : 75 (국어 : 80, 영어 : 70. 수학 : 75)

HW#2

원의 둘레와 넓이를 구하는 프로그램을 작성하시오.

 - 원의 반지름을 입력받아 계산

 - 원주율은 기호상수로 선언

HW#3
1) 연월일과 시간을 2019/9/15 12:34 와 같은 형태로 입력받아 2019년 9월 15일 12시 34분 과 같은 형태로 출력하는 프로그램을 작성하시오.

2) 1~20까지의 짝수 중 임의의 한 값을 출력하는 프로그램을 작성하고, 이를 10,000번 실행시켰을 때 각 짝수 값이 갖는 비율(즉, 발생빈도)을 계산하고 그래프로 나타내시오.

    이 발생빈도는 어떤 분포를 갖는지 소스코드에 주석으로 첨부하시오.

HW#4

자연수 e를 무한급수를 이용하여 소수점 이하 14자리까지 정확하도록 프로그램을 작성하시오.

e = 1 + 1/1! + 1/2! + 1/3! + ...

HW#5
1) 1과 자신으로만 나누어지는 정수를 소수 (prime number) 라고 한다. 주어진 정수에 대해 소수인지 여부를 판단하는 함수를 작성하고, 이를 사용하여 1부터 50사이의 모든 정수의 약수를 출력하는 프로그램을 작성하시오.

2) 자신을 제외한 모든 약수의 합이 자신과 같은 정수를 완전수 (perfect number) 라고 한다. 주어진 정수에 대해 완전수인지 여부를 판단하는 함수를 작성하고, 이를 사용하여 1부터 500 사이의 모든 완전수를 찾아서 출력하는 프로그램을 작성하시오.

HW#6
1) 진법변환 : 10진 정수 number와 변환할 진법 base를 인수로 받아서, number를 base의 진법으로 변환하는 함수를 작성한다. 함수의 동작은 base 값이 16 (즉 16진법으로 변환) 경우에 대하여 확인해본다.

2) 문자열들을 파일 끝을 만날때까지 입력 받아서 입력 문자열의 길이의 빈도를 조사하는 프로그램을 작성하시오. 문자열의 길이가 15보다 긴 문자열은 하나의 경우로 간주한다. 여기서, 빈도 (relative frequency)라 함은 특정 길이의 단어 수와 전체 단어 수의 비를 말함.

 - 파일의 끝을 확인하는 방법은 EOF 기호상수 (stdio.h에서 정의되어 있는 -1 값)을 사용 혹은 feof() 함수를 사용

 - disk에 저장되어 있는 파일이 아니라, 키보드로부터 값을 입력받을 경우 파일 끝은 Ctrl+Z (Ctrl 키를 누른상태에서 Z 키 입력) 입력으로 판단

HW#7
1) 키보드로부터 문자열을 입력받아 이를 끝문자부터 역순으로 출력하는 프로그램을 포인터를 이용하여 작성하시오.

 

2) 배열과 포인터를 이용하여 하나의 문자열을 다른 문자열로 복사하는 프로그램을 작성하시오. 여기서 string.h의 라이브러리 함수는 사용할 수 없다.

 

3) 주어진 실수에 대해 math.h 에서 정의된 여러 수학함수의 결과값을 반환하는 프로그램을 함수 포인터 배열을 사용하여 작성하고 동작을 확인하시오.

 - 키보드로부터의 입력 형태 : sin(3.14)

 - 출력 형태 : sin(3.14) = 0.0 (출력 형태는 편의상 근사값으로 표시하였음, 실제 출력에서는 printf문에서 %g를 사용하여 정확한 값을 출력하시오.)

 - 사용될 수학함수 : sqrt(), cos(), sin(), tan(), exp(), log(), log10(), fabs(), ceil(), floor(), acos(), asin(), atan()

HW#8
1) 분자와 분모로 구성되는 분수의 구조체를 정의하고, 이를 이용하여 분수의 덧셈, 뺄셈, 곱셈 및 나눗셈을 수행하는 각 함수와,  그 동작을 확인하는 프로그램(main에서 함수의 동작 확인)을 작성하시오.

 - 여기서, 분자와 분모는 최대공약수가 1이 아니면 두 수를 최대공약수로 나눈 값 (즉 기약 분수)으로 나타낸다.

 - 입력 형태 : 3/9 + 5/12 = (두 분수 사이의 연산자를 통해 덧셈, 뺄셈, 곱셈, 나눗셈을 구분한다.)

 - 출력 형태 : 15/36
