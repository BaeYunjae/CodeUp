// 2차원 배열 순서대로 채우기 1-2
#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int arr[n][n], num;
    for (i=0; i<n; i++){
        num = n * (i + 1);
        for (j=0; j<n; j++)
            arr[i][j] = num--;
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    
    return 0;
}
