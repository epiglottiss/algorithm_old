#include<cstdio>
#include<string>
using namespace std;

class Stack
{
private:
	int TopIndex;
	int StackArray[10000];
public:
	stack() {TopIndex = -1;
	printf("constructor\n"); }

	void push(int n){
		StackArray[++TopIndex] = n;
	}
	int pop(){
		if(TopIndex==-1)
			return TopIndex;
		return StackArray[TopIndex--];
	}
	int size(){
		return TopIndex+1;
	}
	bool empty(){
		return TopIndex==-1;
	}
	int top(){
		if( empty() ) 
			return TopIndex;
		return StackArray[TopIndex];
	}
};

int main(){
	int num,x;
	scanf("%d",&num);
	
	Stack stack1;
	string order;
	for(int i=0;i<num;i++){
		scanf("%s",&order);
		if(order=="push") {scanf("%d",&x); stack1.push(x);}
		else if(order=="pop") printf("%d\n", stack1.pop());
		else if(order=="size") printf("%d\n", stack1.size());
		else if(order=="empty") printf("%d\n", stack1.empty()); 
		else if(order=="top") printf("%d\n", stack1.top()); 	
		}

	return 0;
}
