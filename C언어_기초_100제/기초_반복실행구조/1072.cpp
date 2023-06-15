// 정수 입력받아 계속 출력하기
#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d", &n);
reget:
	scanf("%d", &m);
	if (n-- != 0)
	{
		printf("%d\n", m);
		goto reget;
	}
	return 0;
}
