#include <stdio.h>
#include <string.h>

int main(){
	char input[100];
	char tenl[11];
	int k;
	int i=0;
	
	scanf("%s",input);
	
	for(k=0;k<=strlen(input)/10;k++){
		for(i;i/10<=k;i++){
			if(input[i]==NULL)
			break;
			printf("%c",input[i]);
		}
		printf("\n");
	}
	return 0;
		
	}
