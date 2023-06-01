// 실수 1개 입력받아 그대로 출력하기2
#include <stdio.h>

int main()
{
	// float: +- 3.4*10-38 ~ +- 3.4*1038 범위의 실수
	// double: +- 1.7*10-308 ~ +- 1.7*10308 범위의 실수
	double d; 
	scanf("%lf", &d);     // double(long float) 형식으로 입력
	printf("%.11lf", d);  // 소수점 이하 11자리까지 출력
	return 0;
}
