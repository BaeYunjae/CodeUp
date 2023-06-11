// 참/거짓이 서로 다를 때에만 참 출력하기
// XOR(exclusive or, 배타적 논리합)연산, 집합의 의미로는 (합집합 - 교집합)
// 논리연산자는 사칙연산자와 마찬가지로 여러 번 중복해서 사용 가능, 연산의 순서를 만들어주기 위해 괄호 ( ) 사용
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (a && !b) || (!a && b));
	return 0;
}
