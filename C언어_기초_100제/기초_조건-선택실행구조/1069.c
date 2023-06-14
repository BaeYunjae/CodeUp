// 평가 입력받아 다르게 출력하기
// break; 를 사용하지 않으면 이후의 명령들도 계속 실행
// 'default:' : 제시된 case 를 제외한 나머지 모든 경우에 실행
// switch( ) 에 주어지는 값은 “정수"값만 가능, 문자도 아스키코드 정수값이기 때문에 가능

// 첫 번째 풀이
#include <stdio.h>

int main()
{
	char score;
	scanf("%c", &score);
	switch (score)
	{
	case 'A':
		printf("best!!!");
		break;
	case 'B':
		printf("good!!");
		break;
	case 'C':
		printf("run!");
		break;
	case 'D':
		printf("slowly~");
		break;
	default:
		printf("what?");
		break;
	}
	return 0;
}

----------------------------------------
 
// 두 번째 풀이
#include <stdio.h>

int main()
{
	char score;
	scanf("%c", &score);
	switch (score)
	{
	case 'A': printf("best!!!"); break;
	case 'B': printf("good!!"); break;
	case 'C': printf("run!"); break;
	case 'D': printf("slowly~"); break;
	default: printf("what?"); break;
	}
	return 0;
}
