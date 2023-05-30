// 연월일 입력받아 그대로 출력하기
#include <stdio.h>

int main()
{
	int y, m, d;
	scanf("%04d.%02d.%02d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d);
	return 0;
}
