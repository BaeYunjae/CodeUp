// 2차원 배열 지그재그 채우기 2-1
#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int arr[n][n], num = 1;

    for (i=0; i<n; i++){
        if (i % 2 == 0){
            for (j=0; j<n; j++)
                arr[i][j] = num++;
        }
        else{
            for (j=n-1; j>-1; j--)
                arr[i][j] = num++;
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
