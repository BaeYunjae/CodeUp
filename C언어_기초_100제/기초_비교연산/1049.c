// 두 정수 입력받아 비교하기1
// 비교/관계연산자: >, <, >=, <=, ==, != (6개)
// a > b : a가 b보다 큰 경우 참(true)을 나타내는 정수값 1,
//         그외의 경우에는 거짓(false)을 나타내는 정수값 0
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a > b);
	return 0;
}
