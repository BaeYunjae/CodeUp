// 수 나열하기 2
#include <stdio.h>

int main()
{
    long int i, j, a, r, n;
    scanf("%ld %ld %ld", &a, &r, &n);
    for (i=a, j=1; ;j++, i*=r)
        if (j == n) break;
    printf("%ld", i);
    return 0;
}
