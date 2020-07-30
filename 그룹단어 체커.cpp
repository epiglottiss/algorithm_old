#include<stdio.h>
#include<string.h>
int main(){
	
	int n;
	char word[101];
	scanf("%d",&n);
	int group = n;
	
	for(int i=1;i<=n;i++){
		scanf("%s",word);
		int k =0;
		int atoz[26]={};
		atoz[ word[0]-97 ]++;
		int ngroup = 0;
		while(k<strlen(word)){
			if( k == strlen(word)-1 ) break;
			char a = word[k];
			char b = word[k+1];
			if(a != b)
				atoz[b-97]++;
			k++;
		}
		for( int j=0;j<26;j++){
			if(atoz[j]>=2)
				ngroup = 1;
		}
		group -= ngroup;
	}
	
	printf("%d",group);
	

	return 0;
}
