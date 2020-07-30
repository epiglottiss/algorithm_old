#include<stdio.h>

int main(){
	int num[10]={0,0,0,0,0,0,0,0,0,0};
	int setnum=1;
	int n,/*firstnum*/max=1;
	scanf("%d",&n);
	
/*	if(n==0) 
		printf("1");
		goto path;
		
/*	for(int i=7;;i--){
		if(n%10^i != 0) {
			firstnum = i;
			break;	
		}
	}
*/	
	for(int k=0;;k++){
		if(n==0) break;
		if( n%10==9)
			num[6]++;
		else 
			num[n%10]++;
		n /= 10;
	}
	
	num[6]++;
	num[6] /= 2;
	
	for(int j=0;j<9;j++){
		if(max <num[j])
			max = num[j];
	}
	
	printf("%d",max);

	return 0;
}
