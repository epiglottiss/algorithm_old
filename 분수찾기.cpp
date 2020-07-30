#include<stdio.h>
int main(){
	int n,i;
//for(int k=0;;k++){
	i=0;
	scanf("%d",&n);

	while(1){
		i++;
		if((n>i*(i-1)/2) && (n<=i*(i+1)/2))
			break;
		
	}
	if(i & 1)
		printf("%d/%d",i+1-n+i*(i-1)/2,n-i*(i-1)/2);
	else
		printf("%d/%d",n-i*(i-1)/2,i+1-n+i*(i-1)/2);		

	return 0;
}
