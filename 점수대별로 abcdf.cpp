#include <stdio.h>

int main(){
	int score;
	
	scanf("%d",&score);
	
	if(score<=100 && score>=90)
		printf("A");
	if(score<=89 && score>=80)
		printf("B");
	if(score<=79 && score>=70)
		printf("C");
	if(score<=69 && score>=60)
		printf("D");
	if(score<=59)
		printf("F");
		
	return 0;		
		
		
		
}
