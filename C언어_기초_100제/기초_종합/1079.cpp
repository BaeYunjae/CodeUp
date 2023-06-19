// 원하는 문자가 입력될 때까지 반복 출력하기
#include <stdio.h>

int main()
{
    char x;
    while (x != 'q')
    {
        scanf("%c", &x);
        printf("%c", x);
    }
    return 0;
}
