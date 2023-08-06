// love 2
#include <stdio.h>

int main()
{
    int ans = 0;
    char eng[100];
    gets(eng);
    for (int i=0; eng[i] != '\0'; i++){
        if (eng[i] == 'l' && eng[i+1] == 'o' && eng[i+2] == 'v' && eng[i+3] == 'e')
            ans++;
    }

    printf("%d", ans);
    return 0;
}
