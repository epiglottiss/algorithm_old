#include<stdio.h>
#include<stdlib.h>
int compare(const void *x,const void *y){
	return (*(int *)x < *(int *)y)?1:(*(int *)x>*(int *)y)?-1:0;
}
int main(){
	int arr[9], sum = 0,seven,x,y;
	for( int a = 0;a<9;a++){
		scanf("%d",arr[a]);
		sum += arr[a];
	}
	qsort((void *)arr,9,sizeof(int),compare);
	for(int i=0;i<8;i++){
		for( int j = i+1;j<=8;j++){
			seven = sum - arr[i] - arr[j];
			if(seven == 100){
				x=i;
				y=j;
				goto pass;
			}	
		}
	}
	pass: for(int p=0;p<9;p++){
		if(p !=x && p !=y)
			printf("%d",arr[p]);
			
		if(p <9)
			printf("\n");
		
	}
	return 0;
}
