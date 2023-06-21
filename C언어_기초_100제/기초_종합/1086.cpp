// 그림 파일 저장용량 계산하기
#include <stdio.h>

int main()
{
    int w, h, b;
    double result = 0;
    scanf("%d %d %d", &w, &h, &b);
    result = w * h * b;
    printf("%.2f MB", result/8/1024/1024);
    return 0;
}
