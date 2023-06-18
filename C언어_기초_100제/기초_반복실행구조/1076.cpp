// 문자 1개 입력받아 알파벳 출력하기
// do {...} while(...); : 무조건 한 번은 실행, 마지막 반드시 세미콜론
#include <stdio.h>

int main()
{
    char x, alpha='a';
    scanf("%c", &x);
    do
    {
        printf("%c ", alpha);
        alpha += 1;
    } while (alpha < x + 1);
    return 0;
}
