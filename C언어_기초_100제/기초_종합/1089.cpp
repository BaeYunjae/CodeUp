// 수 나열하기1
// 등차수열: n번쨰 수 = 1번째 수 + (n번째 - 1) * 등차
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int a, d, n;
    scanf("%d %d %d", &a, &d, &n);
    printf("%d", a + (n - 1) * d);
    return 0;
}

-----------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    int i, j, a, d, n;
    scanf("%d %d %d", &a, &d, &n);
    for (i=a, j=1; ;j++, i+=d)
        if (j == n) break;
    printf("%d", i);
    return 0;
}
