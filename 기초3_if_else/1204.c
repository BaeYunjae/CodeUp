// 영어 서수로 표현하기
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 11 || n == 12 || n == 13) printf("%dth", n);
    else if (n % 10 == 1) printf("%dst", n);
    else if (n % 10 == 2) printf("%dnd", n);
    else if (n % 10 == 3) printf("%drd", n);
    else printf("%dth", n);
    return 0;
}
