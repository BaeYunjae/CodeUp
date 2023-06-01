// 정수 1개 입력받아 그대로 출력하기3
#include <stdio.h>

int main()
{
	// int: -2147483648 ~ +2147483647 범위의 정수
	// long long int: -9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807 범위의 정수
	long long int n;
	scanf("%lld", &n);
	printf("%lld", n);
	return 0;
}
