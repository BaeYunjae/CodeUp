// 정수 1개 입력받아 카운트다운 출력하기2
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n != 0)
    {
        n--;  // n = n - 1
        printf("%d\n", n);
    }
}
