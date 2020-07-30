#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,quf=1;
	cin>>n;
	int blank=-n+1;
	for(int i=0;i<2*n-1;i++){
		for(int j=0;j<abs(blank);j++){
//			if(abs(i-n) != 0)
				cout<<" ";
		}
		blank++;
		for(int k=0;k<2*(n-abs(quf-n))-1;k++){
			cout<<"*";
		}
		quf++;
		if(i != 2*n-2)
			cout<<endl;
	}
	return 0;
}
