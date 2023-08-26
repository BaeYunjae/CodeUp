// 2차원 배열 지그재그 채우기 2-5
#include <stdio.h>

int main(){
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int arr[n + 1][m + 1], num = n * m;

    for (i=0; i<n; i++){
        if (n % 2 == 1){
            if (i % 2 == 0){
                for (j=0; j<m; j++)
                    arr[i][j] = num--;
            }
            else{
                for (j=m-1; j>=0; j--)
                    arr[i][j] = num--;
            }
        }

        else{
            if (i % 2 == 1){
                for (j=0; j<m; j++)
                    arr[i][j] = num--;
            }
            else{
                for (j=m-1; j>=0; j--)
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
