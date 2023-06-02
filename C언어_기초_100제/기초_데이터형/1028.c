// 정수 1개 입력받아 그대로 출력하기2
#include <stdio.h>

int main()
{
	unsigned int n;  // 0 ~ 4294967295 범위의 정수, int: -2147483648 ~ +2147483647 범위의 정수
	scanf("%u", &n);
	printf("%u", n);
	return 0;
}
