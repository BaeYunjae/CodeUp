// 당신의 학번은? 2
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int g, c, n;
    scanf("%d %d %d", &g, &c, &n);
    if (c < 10)
    {
        if (n < 10) printf("%d0%d00%d", g, c, n);
        else if (n < 100) printf("%d0%d0%d", g, c, n);
        else printf("%d0%d%d", g, c, n);
    }
    else
    {
        if (n < 10) printf("%d%d00%d", g, c, n);
        else if (n < 100) printf("%d%d0%d", g, c, n);
        else printf("%d%d%d", g, c, n);
    }
    return 0;
}

-------------------------------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    int g, c, n;
    scanf("%d %d %d", &g, &c, &n);
    
    if (c < 10) printf("%d0%d", g, c);
    else printf("%d%d", g, c);
    
    if (n < 10) printf("00%d", n);
    else if (n < 100) printf("0%d", n);
    else printf("%d", n);
    
    return 0;
}
