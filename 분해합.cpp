#include<stdio.h>

int main()
{
	int n,dec,i=1;
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		dec = i + i%10 + (i/10)%10 + (i/100)%10 + (i/1000)%10 + (i/10000)%10 + (i/100000)%10 + (i/1000000)%10;
		if (dec == n)
			break;
	}
	if (i == n+1)
		printf("0");
	else
		printf("%d",i);
	return 0;
}
