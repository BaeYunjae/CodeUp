// 터널 통과하기 1
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 170 || b <= 170 || c <= 170)
        cout << "CRASH";
    else cout << "PASS";
    return 0;
}
