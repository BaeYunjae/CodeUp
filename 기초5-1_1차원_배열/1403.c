// 배열 두번 출력하기
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int k, i, j;
    scanf("%d", &k);

    int num[k];
    for (i=0; i<k; i++)
        scanf("%d", &num[i]);
    for (j=0; j<2; j++){
        for (i=0; i<k; i++)
            printf("%d\n", num[i]);
    }

    return 0;
}

-------------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    int k, i, j;
    scanf("%d", &k);

    int num[k];
    for (i=0; i<k; i++)
        scanf("%d", &num[i]);

    for (i=0; i<k; i++)
        printf("%d\n", num[i]);
    for (i=0; i<k; i++)
        printf("%d\n", num[i]);

    return 0;
}
