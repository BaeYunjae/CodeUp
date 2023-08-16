// 2차원 배열 순서대로 채우기 1-4
#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int arr[n][n], num = n;
    for (i=0; i<n; i++){
        num = n - i;
        for (j=0; j<n; j++){
            arr[i][j] = num;
            num += n;
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

}
