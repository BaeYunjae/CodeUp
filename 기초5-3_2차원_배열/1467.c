// 2차원 배열 순서대로 채우기 1-8
#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int arr[n][m], num = n * m;

    for (j=0; j<m; j++){
        for (i=n-1; i>=0; i--)
            arr[i][j] = num--;
    }

    for (i=0; i<n; i++){
        for (j=0; j<m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
