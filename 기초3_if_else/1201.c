// 정수 판별
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0) printf("%d", 0);
    else printf((n > 0) ? "양수" : "음수");
    return 0;
}
