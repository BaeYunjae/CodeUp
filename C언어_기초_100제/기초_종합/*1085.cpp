// 소리 파일 저장용량 계산하기
#include <stdio.h>

int main()
{
    long long int h, b, c, s;
    double result;
    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
    result = h * b * c * s;
    printf("%.1lf MB", result/8/1024/1024);
    return 0;
}
