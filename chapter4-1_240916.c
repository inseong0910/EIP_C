# chapter 4 : 연산자
# 작성자 : 황인성
======================================================================================================
# 4-1. 산술 연산자, 관계 연산자, 논리 연산자
# 4-1-1. 대입, 덧셈, 뺄셈, 곱셈, 음수 연산
#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;                   // 대입 연산(=)
	b = 20;                   // 대입 연산(=)
	sum = a + b;              // 더하기 연산(+) 후 대입 연산(=)
	sub = a - b;              // 빼기 연산(-) 후 대입 연산(=)
	mul = a * b;              // 곱하기 연산(*) 후 대입 연산(=)
	inv = -a;                 // 음수 연산(-) 후 대입 연산(=)

	printf("a의 값 : %d, b의 값 : %d\n", a, b);
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);
	printf("a의 음수 연산 : %d\n", inv);

	return 0;
}
======================================================================================================
# 4-1-2. 몫과 나머지를 구하는 연산
#include <stdio.h>

int main(void)
{
	double apple;			// 실수
	int banana;				// 정수
	int orange;				// 정수

	apple = 5.0 / 2.0;		// 실수와 실수의 나누기 연산
	banana = 5 / 2;			// 정수와 정수의 나누기 연산
	orange = 5 % 2;			// 정수와 정수의 나머지 연산(%)

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
} 
======================================================================================================
# 4-1-3. 증감 연산자 
#include <stdio.h>

int main(void)
{
	int a = 10, b = 10;

	++a;				// 변수의 값을 1만큼 증가
	--b;				// 변수의 값을 1만큼 감소

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
} 
======================================================================================================
# 4-1-4. 전위 표기, 후위 표기를 사용한 증감 연산 
#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;     // 전위형 증감 연산자
	post = (b++) * 3;    // 후위형 증감 연산자

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);

	return 0;
} 
====================================================================================================== 
# 4-1-5. 관계 연산의 결괏값 확인 
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;        // 각각 a와 b, c 값을 대입해보자.
	int res;                           // 결괏값을 저장할 변수
	                                   
	res = (a > b);                     // 10 > 20은 거짓이므로 결괏값은 0
	printf("a > b : %d\n", res);
	res = (a >= b);                    // 10 >= 20은 거짓이므로 결괏값은 0
	printf("a >= b : %d\n", res);
	res = (a < b);                     // 10 < 20은 참이므로 결괏값은 1
	printf("a < b : %d\n", res);
	res = (a <= b);                    // 10 <= 20은 참이므로 결괏값은 1
	printf("a <= b : %d\n", res);
	res = (a <= c);                    // 10 <= 10은 참이므로 결괏값은 1
	printf("a <= c : %d\n", res);
	res = (a == b);                    // 10 == 20은 거짓이므로 결괏값은 0
	printf("a == b : %d\n", res);
	res = (a != c);                    // 10 != 10은 거짓이므로 결괏값은 0
	printf("a != c : %d\n", res);

	return 0;
} 
====================================================================================================== 
# 4-1-6. 논리 연산의 결괏값 확인 
#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);                 // 좌항과 우항이 모두 참이면 참
	printf("(a > 10) && (a < 20) : %d\n", res);
	res = (a < 10) || (a > 20);                 // 좌항과 우항 중 하나라도 참이면 참
	printf("(a < 10) || (a > 20) : %d\n", res);
	res = !(a >= 30);                           // 거짓이면 참으로, 참이면 거짓으로
	printf("!(a >= 30) : %d\n", res);

	return 0;
} 
====================================================================================================== 
# 4-1-7. 연산의 결괏값을 확인하는 방법 
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	a + b;                                  // 연산 결과는 버려짐
	printf("%d + %d = %d\n", a, b, a + b);  // 연산 결과를 바로 출력에 사용

	res = a + b;                            // 연산 결과를 변수에 저장
	printf("%d + %d = %d\n", a, b, res);    // 저장된 값을 계속 사용

	return 0;
}
====================================================================================================== 
# 4-1. 확인문제1
# 4.0과 1.2의 덧셈, 뺄셈, 곱셈, 나눗셈을 한 값을 소수점 이하 첫째 자리까지 출력하기
# 직접 코딩하였음(https://csacademy.com/workspace)

#include <stdio.h>

int main(void)
{
    double a = 4.0, b = 1.2;
    
    printf("%.1lf + %.1lf = %.1lf \n", a, b, a + b);
    printf("%.1lf - %.1lf = %.1lf \n", a, b, a-b);
    printf("%.1lf * %.1lf = %.1lf \n", a, b, a*b);
    printf("%.1lf / %.1lf = %.1lf", a, b, a/b);
    
    return 0;
}
====================================================================================================== 
# 4-1. 확인문제2
# 두 과목의 점수를 입력하여 평균을 출력하는 프로그램을 작성하세요. 평균은 소수점 이하 첫째 자리까지 출력하세요.

#include <stdio.h>

int main(void)
{
    int a, b, tot;
    double avg;
    
    printf("두 과목의 점수 : ");
    scanf("%d%d", &a, &b);
    tot = a + b;
    avg = tot / 2.0;
    
    printf("평균 : %.1lf\n", avg);
    return 0;
} 
====================================================================================================== 
# 4-1. 확인문제3
# 태희가 신청한 전체 학점과 평점을 계산하여 신청 학점이 10학점 이상이고 평점 평균이 4.0을 넘는 경우 1을 출력하고,
# 그렇지 않으면 0을 출력하는 프로그램을 작성하세요. 태희가 이전 학기에 신청한 과목당 학점과 얻은 점수는 다음과 같습니다.
  국어-3학점-3.8
  영어-5학점-4.4
  수학-4학점-3.9

#include <stdio.h>

int main(void)
{
    int kor = 3, eng = 5, mat = 4;
    int credits;
    int res;
    double kscore = 3.8, escore = 4.4, mscore = 3.9;
    double grade;
    
    credits = kor + eng + mat;
    grade = (kor * kscore + eng * escore + mat * mscore) / credits; 
    res = (credits >= 10) && (grade > 4.0);
    printf("%d\n", res);
    return 0;
} 

====================================================================================================== 
# 실수형 변수 선언 float, double : float는 소수점 이하 7자리까지, double은 소수점 이하 15자리까지 표현 
# #include <stdio.h>, int main(void)에 어느정도 친숙해졌음 
# 여전히 낯설게 느껴지는 부분이 많아서 이 부분은 계속 살펴보면서 친해져야 함 









  
