// 올바른 괄호 1 (괄호 개수 세기)
// 첫번째 풀이
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    int i, o = 0, c = 0;
    scanf("%s", str);
    for (i=0; i < strlen(str); i++) {
        if (str[i] == '(') o += 1;
        else if (str[i] == ')') c += 1; 
    }
    printf("%d %d", o, c);
    return 0;
}

---------------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    char str[100001];
    int i, o = 0, c = 0;
    scanf("%s", str);
    for (i=0; str[i] != '\0'; i++) {
        if (str[i] == '(') o += 1;
        if (str[i] == ')') c += 1; 
    }
    printf("%d %d", o, c);
    return 0;
}
