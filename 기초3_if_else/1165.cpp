// 축구의 신 1
// 첫번째 풀이
#include <iostream>

using namespace std;

int main()
{
    int now, score;
    int play = 0;
    scanf("%d %d", &now, &score);
    for (now ; now < 90 ; now++, play++)
    {
        if (play == 5)
        {
            score += 1;
            play = 0;
        }
    }
    cout << score + 1;
    return 0;
}

-------------------------------
//두번째 풀이
#include <iostream>

using namespace std;

int main()
{
    int now, score, goal, rest;
    scanf("%d %d", &now, &score);
    
    goal = (90 - now) / 5;
    rest = (90 - now) % 5;

    score = score + goal;

    if (rest != 0) score++;

    cout << score;
    return 0;
}
