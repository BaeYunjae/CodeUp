// 암호 처리
#include <stdio.h>

int main()
{
    char pw[20];
    int i;
    scanf("%s", pw);
    for (i=0; i<20; i++){
        if (pw[i] == '\0') break;
        printf("%c", pw[i] + 2);
    }
    printf("\n");
    for (i=0; i<20; i++){
        if (pw[i] == '\0') break;
            printf("%c", ((pw[i]*7) % 80) + 48);
    }
    return 0;    
}
