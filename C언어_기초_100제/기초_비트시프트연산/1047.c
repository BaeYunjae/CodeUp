// 정수 1개 입력받아 2배 곱해 출력하기
// << : 오른쪽에 0이 주어진 개수만큼 추가
// >> : 왼쪽에 0(0 또는 양의 정수인 경우)이나 1(음의 정수인 경우)이 개수만큼 추가
// a << 1: 2배한 값
// a >> 1: 1/2배한 값
// a << 2: 4배한 값
// a >> 2: 1/4배한 값
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", a << 1);
	return 0;
}
