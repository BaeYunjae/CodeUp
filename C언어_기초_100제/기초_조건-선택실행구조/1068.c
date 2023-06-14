// 정수 1개 입력받아 평가 출력하기
#include <stdio.h>

int main()
{
	int score;
	scanf("%d", &score);
	if (score >= 90) printf("A");
	else if (score >= 70) printf("B");
	else if (score >= 40) printf("C");
	else printf("D");
	 
	return 0;
}
