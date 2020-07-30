#include<stdio.h>
int main(){
	printf("아스키코드를 문자로 바꾸려면 0, 문자를 아스키코드로 바꾸려면 1을 누르세요.");
	int n;
	char asc;
	int asc1;
	scanf("%d",&n);
	
	switch(n){
		case 0:
			printf("바꿀 아스키코드를 입력하세요.\n");
			scanf("%d",&asc);
			printf("%c",asc);
		break;
		
		case 1:
			printf("바꿀 문자를 입력하세요.\n");
			scanf("%d",&asc1);
			printf("%c",asc1);
		break;
	}
	
	
	return 0;
}
