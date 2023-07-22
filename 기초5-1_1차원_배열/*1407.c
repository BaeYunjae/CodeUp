// 문자열 출력하기 1
#include <stdio.h>

int main()
{
    int i;
    char str[100];
    gets(str);      // 공백 포함 문자열 받기
    for (i=0; str[i] != '\0'; i++){
        if (str[i] != ' ')
            printf("%c", str[i]);
    }
    return 0;
}
