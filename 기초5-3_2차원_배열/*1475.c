// 2차원 배열 지그재그 채우기 2-8
#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int arr[n + 1][m + 1];
    int x = 1, y = 1;
    for (i=m-1; i>=0; i--){
        if (y % 2 == 1){
            for (j=0; j<n; j++){
                arr[j][i] = x;
                x++;
            }
        }
        else{
            for (j=n-1; j>=0; j--){
                arr[j][i] = x;
                x++;
            }
        }
        y++;
    }
    
    
    for (i=0; i<n; i++){
        for (j=0; j<m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
