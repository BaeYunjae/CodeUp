// 당신의 사주를 봐 드립니다 2
#include <iostream>

int main()
{
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    if (((y + m + d) / 100) % 2 == 0)
        printf("대박");
    else printf("그럭저럭");
    return 0;
}
