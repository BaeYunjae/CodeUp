// 0 입력될 때까지 무한 출력하기1
// if로 실행할 코드가 2개 이상일 경우 중괄호로 묶어야 모두 실행
#include <stdio.h>

int main()
{
	int n;
	reload:
		scanf("%d", &n);
		if (n != 0)
		{
			printf("%d\n", n);
			goto reload;
		}
		return 0;
}
