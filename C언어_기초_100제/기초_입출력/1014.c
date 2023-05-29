// 문자 2개 입력받아 순서 바꿔 출력하기
#include <stdio.h>

int main()
{
	char x, y;
	scanf("%c %c", &x, &y);  // 공백까지 문자로 인식
	printf("%c %c", y, x);   // 출력되는 순서 작성
	return 0;
}
