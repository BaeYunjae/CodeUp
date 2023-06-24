// 이상한 출석 번호 부르기1
#include <stdio.h>

int main()
{
    int n, i, t;
    int s[24] = {};  // 0번부터 23번까지 0으로 초기화
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &t);
        s[t] += 1;
    }
    for (i=1; i<=23; i++) printf("%d ", s[i]);
    return 0;
}   
