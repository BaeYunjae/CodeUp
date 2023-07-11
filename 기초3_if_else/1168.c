// 나이 계산 1
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int birth, sex;
    int year;
    scanf("%d %d", &birth, &sex);
    if (sex == 1 || sex == 2)
    {
        year = 1900 + birth / 10000;
        printf("%d",  2012 - year + 1);
    }
    else
    {
        year = 2000 + birth / 10000;
        printf("%d",  2012 - year + 1);
    }
    return 0;
}

----------------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    int birth, sex;
    scanf("%d %d", &birth, &sex);

    birth /= 10000;

    if (sex <= 2)
        birth += 1900;
    else
        birth += 2000;

    printf("%d", 2012 - birth + 1);
    return 0;
}
