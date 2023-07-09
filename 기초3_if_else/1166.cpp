// 윤년 판별
#include <iostream>
using namespace std;

int main()
{
    int year;
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << "Leap";
    else cout << "Normal";
    return 0;
}
