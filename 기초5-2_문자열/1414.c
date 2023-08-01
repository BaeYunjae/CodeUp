// C언어를 찾아라
#include <stdio.h>

int main()
{
    char word[100];
    int i, one = 0, two = 0;
    scanf("%s", word);
    for (i=0; word[i] != '\0'; i++){
        if (word[i] == 'c' || word[i] == 'C'){
            one++;
            if (word[i + 1] == 'c' || word[i + 1] == 'C') 
                two++;
        }
    }
    printf("%d\n%d", one, two);
    return 0;
}
