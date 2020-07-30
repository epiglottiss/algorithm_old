#include <stdio.h>

int main(){
	int n;
	int n10, n1;
	int new_num=100;
	int count=0;
	scanf("%d",&n);
	int temp = n ;
	
	while (new_num != n){
		n10=temp/10;
		n1=temp%10;
		new_num=(n1*10)+(n10+n1)%10;
		temp=new_num;
		count++;
	}
/*	if(new_num=0)
		printf("1");
	else*/
	printf("%d",count); 
	return 0;
} 
