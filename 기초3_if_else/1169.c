// 나이 계산 2
#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);
    if (2012 - age + 1 < 2000)
        printf("%d %d", (2012 - age + 1) - 1900, 1);
    else
        printf("%d %d", (2012 - age + 1) - 2000, 3);
    return 0;
}
