// 이상한 출석 번호 부르기3
#include <stdio.h>

int main()
{
    int n, i, min = 24;
    scanf("%d", &n);

    int s[n] = {};
    for (i=1; i<=n; i++) 
    {
        scanf("%d", &s[i]);
        if (min > s[i])
            min = s[i];
    }
    printf("%d", min);
    return 0;
}
