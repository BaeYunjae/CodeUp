// 언제까지 더해야 할까?
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int i = 0, n, sum = 0;
    scanf("%d", &n);
    while (1)
    {
        i++;
        sum += i;
        if (sum >= n) break;
    }
    printf("%d", i);
    return 0;
}

--------------------------------
  
// 두번째 풀이
#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 1; ;i++)
    {
        sum += i;
        if (sum >= n) break;
    }
    printf("%d", i);
    return 0;
}
