#include<iostream>
using namespace std;
char quf(int n){
	n /= 3;
	if(n =1) {
		return (quf(n));
	}
	for(int i=0;i<3;i++){
		cout<<quf(n);}
	cout<<endl;
	cout<<quf(n);
	for(int k=0;k<n;k++){
		for(int l=0;l<n;l++){
			cout<<" ";
		}
		if(k != n-1)
		cout<<endl;
	}
	cout<<quf(n);
	cout<<endl;
	for(int j=0;j<3;j++){
		cout<<quf(n);}
//		n /= 3;
}
int main(){
	int num;
	cin>>num;
	cout<<quf(num);
	
	return 0;
}
