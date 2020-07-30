#include<stdio.h>

int main(){
	int t,l=1,h,w,n,ho,cheung;
	scanf("%d",&t);
	
	while(l<=t){
		scanf("%d %d %d",&h,&w,&n);
/*		if(h==1){
			printf("1%2.2d",n);
			goto pass;
		}*/
		ho = n/h+1;
		cheung = n%h;
		if(cheung == 0)
			printf("%d%2.2d",h,n/h);
		else
			printf("%d%2.2d",cheung,ho);
	/*pass :*/ if( l==t) break;
	printf("\n");
	l++;
	}
	 
	return 0;
}
