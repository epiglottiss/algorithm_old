#include <stdio.h>
/*int kaing(int m, int n, int x, int y){
	int count = 1,left =1,right=1;
	for(count;;){
		if(left<m)
			left++;
		else
			left=1;
		
		if(right<n)
			right++;
		else
			right=1;
		count++;
		
		if(left==x && right==y){
			return count;
			break;
		}
		
		if(left==m && right==n){
			return -1;
			break;
		}		
	}	
}*/
int gcd(int a,int b){if(b==0) return a; return gcd(b,a%b);}

int main(){
	int t,m,n,x,y,k;
	scanf("%d\n",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d %d %d",&m,&n,&x,&y);
		if(y==n) y=0;
		for(int j=0;;j++){
			k = x + j*m;
		if(y==k%n){
			printf("%d",k);
			if(i != t-1) printf("\n");
			break;
		}
		if(j !=0 && k > m*n/gcd(m,n)){
			printf("-1");
			if(i != t-1) printf("\n");
			break;
		}
		
	}
	
}
	return 0;
}
