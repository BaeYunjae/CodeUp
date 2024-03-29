// 비트단위로 AND 하여 출력하기
// 비트단위 and 연산: 두 비트열이 주어졌을 때,둘 다 1인 부분의 자리만 1로 만들어주는 것
// 3       : 00000000 00000000 00000000 00000011
// 5       : 00000000 00000000 00000000 00000101
// 3 & 5   : 00000000 00000000 00000000 00000001

// 192.168.0.31   : 11000000.10101000.00000000.00011111
// 255.255.255.0  : 11111111.11111111.11111111.00000000
// 두 개의 ip 주소를 & 연산하면
// 192.168.0.0    : 110000000.10101000.0000000.00000000
// 실제로 이 계산은 네트워크에 연결되어 있는 두 개의 컴퓨터가 데이터를 주고받기 위해 
// 같은 네트워크에 있는지 아닌지를 판단하는데 사용

// 이러한 비트단위 연산은 빠른 계산이 필요한 그래픽처리에서
// 마스크연산(특정 부분을 가리고 출력하는)을 수행하는 데에도 효과적으로 사용

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a & b);
	return 0;
}
