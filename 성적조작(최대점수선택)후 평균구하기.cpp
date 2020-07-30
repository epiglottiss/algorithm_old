#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int nums[n];
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i]);
	}
	

	/*for(int i=0;i<n;i++){
		printf("%d ",*(nums+i));
	}*/
	
	
	int max=nums[0];
	for(int i=0;i<n-1;i++){
		if(max<nums[i+1])
			max= nums[i+1];
	}
	//printf("max is %d\n",max);
	
	double sum;
	double d_nums[n];
	for(int k=0;k<n;k++){
		d_nums[k]= (double) nums[k]/max*100;
		
		sum += d_nums[k];
	}
	
	printf("%.2f",sum/n);
	return 0;
}
