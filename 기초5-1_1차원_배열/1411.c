// 빠진 카드
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int n, i, total = 0, sum = 0;
    scanf("%d", &n);
    int cards[n];
    for (i=1; i<=n; i++) total += i;
    for (i=0; i<n-1; i++){
        scanf("%d", &cards[i]);
        sum += cards[i];
    }
    printf("%d", total - sum);
    
    return 0;
}

------------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    int n, i, k;
    scanf("%d", &n);

    int cards[n];
    for (i=1; i<=n; i++) cards[i] = 0;
    for (i=0; i<n-1; i++){
        scanf("%d", &k);
        cards[k] = 1;
    }
    for (i=1; i<=n; i++)
        if (cards[i] == 0){
            printf("%d", i);
            return 0;
        }
}
