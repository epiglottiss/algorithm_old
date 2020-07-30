#include<iostream>
using namespace std;
int main(){
	int n,m,quf;
	cin>>n;
	m=n;
	quf=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<quf-1;j++){
			cout<<" ";
		}
quf++;
		for(int k=0;k<2*m-1;k++){
		cout<<"*";
	}
	m-=1;
	if(i!=n-1)
	cout<<endl;
}
	return 0;
}
