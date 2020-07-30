#include<stdio.h>

int main(){
	int arr[20];
	
	for (int i=0;i<8;i++){
	
	scanf("%d",(arr+i));
	}
	
	int c,d,e,f,g,a,b,c1o;
	c=arr[0];
	d=arr[1];
	e=arr[2];
	f=arr[3];
	g=arr[4];
	a=arr[5];
	b=arr[6];
	c1o=arr[7];
	if(c<d && d<e && e<f && f<g && g<a && a<b && b<c1o){
		printf("ascending");
	}
	else if(c>d && d>e && e>f && f>g && g>a && a>b && b>c1o){
	
		printf("descending");
	}
	else
		{printf("mixed");}
		
	return 0;
}
