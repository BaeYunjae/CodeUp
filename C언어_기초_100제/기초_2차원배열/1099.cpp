// 성실한 개미
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int h[11][11] = {};
    int i, j;
    for (i=1; i<=10; i++)
        for (j=1; j<=10; j++)
            scanf("%d", &h[i][j]);

    int x = 2, y = 2;

    while (1)
    {
        if (h[x][y] == 0)
        {
            h[x][y] = 9;
            y++;
        }
        if (h[x][y] == 1)
        {
            y--;
            x++;
        }
        if (h[x][y] == 2)
        {
            h[x][y] = 9;
            break;
        }
        else if (h[x][y+1] == 1 && h[x+1][y] == 1)
        {
            if (h[x][y] == 0) 
            {
                h[x][y] = 9;
            }
        break;
        }
    }


    for (i=1; i<=10; i++)
    {
        for (j=1; j<=10; j++)
        {    
            printf("%d ", h[i][j]);
        }
        printf("\n");
    }
    return 0;
}

-------------------------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    int h[11][11] = {};
    int i, j;
    for (i=1; i<=10; i++)
        for (j=1; j<=10; j++)
            scanf("%d", &h[i][j]);

    int x = 2, y = 2;

    while (h[x][y] != 2)
    {
        h[x][y] = 9;
        if (h[x][y+1] != 1) y += 1;
        else if (h[x+1][y] != 1) x += 1;
        else break;
    }
    h[x][y] = 9;
 
    for (i=1; i<=10; i++)
    {
        for (j=1; j<=10; j++)
        {    
            printf("%d ", h[i][j]);
        }
        printf("\n");
    }
    return 0;
}
