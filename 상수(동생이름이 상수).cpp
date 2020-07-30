#include <stdio.h>

int change(int num){
	int a=num%10;
	num /= 10;
	int b= num%10;
	num /= 10;
	int c = num;
	
	return( 100*a +10*b +c);
}

int main(){
	int num1;
	int num2;
	scanf("%d %d",&num1,&num2);
	
	int a = change(num1);
	int b = change(num2);
	
	if(a<b)
		printf("%d",b);
	else
		printf("%d",a);
		
	return 0;
}
