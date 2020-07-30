#include<stdio.h>

int main(){
	long long n,l=1,x,y,i,d,k;
	scanf("%lld",&n);
	while(l<=n){
		scanf("%lld %lld",&x,&y);
		d = y-x;
		for(i=1;;i++){
			if( (d>i*(i-1)) && (d<=i*i)){
				printf("%lld",2*i-1);
				break;}
			if( (d>i*i) && (d<=i*(i+1))){
				printf("%lld",2*i);
				break;
			}
		}
		if(l == n) break;
		printf("\n");
		l++;
	}
	return 0;
}
