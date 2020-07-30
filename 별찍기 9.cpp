#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int line=0;
	int blank=-n+1;
	for(line=0;line<2*n-1;line++){
		for(int i=0;i<abs(abs(blank)-n+1);i++){
			cout<<" ";
		}
		blank++;
		if(line<n)
			for(int j=0;j<abs((-2)*n+1+line*2);j++){cout<<"*";}
		else
			for(int k=0;k<abs((-2)*n+3+line*2);k++){cout<<"*";}
				
		if(line != 2*n-2)
			cout<<endl;
	}
	return 0;
}
