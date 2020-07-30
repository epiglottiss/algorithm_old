#include<stdio.h>

int main(){
	int n;
	int i=1;
	scanf("%d",&n);
	
	int sum=1;
	while (1){
		if(sum>=n){
			printf("%d",i);
			break;
		}
		sum += i*6;
		i++;
	}
	return 0;
}
