// 2진수 변환
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int arr[100], c = 0, i, n;
    scanf("%d", &n);

    if (n == 0){
        printf("0");
        return 0;
    }

    while (n > 0){
        arr[c] = n % 2;
        n = n / 2;
        c++;
    }


    for (i=c-1; i>=0; i--)
        printf("%d", arr[i]);

    return 0;
}

----------------------------------
// 두번째 풀이
#include <stdio.h>

int main()
{
    int arr[100], c = 0, i, n;
    scanf("%d", &n);

    if (n == 0){
        printf("0");
        return 0;
    }

    while (n > 0){
        arr[c] = n % 2;
        n = n / 2;
        c++;
    }


    for (i=c-1; i>=0; i--)
        printf("%d", arr[i]);

    return 0;
}
