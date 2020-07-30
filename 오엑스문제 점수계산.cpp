#include<stdio.h>
#include<string.h>
//#include<stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	char arr[90];
	int score;
	int sum;
	
	for(int i=1;i<=n;i++){
		scanf("%s",arr);
//		printf("strlen is %d\n",strlen(arr));
//		printf("arr[?] is %c\n",arr[0]);
		score = 0;
		sum = 0;
		for(int k=0;k<strlen(arr);k++){
			char arrnum = arr[k];
		//	printf("arrnum is %c\n",arrnum);
			if(arrnum == 'O'){
			
				score++;
				sum += score;}
			else
				{
				score = 0;}
		}
			printf("%d\n",sum);
		
		//if(i = n) break;
		//printf("\n");
	}
	return 0;
}
