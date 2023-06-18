// 짝수 합 구하기
// for(...; ...; ...) {...} 
#include <stdio.h>

int main()
{
    int sum = 0;
    int i, n;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        if (i % 2 == 0) sum += i;
    }
    printf("%d", sum);
    return 0;
}

// while( ) {...}
...
int main()
{
    int sum = 0;
    int i = 1, n;       // i 정의
    scanf("%d", &n);
    while (i <= n)
    {   
        if (i % 2 == 0) sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}

// do {...} while( );
...
int main()
{
    int sum = 0;
    int i = 1, n;
    scanf("%d", &n);
    do
    {
        if (i % 2 == 0) sum += i;
        i++;
    } while(i <= n);
    printf("%d", sum);
    return 0;
}
