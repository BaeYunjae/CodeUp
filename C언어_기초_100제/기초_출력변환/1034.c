// 8진 정수 1개 입력받아 10진수로 출력하기
#include <stdio.h>

int main()
{
	int n;
	scanf("%o", &n);  // 8진수, 0으로 시작하는 수는 8진수로 인식
	printf("%d", n);  // 10진수
	return 0;
}
