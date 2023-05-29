// 시간 입력받아 그대로 출력하기
#include <stdio.h>

int main()
{
	int h, m;
	scanf("%d:%d", &h, &m);  // scanf() 함수는 지정한 형식(format)에 따라 입력받는 함수
	printf("%d:%d", h, m);
	return 0;
}
