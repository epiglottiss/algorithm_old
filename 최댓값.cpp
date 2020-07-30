#include<iostream>

int main(){
	int a[9];
	for(int i=0;i<9;i++){
		std::cin>>a[i];
		}
	int max=a[0], num=0;
	for(num;num<9;){
		int flag= true;
		int k=num+1;
		for(k;k<9;k++){
			if(a[num]<a[k]){

				max=a[k];
				num=k;
				flag= false;
				}
				}
		if(flag)
			break;
			}
	std::cout<<max<<std::endl<<num+1;
	return 0;
	}
