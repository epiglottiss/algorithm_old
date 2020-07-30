#include<iostream>
int main(){
	int a[10];
	int cnt=10;
	for(int i=0;i<10;i++){
		std::cin>>a[i];
		a[i] %=42;
	}
	for(int j=0;j<10;j++){
		int k=j+1;
		for(k;k<10;k++){
			if(a[j]==a[k]){
				cnt--;
				a[j]=99;}
			
				}
			}
	std::cout<<cnt;
	return 0;
	}

