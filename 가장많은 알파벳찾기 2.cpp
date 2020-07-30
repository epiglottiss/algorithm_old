#include<stdio.h>
#include<string.h>
int main(){
	char input[1000001];
	for(int z=0;z<1000001;z++){
		scanf("%c",&input[z]);
	}
	
	int i=0;
	int atoz[26]={};
	int mostn=0;
	int charnum=0;
	while(input[i] != '\0'){
		if(input[i]>=97){
			input[i] -= 32;
		}
		atoz[input[i]-65]++;
	
		if(mostn < atoz[input[i]-65]){
			mostn = atoz[input[i]-65];
			charnum = input[i]-65;
		}
		i++;
	}
		for (i=0;i<26;i++)
	{
		if(i!=charnum)
		{
			if (mostn==atoz[i])
			{printf("?\n");return 0;}
		}
	}
	printf("%c\n",charnum+65);
	return 0;
		
		
}
/*	int count = 0;
	for(i=0;i<26;i++){
		if(mostn == atoz[i])
			count++;
	}
	
	if(count>=2)
		printf("?");
	else
		printf("%c",charnum+65);
	
	return 0;
}*/
