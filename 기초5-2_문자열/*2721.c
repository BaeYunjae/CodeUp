// 순환 문자열 
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20], s3[20];
    scanf("%s%s%s", s1, s2, s3);
    if (s1[strlen(s1)-1] == s2[0] && s2[strlen(s2)-1] == s3[0] && s3[strlen(s3)-1] == s1[0])
        printf("good");
    else printf("bad");

    return 0;
}
