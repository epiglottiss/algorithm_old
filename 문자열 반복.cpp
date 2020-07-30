#include<stdio.h>
#include<string.h>
int main(){
	int t;
	int r;
	char p[25];
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&r);
		scanf("%s",p);
		for(int j=0;j<strlen(p);j++){
			for(int k=1;k<=r;k++){
				printf("%c",p[j]);}
			}
		if(i == t) break;
		printf("\n");
		}
	return 0;	
	}

