// 정수 2개 입력받아 합 출력하기1
#include <stdio.h>

int main()
{
	long long int a, b;  // 입력되는 정수는 -1073741824 ~ 1073741824 
	scanf("%lld %lld", &a, &b);
	printf("%lld", a + b);
	return 0;
}
