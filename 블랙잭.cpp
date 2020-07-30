#include<stdio.h>

int main()
{
	int card_num, goal;
	scanf("%d %d",&card_num,&goal);
	
	int card_list[card_num], first, second ,third, sum, psum=3,j=0,k,l;
	for(int i=0;i<card_num;i++)
	{
		scanf("%d",&card_list[i]);
	}
	
	for( j;j<card_num-2;j++){
		first = card_list[j];
		k=j+1;
		for( k;k<card_num-1;k++){
			second = card_list[k];
			l=k+1;
			for( l;l<card_num;l++){
				third = card_list[l];
				sum = first+ second+third;
				if(psum<=sum && sum<= goal)
					psum = sum;
				}
			}
		}
	
	printf("%d",psum);
	return 0;	
}
