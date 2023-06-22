// 여기까지! 이제 그만~
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for (i=1; ; i++)
    {
        sum += i;
        if (sum >= n) break;
    }
    printf("%d", sum);
    return 0;
}
