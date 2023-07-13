// 당신의 학번은? 1
#include <stdio.h>

int main()
{
    int grade, class, num;
    scanf("%d %d %d", &grade, &class, &num);
    if (num < 10)
        printf("%d%d0%d", grade, class, num);
    else printf("%d%d%d", grade, class, num);
    return 0;
}
