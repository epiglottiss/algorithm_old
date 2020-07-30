#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d\n%d\n%d",&a,&b,&c);
	a=a*b*c;
//	c = a/10;
	
//	printf("a is %d\n",a);
	
	int arr[10] = {0,0,0,0,0,0,0,0,0,0};
	//*arr = (int *)malloc(sizeof(arr));
//	printf("arr[?] is %d\n",arr[1]);
	for(int i=0;;i++){
		b = a%10;
		arr[b]++;
		a /=10;
		if(a==0) break;
	}
	
//	printf("sizeof arr is %d\n",sizeof(arr)/sizeof(arr[0]));
	
	for(int k=0;k<sizeof(arr)/sizeof(arr[0]);k++){
		printf("%d",arr[k]);
		if(k==9) break;
		printf("\n");
	}
	return 0;
}
