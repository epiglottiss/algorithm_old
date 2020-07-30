#include<stdio.h>
 
int main(){
	int t,l=1,i,j,k,n;
	int arr[15][15];
	for(i=0;i<15;i++){
		arr[0][i] = i;
		arr[i][0] = 0;
	}
	for(i=0;i<15;i++){
		for(j=1;j<15;j++){
			if(i == 14) break;
			arr[i+1][j] = arr[i][j] + arr[i+1][j-1];
		}
	}
	
/*	printf("각 호에 사는 인원\n");
	
	for(int x=0;x<15;x++){
		printf("%d층\t",x);
		for(int y=0;y<15;y++){
			printf("%d\t",arr[x][y]);
			if( y ==14) printf("\n");
		}
	}*/	
		
	scanf("%d",&t);
	
	while(l<=t){
		scanf("%d\n",&k);
		scanf("%d",&n);
		printf("%d",arr[k][n]);
		if(l != t)
			printf("\n");
		l++;
		}
	return 0;
}
