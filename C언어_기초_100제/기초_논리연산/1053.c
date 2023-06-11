// 참 거짓 바꾸기
// 참, 거짓의 논리값(boolean value)인 불 값을 다루어주는 논리연산자: !(not), &&(and), ||(or)
// NOT 연산, 프라임(기호 오른쪽에 따옴표; A'), 바(기호 위에 가로 막대; Ā), 집합 기호로는 c (여집합, complement)
// !1 == 0
// !0 == 1
// !999 == 0
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", !a);
	return 0;
}
