// 기억력 테스트 1
#include <stdio.h>

int main()
{
    int num[10], k;
    for (int i=0; i<10; i++)
        scanf("%d", &num[i]);
    scanf("%d", &k);
    printf("%d", num[k-1]);
    return 0;
}
