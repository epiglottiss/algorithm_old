#include <stdio.h>
#include <stdlib.h>

int main(){
	int c;
	int i=1;
	int n;
	int *arr;
	int sum;
	double average;
	int overscore;
	scanf("%d", &c);
	
	while (i<=c){
		n=0;
		sum=0;
		average = 0;
		overscore = 0;
		scanf("%d",&n);
		arr = (int *)malloc( sizeof(int) * n );
		for(int k=0;k<n;k++){
			scanf("%d",&arr[k]);
			sum += arr[k];
		}
		average = sum/  n;
		
		for(int k=0;k<n;k++){
			if(arr[k]>average)
				overscore++;
		}
		
		printf("%.3lf%%\n",(double)overscore/n *100);
		free(arr);
		i++;
	}
	return 0;
}
