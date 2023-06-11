// 둘 다 참일 경우만 참 출력하기
// 논리연산자 &&: 주어진 2개의 논리값이 모두 참(1) 일 때에만 1(참), 그 외의 경우에는 0(거짓)
// AND 연산, · 으로 표시하거나 생략, 집합 기호로는 ∩ (교집합, intersection)
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a && b);
	return 0;
}
