#include<iostream>
using namespace std;

int byul(int su){
		if(su==0)
			return 1;
		else
		{ cout<<"  *   "<<endl<<" * *  "<<endl<<"***** ";}
		return byul(su-3);
}
int main(){
	int n;
	cin>>n;
//	cout<<"  *   "<<endl<<" * *  "<<endl<<"***** ";
	while(n !=0){
		byul(n);
	}
	return 0;
}
