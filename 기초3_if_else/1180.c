// 만능 휴지통
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);
    
    a = ((n % 10) * 10 + n / 10) * 2;
    if (a >= 100) a -= 100;

    printf("%d\n", a);
    
    if (a <= 50) printf("GOOD\n");
    else printf("OH MY GOD\n");
    
    return 0;    
}

----------------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);
    
    a = ((n % 10) * 10 + n / 10) * 2;
    a %= 100;

    printf("%d\n", a);
    
    if (a <= 50) printf("GOOD\n");
    else printf("OH MY GOD\n");
    
    return 0;    
}
