// 아르바이트 가는 날
#include <iostream>

int main()
{
    int day;
    scanf("%d", &day);
    if (day == 1 || day == 3 || day == 5 || day == 7)   // 또는 if (day % 2 == 1)
        printf("oh my god");
    else printf("enjoy");
    return 0;
}
