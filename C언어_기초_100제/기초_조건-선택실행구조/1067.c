// 정수 1개 입력받아 분석하기
// 첫 번째 풀이
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	if (a < 0)
	{
		printf("minus\n");
		if (a % 2 == 0) printf("even\n");
		else printf("odd\n");
	}
	else
	{
		printf("plus\n");
		if (a % 2 == 0) printf("even\n");
		else printf("odd\n");
	}
}

----------------------------------------
 
// 두번째 풀이
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	if (a < 0) printf("minus\n");
	else printf("plus\n");

	if (a % 2 == 0) printf("even\n");
	else printf("odd\n");

	return 0;
}
