#include <stdio.h>

int main(){
	int t,i;
	int n1, n2;
	scanf("%d\n",&t);
	
	for(i=1;i<=t;i++){
		scanf("%d %d",&n1,&n2);
		printf("%d\n",n1+n2);
	}
	return 0;
}
