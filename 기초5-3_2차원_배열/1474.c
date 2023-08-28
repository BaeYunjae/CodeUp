// 2차원 배열 지그재그 채우기 2-7
#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int arr[n + 1][m + 1], num = n * m;
    for (j=0; j<m; j++){
        if (m % 2 == 1){
            if (j % 2 == 0){
                for (i=0; i<n; i++)
                    arr[i][j] = num--;
            }
            else{
                for (i=n-1; i>=0; i--)
                    arr[i][j] = num--;
            }
        }
        else{
            if (j % 2 == 0){
                for (i=n-1; i>=0; i--)
                    arr[i][j] = num--;
            }
            else{
                for (i=0; i<n; i++)
                    arr[i][j] = num--;
            }
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
