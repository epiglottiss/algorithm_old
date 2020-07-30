#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int byul=-n+1;//, byul2=-n;
	for(int i=0;i<2*n-1;i++){
		for(int j=1;j<=2*n;j++){
			if(j<=n && abs(byul)<=abs(n-j))
				cout<<"*";
			else if(j>n && abs(byul)<abs(n-j))
				cout<<"*";
			else
				cout<<" ";
		}
		byul++;
//		byul2++;
		if(i != 2*n-2)
			cout<<endl;
	}
	return 0;
}
