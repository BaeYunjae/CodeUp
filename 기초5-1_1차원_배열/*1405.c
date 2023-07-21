// 숫자 로테이션
// 첫번째 풀이
#include <stdio.h>

int main()
{
    int n, k, i, j;
    scanf("%d", &n);
    int num[n];
    for (i=0; i<n; i++)
        scanf("%d", &num[i]);

    int id;
    for (k=0; k<n; k++){
        id = k;
        for (j=0; j<n; j++){
            printf("%d ", num[id]);
            id++;
            if (id == n) id = 0;
        }
        printf("\n");
    }
    return 0;
}

==============================================================================================
// 두번째 풀이
#include <stdio.h>

int main()
{
    int n, k, i, j;
    scanf("%d", &n);
    int num[n];
    for (i=0; i<n; i++)
        scanf("%d", &num[i]);

    for (i=0; i<n; i++){
        for (j=i, k=1; k<=n; j++, k++){  // i는 j가 시작하는 번쨰 수, k는 n번 반복하는 역할
            if (j==n) j = 0;             // j가 끝까지 가면 0으로 다시 돌아옴
            printf("%d ", num[j]);
        }
        printf("\n");
    }
    return 0;
}
