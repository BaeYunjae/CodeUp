// 16진 정수 1개 입력받아 8진수로 출력하기
#include <stdio.h>

int main()
{
	int n;
	scanf("%x", &n);  // 소문자로 16진수, %X로도 가능
	printf("%o", n);  // 8진수
	return 0;
}
