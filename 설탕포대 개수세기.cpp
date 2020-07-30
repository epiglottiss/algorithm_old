#include <stdio.h>

int main()
{
    int n; 
    int result;
    scanf("%d",&n);

	if(n != 4 && n !=7){
		if(n%5==0)
			result=n/5;
		else if (n%5==1 || n%5==3)
			result=n/5+1;
		else
			result=n/5+2;
	}
	else if(n=4)
		result=-1;
	else
		result=-1;
		
	printf("%d",result);
    

    return 0;
}

