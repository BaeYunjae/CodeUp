// 16진수 구구단? 
// 첫번쨰 풀이
#include <stdio.h>

int main()
{
    int x, i = 1;
    scanf("%X", &x);
    while (1)
    {
        printf("%X*%X=%X\n", x, i, x*i);
        i++;
        if (i > 15) break;

    }
    return 0;
}

-----------------------------------------

// 두번째 풀이
#include <stdio.h>

int main()
{
    int x, i;
    scanf("%X", &x);
    for (i=1; i<=15; i++)
    {
        printf("%X*%X=%X\n", x, i, x*i);
    }
    return 0;
}
