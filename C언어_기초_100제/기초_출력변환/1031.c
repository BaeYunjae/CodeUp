// 10진 정수 1개 입력받아 8진수로 출력하기
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);  // 10진수 입력
	printf("%o", n);  // 8진수(octal) 출력
	return 0;
}
