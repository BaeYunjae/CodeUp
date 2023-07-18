// 함수로 **문자 출력하기
#include <stdio.h>

void f()
{
    for (int i=1; i<=2; i++) printf("%c", '*');
    return; // 생략 가능
}  // 자동 복귀

int main()
{
    f();
    return 0;
}
