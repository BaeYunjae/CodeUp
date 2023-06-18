// 정수 1개 입력받아 그 수까지 출력하기
// for ((반복 전 실행/준비 내용); (조건 검사 내용); (한번 실행한 후 처리할 작업)) {...}
#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    for (i=0; i<=n; i++) printf("%d\n", i);
    return 0;
}
