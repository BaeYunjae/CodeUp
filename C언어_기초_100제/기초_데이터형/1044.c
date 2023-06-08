// 정수 1개 입력받아 1 더해 출력하기
// 증감연산자를 앞(++a, --a): 변수 사용 전 증감 먼저
// 증감연산자를 뒤(a++, a--): 변수 사용 후 증감 수행
#include <stdio.h>

int main()
{
	long long int a;
	scanf("%lld", &a);
	printf("%lld", ++a);
	return 0;
}
