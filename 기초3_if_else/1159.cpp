// 특별한 공 던지기 3
#include <iostream>

int main()
{
    int ball;
    scanf("%d", &ball);
    if ((ball >= 50 and ball <= 70) || (ball % 6 == 0))
        printf("win");
    else printf("lose");
    return 0;
}
