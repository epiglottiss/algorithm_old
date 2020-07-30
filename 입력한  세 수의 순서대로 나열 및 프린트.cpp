#include<stdio.h>
#include <stdlib.h>
int compare(const void* ,const void* );
	
int main(){
	int nums[3];
/*	int a,b,c;
/*	a=nums[0];
	b=nums[1];
	c=nums[2];*/
//	int temp;
	scanf("%d %d %d",/*&a,&b,&c*/(nums+0),(nums+1),(nums+2));
//	scanf("%[^\n]s",nums);
/*	for(int i=0;i<3;i++){
	printf("%d ", nums[i]);
	}
//	sscanf(nums,"%d %d %d",&a,&b,&c);
//	printf("first number %d\n", nums[0]);
																	
/*	for(int i=1;3>i;i++){
	if(a>=b)
		temp=a;
		a=b;
		b=temp;
	if(b>=c)
		temp=b;
		b=c;
		c=temp;		
	}
	if(a>=b)
		temp=a;
		a=b;
		b=temp; */
	int num=sizeof(nums)/sizeof(nums[0]);
//	printf("nums0 size %d\n",sizeof(int));
	int width=sizeof(nums[0]);
	qsort((void *)nums,3,width,compare);
		
	int k;
/*	for(k=0;k<3; k++){
		printf("%d ",*(nums+k));
	}*/
	printf("%d",nums[1]);
	return 0;
}

int compare(const void *elem1,const void *elem2){
	if (*(int *)elem1 == *(int *)elem2)
		return 0;
	else if (*(int*)elem1 < *(int *)elem2)
		return -1;
	else
	return 1;
}
