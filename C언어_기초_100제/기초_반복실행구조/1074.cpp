// 정수 1개 입력받아 카운트다운 출력하기1
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n != 0)
    {
        printf("%d\n", n);
        n = n - 1;
    }
    return 0;
}
