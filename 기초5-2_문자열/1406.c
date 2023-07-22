// love
// 첫번째 풀이
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    scanf("%s", str);
    if (strcmp(str, "love") == 0)
        printf("I love you.");
    return 0;
}

---------------------------------------------------------------------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    char str[10];
    scanf("%s", str);
    if (str[0] == 'l' && str[1] == 'o' && str[2] == 'v' && str[3] == 'e' && str[4] == '\0')
        printf("I love you.");
    return 0;
}
