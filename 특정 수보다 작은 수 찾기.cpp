#include <stdio.h>

int main(){
	int n,x;
	scanf("%d %d\n",&n,&x);
	int nums[n];
	for(int i=0;i<n;i++){
		scanf("%d",(nums+i));
	}
	
	for(int k=0;k<n;k++){
		if(x>nums[k])
			printf("%d ",nums[k]);
	}
	return 0;
}
