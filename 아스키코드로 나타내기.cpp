#include<stdio.h>
int main(){
	printf("�ƽ�Ű�ڵ带 ���ڷ� �ٲٷ��� 0, ���ڸ� �ƽ�Ű�ڵ�� �ٲٷ��� 1�� ��������.");
	int n;
	char asc;
	int asc1;
	scanf("%d",&n);
	
	switch(n){
		case 0:
			printf("�ٲ� �ƽ�Ű�ڵ带 �Է��ϼ���.\n");
			scanf("%d",&asc);
			printf("%c",asc);
		break;
		
		case 1:
			printf("�ٲ� ���ڸ� �Է��ϼ���.\n");
			scanf("%d",&asc1);
			printf("%c",asc1);
		break;
	}
	
	
	return 0;
}
