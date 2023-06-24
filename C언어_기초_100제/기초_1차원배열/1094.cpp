// 이상한 출석 번호 부르기2
#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    
    int s[n] = {};
    for (i=1; i<=n; i++) scanf("%d", &s[i]);
    for (i=n; i>=1; i--) printf("%d ", s[i]);
    return 0;
}
