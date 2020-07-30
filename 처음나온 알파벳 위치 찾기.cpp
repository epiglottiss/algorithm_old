#include<stdio.h>
#include<string.h>

int main(){
	char s[101];
	int atoz[27];
	for(int j=0;j<26;j++){
		atoz[j] = -1;
	}
	
	scanf("%s",s);
	
	for(char i=97;i<=122;i++){
		for(int k=strlen(s)-1;k>=0;k--){
			if( s[k] == i){
				atoz[i-97] = k;
			}
		}
	}
	for(int l=0;l<26;l++){
		printf("%d ",atoz[l]);
	}
	return 0;
}
