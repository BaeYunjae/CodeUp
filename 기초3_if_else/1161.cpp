// 홀수와 짝수 그리고 더하기
// 첫번째 풀이
#include <iostream>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % 2 == 0)
    {
        if (b % 2 == 0) printf("짝수+짝수=짝수");
        else printf("짝수+홀수=홀수");
    }
    else
    {
        if (b % 2 == 0) printf("홀수+짝수=홀수");
        else printf("홀수+홀수=짝수");
    }
    return 0;
}

--------------------------------------------------
// 두번째 풀이
...
#include <iostream>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a % 2 == 1) printf("홀수");
    else printf("짝수");
    
    printf("+");

    if (b % 2 == 1) printf("홀수");
    else printf("짝수");

    printf("=");

    if ((a + b) % 2 == 1) printf("홀수");
    else printf("짝수");

    return 0;
} 
