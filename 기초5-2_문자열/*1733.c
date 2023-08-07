// I.O.I
// 풀이
#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);
    for (int i=0; str[i] != '\0'; i++)
    {
        if (str[i] == 'I' && str[i+1] == 'O' && str[i+2] == 'I'){
            if (str[i+3] != '\0') {
                printf("I don't care.");
                break;
            }
            printf("IOI is the International Olympiad in Informatics.");
            break;
        }
        else {
            printf("I don't care.");
            break;
        }
    }
}

---------------------------------------------------------------------------
// 정답
#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);
    if (str[0] == 'I' && str[1] == 'O' && str[2] == 'I' && str[3] == '\0')
        printf("IOI is the International Olympiad in Informatics.");
    else 
        printf("I don't care.");
}
