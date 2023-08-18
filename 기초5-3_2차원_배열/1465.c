// 2차원 배열 순서대로 채우기 1-6
#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int arr[n + 1][m + 1], num = n * m;

    for (i=1; i<=n; i++){
        for (j=m; j>=1; j--)
            arr[i][j] = num--;
    }

    for (i=1; i<=n; i++){
        for (j=1; j<=m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
