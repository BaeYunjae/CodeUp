// 수 나열하기3
#include <stdio.h>

int main()
{
    long long int i, j, a, m, d, n;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    for (i=a, j=1; ;j++, i = i * m + d)
    {
        if (j == n) break;
    }
    printf("%lld", i);
    return 0;
}
