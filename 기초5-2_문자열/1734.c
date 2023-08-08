// welcome!
// 첫번째 풀이
#include <stdio.h>

int main()
{
    char id[10];
    scanf("%s", id);
    printf("welcome! ");
    for (int i=0; id[i] != '\0'; i++)
        printf("%c", id[i]);
    return 0;
}

-------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    char id[10];
    scanf("%s", id);
    printf("welcome! %s", id);
    return 0;
}
