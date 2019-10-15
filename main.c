#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n)
{
	int i;
	int res=1;
	for(i=1;i<=n;i++)
	{
		res=i*res;
	}
		
	return res;
}

int calCombination(int n, int r)
{
	int bunja,bunmo;
	bunja=factorial(n);
	bunmo=factorial(n-r)*factorial(r);
	
	return (bunja/bunmo);
}

int main(void)
{
	int n, r;
	int res;
	
	printf("input n and r");
	scanf("%d %d",&n,&r);
	
	res=calCombination(n, r);/*combination을 계산해주는 함수를 호출*/
	printf("Combination result is %d\n", res);
	
	return 0;
}
