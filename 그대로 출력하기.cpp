#include<iostream>
#include<string>
using namespace std;

int main(){
	//FILE *fp;
	string in;
	int i;
	while(i<100 && cin.eof() !=EOF){
		getline(cin,in);
		cout<<in<<endl;
		i++;
		}
		return 0;

}
