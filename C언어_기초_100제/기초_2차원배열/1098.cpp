// 설탕과자 뽑기
#include <stdio.h>

int main()
{
    int i, j;
    int h, w, n, l;
    int d, x, y;
    scanf("%d %d", &h, &w);  // 격자판
    scanf("%d", &n);         // 막대 개수

    int a[100][100] = {};

    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        for (j=1; j<=l; j++)
        {
            if (d == 0) 
            {
                a[x][y] = 1;
                y += 1;
            }
            else
            {
                a[x][y] = 1;
                x += 1;
            }
        }
    }

    for (i=1; i<=h; i++)
    {
        for (j=1; j<=w; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}
