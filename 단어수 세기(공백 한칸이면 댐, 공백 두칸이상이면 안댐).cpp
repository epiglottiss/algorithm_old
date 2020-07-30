#include<stdio.h>
#include<string.h>
int main(){
	char arr[1000001];
	int count=0;
	scanf("%[^\n]s",arr);
	//gets(arr);
	
/*	printf("strlen is %d\n",strlen(arr));
	for(int k=0;k<=strlen(arr);k++){
		printf("arr%d is %c\n",k,arr[k]);
	}
	printf("arr9 is %c\n",arr[9]);
*/	
	
	for(int i=0;i<strlen(arr);i++){
		if (arr[i]==' ')
			count++;
			
	}
	
	char last = arr[strlen(arr)-1];
	if((arr[0] != ' ') && (last != ' ')){
		count++;
	}
//		printf("%d",count);
//	else if((arr[0] == ' ') || (last == ' '))
//		printf("%d",count);
	else if ((arr[0] == ' ') && (last == ' ')){
		count--;
	}
//		printf("%d",count);

	printf("%d",count);
	return 0;
}
