// 함수로 hello 문자열 출력하기
#include <stdio.h>

void f();

void f()
{
    printf("hello\n");
    return;  // 호출했던 위치로 복귀(함수 실행 종료)
}

int main()
{
    f();
    return 0;
}
