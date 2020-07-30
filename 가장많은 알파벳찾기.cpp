#include<stdio.h>
#include<string.h>
//#include<ctype.h>
/*char *strlwr(char *str){
	for(int unsigned i=0;i<strlen(str);i++){
		char a = str[i];
		if(a>=65 && a<=90){
			str[i] += 32;
		}
	}
	return str;
}*/

int main(){
	char word[1000001];
	scanf("%s",word);
//	strlwr (word);
	
	int unsigned atoz[27]={};
	int mostnum = 0;	
	int unsigned charnum;	
	int j=0;
	while(j != '\0'){
			if(word[j]<=90){
				word[j] +=32;}
			atoz[word[j]-97]++;
			j++;
			}
			
	for(int unsigned k=0;k<26;k++){
		if(mostnum < atoz[k]){
			mostnum = atoz[k];
			charnum = k;
			}
		}
	
	int unsigned count = 0;
	for ( int m=0;m<26;m++){
		if (mostnum == atoz[m]){
			count++;}
	}
	
	if (count >= 2)
		printf("?");
	else
		printf("%c",charnum+65);
	
	return 0;
}
