// 10진 정수 입력받아 16진수로 출력하기2
// 10진법: 한 자리에 10개 (0 1 2 3 4 5 6 7 8 9) 문자 사용
// 16진법: 한 자리에 16개 (0 1 2 3 4 5 6 7 8 9 A B C D E F) 문자 사용
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);  
	printf("%X", n);  // 16진수 대문자 출력
	return 0;
}
