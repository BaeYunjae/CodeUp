// 알파벳 개수 출력하기
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int i, j;
    char s[91];
    gets(s);
    
    // 소문자 ASCII a:97 ~ z:122
    for (i=97; i<=122; i++){            // for (i='a'; i<='z'; i++)
        int cnt = 0;
        for (j=0; s[j] != '\0'; j++){
            if (s[j] == i) cnt++;
        }
        printf("%c:%d\n", i, cnt);
    }
    return 0;
}

--------------------------------------------------------------------
// 두번째 풀이
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, chk[255] = {0};
    char s[91];
    gets(s);
    
    for (i=0; i < strlen(s); i++)
        chk[s[i]]++;

    for (i='a'; i<='z'; i++)
        printf("%c:%d\n", i, chk[i]);
    
    return 0;
}
