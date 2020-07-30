#include<iostream>
int main(){
	int n;
	std::cin>>n;
	int cnt=1;
	while(cnt<=n){
		for(int i=0;i<cnt;i++){
			std::cout<<"*";
	}
		std::cout<<"\n";
		cnt++;}
	while(cnt !=2*n){
		for(int j=0;j<2*n-cnt;j++){
		std::cout<<"*";
		}
		std::cout<<"\n";
		cnt++;
	}
	return 0;
}
