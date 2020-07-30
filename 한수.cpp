#include<stdio.h>

int hansu(int num){
	int count=0;
	int a, b, c, temp;
	for(int i=111;i<=num;i++){
		a = i%10;
		temp = i/10;
		b = temp%10;
		c = temp/10;
		
		if( 2*b == (a+c) ){
			count++;}
		}
	return (count);
}

int main(){
	int n;
	scanf("%d",&n);
	
	if(n<=99)
		printf("%d",n);
	else if(n>99 && n<111)
		printf("99");
	else if (n>=111 && n<1000)
		printf("%d",hansu(n)+99);
	else
		printf("%d",hansu(999)+99);
	return 0;
}
