#include <stdio.h>
#include <string.h>
int main(){
	char word[110];
	scanf("%s",word);
	
	int count = strlen(word);
	for(int i=0;i<strlen(word);){
		if((word[i]== 'l' ) && (word[i+1] == 'j' )){
			count --;
			i++;}
		else if ((word[i]=='n') && (word[i+1] == 'j'))
			{
			count --;
			i++;}
		else if ((word[i]=='d') && (word[i+1] == 'z') && (word[i+2] == '='))
			{count = count - 2;
			i = i+2;}
		else if ((word[i]=='c') && (word[i+1] == '='))
			{count --;
			i++;}
		else if ((word[i]=='c') && (word[i+1] == '-'))
			{count--;
			i++;}
		else if ((word[i]=='d') && (word[i+1] == '-'))
			{count--;
			i++;}
		else if ((word[i]=='s') && (word[i+1] == '='))
			{count--;
			i++;}
		else if ((word[i]=='z') && (word[i+1] == '='))
			{count--;
			i++;}
		
			i++;
			}
			
	printf("%d",count);
	return 0;
}
