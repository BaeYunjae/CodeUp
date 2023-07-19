// 함수로 정수(long long int) -2147483649 리턴하기 
#include <stdio.h>

long long int f()
{
    return -2147483649LL;  // 정수 값 마지막에 LL을 붙이면 long long int 형을 나타냄
}

int main()
{
    printf("%lld", f());
    return 0;
}
