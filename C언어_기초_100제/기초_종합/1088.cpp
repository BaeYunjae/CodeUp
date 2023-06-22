// 
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        if (i % 3 == 0) continue;
        printf("%d ", i);
    }
    return 0;
}

---------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {   
        if (i % 3 != 0) printf("%d ", i);
        i++;
    }
    return 0;
}
