// 공백이 있는 문자열 입출력
#include <stdio.h>

int main()
{
    char str[30];
    scanf("%[^\n]s", &str);
    printf("%s", str);
    return 0;
}
