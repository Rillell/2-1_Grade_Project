#하노이탑c언어
'''
#include <stdio.h>
void hanoi(int, int, int, int);
void main(void)
{
	int cnt;       
     printf("원반의 개수를 입력하세요 : ");           scanf("%d",&cnt);
     hanoi(cnt, 'a', 'b', 'c');
	printf("\n\n");
}

void hanoi(int n, int a, int b, int c)
{
	if(n==1)
		printf("\n%c에서 %d의 원반을 %c로 이동\n", a,n,c);
	else
	{
		hanoi(n-1, a, c, b);
		printf("%c에서 %d의 원반을 %c로 이동", a, n, c);
		hanoi(n-1, b, a, c);
	}
}
'''
