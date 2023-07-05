// 당신의 사주를 봐 드립니다 1
// 첫번째 풀이
#include <iostream>

using namespace std;

int main()
{
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    if ((year - month + day) % 10 == 0) cout << "대박";
    else cout << "그럭저럭";
    return 0;
}

---------------------------------------------------------
// 두번째 풀이
#include <iostream>

int main()
{
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    if ((year - month + day) % 10 == 0) printf("대박");
    else printf("그럭저럭");
    return 0;
}
