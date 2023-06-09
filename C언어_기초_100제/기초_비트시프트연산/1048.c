// 한 번에 2의 거듭제곱 배로 출력하기
// a << b : a * 2^b
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a << b);
	return 0;
}
