#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,k;
	char *nums;
	int sum=0;
	
	scanf("%d",&n);
	nums=(char *)malloc((n+1)*sizeof(nums));
	scanf("%s",nums);
		
	for(i=0;i<n;i++){
		k=*(nums+i)-'0';
		sum +=k;
	}
	printf("%d",sum);
	free(nums);
	return 0;
	
}
