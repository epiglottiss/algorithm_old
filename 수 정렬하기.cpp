#include<stdio.h>
#include<stdlib.h>

int main(){
	int* arr, n,temp,a=0,j=1;
	scanf("%d\n",&n);
//	int *arr;
	arr=(int *)malloc(sizeof(int)*n);
	for(int i=0; i<n;i++){
		scanf("%d",&arr[i]);
	}
	while(a<n){
		for(j=a+1;j<n;j++){
			if(arr[a] >arr[j]){
				temp=arr[a];
				arr[a]=arr[j];
				arr[j]=temp;}	
			}
		a++;
	}
	
	for(int k=0;k<n;k++){
		printf("%d",arr[k]);
		if(k != n-1) printf("\n");
	}
	return 0;
}
