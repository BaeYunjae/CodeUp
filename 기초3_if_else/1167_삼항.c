// 두 번째 수
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);    
    if (a <= b && a <= c) printf("%d", (b <= c) ? b : c);
    else if (b <= a && b <= c) printf("%d", (a <= c) ? a : c);
    else printf("%d", (a <= b) ? a : b);
    return 0;
}
