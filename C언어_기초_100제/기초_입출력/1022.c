// 문장 1개 입력받아 그대로 출력하기
#include <stdio.h>

int main()
{
	char data[2001];
	fgets(data, 2000, stdin);  // fgets(): 공백문자가 포함되어 있는 문장을 입력받아 저장 가능
	// scanf("%s", ...) 사용 시 첫 번째 단어까지만 저장
	printf("%s", data);
	return 0;
}
