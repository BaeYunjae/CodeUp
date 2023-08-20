// 2차원 배열 순서대로 채우기 1-7
#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int arr[n][m], num = n * m;
    for (i=0; i<m; i++){
        for (j=0; j<n; j++)
            arr[j][i] = num--;
    }

    for (i=0; i<n; i++){
        for (j=0; j<m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;    
}
