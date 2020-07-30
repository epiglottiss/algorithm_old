#include<stdio.h>

int main()
{
	int n,dungchi_cnt;
	scanf("%d",&n);
	int a[n][2], rank[n]={0};
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
		scanf("%d",&a[i][1]);
	}
	
	for(int j=0;j<n;j++){
		dungchi_cnt=0;
		for(int k=0;k<n;k++){
			if(a[j][0]<a[k][0] && a[j][1]<a[k][1])
				dungchi_cnt++;
		}
		rank[j] = 1+dungchi_cnt;		
	}
	for(int l=0;l<n;l++)
		printf("%d ",rank[l]);
	return 0;
}
