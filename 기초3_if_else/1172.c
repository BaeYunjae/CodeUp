// 세 수 정렬하기
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= c && b <= c)
    {
        if (a <= b) printf("%d %d %d", a, b, c);
        else printf("%d %d %d", b, a, c);
    }
    else if (b <= a && c <= a)
    {
        if (b <= c) printf("%d %d %d", b, c, a);
        else printf("%d %d %d", c, b, a);
    }
    else
    {
        if (a <= c) printf("%d %d %d", a, c, b);
        else printf("%d %d %d", c, a, b);
    }
    return 0;
}
