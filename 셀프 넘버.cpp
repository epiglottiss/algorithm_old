#include<stdio.h>

int self(int num){
	int a = num%10;
	int temp=num/10;
	int b = temp%10;
	temp=num/100;
	int c = temp%10;
	temp=num/1000;
	int d = temp;
	int new_num = num + a + b + c + d;
	return (new_num);
}

int main(){
	int arr[10000]={};
	int i = 1;
	while(self(i)<=10000){
		arr[self(i)-1] = 1;
		i++;
	}
//	printf("arr is %d",arr[30]);
	
	for(i=0;i<10000;i++){
		if(i == 9992) {
			printf("%d",i+1);
		break;}
		if(arr[i] == 0)
			printf("%d\n",i+1);
	}
	return 0;
}
