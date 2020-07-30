#include<stdio.h>

int main(){
	int mm, dd;
	int i;
	int months[12]={31,28,31,30,31,30,31,31,30,31,30};
	int day_sum=0;
	int day_val;
	
	scanf("%d %d",&mm, &dd);
	
	for(i=1;i<mm;i++){
		day_sum += *(months+(i-1));
	}
		day_sum += dd;
	
	//printf("daysum is %d\n",day_sum);
	day_val = (day_sum)%7;
	//printf("dayval is %d\n",day_val);
	switch(day_val){
		case 1:
			printf("MON");
		break;
		case 2:
			printf("TUE");
		break;
		case 3:
			printf("WED");
		break;
		case 4:
			printf("THU");
		break;
		case 5:
			printf("FRI");
		break;
		case 6:
			printf("SAT");
		break;
		case 0:
			printf("SUN");
		break;
	}
	return 0;
}
