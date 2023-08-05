// t를 찾아라
#include <stdio.h>

int main()
{
    int i;
    char str[10];
    scanf("%s", str);
    for (i=0; str[i] != '\0'; i++){
        if (str[i] == 't')
            printf("%d ", i + 1);
    }
    return 0;
}
