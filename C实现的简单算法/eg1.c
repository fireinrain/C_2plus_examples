#include <stdio.h>

int main(){
	
	int score[11],i,j,t;
	for(i=0;i<=10;i++){
		score[i]=0;   //��ʼ��
		 
	}
	for(i=1;i<=5;i++){
		scanf("%d",&t); //��ÿ��������������
		score[t]++; //���м��� 
	} 
	for(i=0;i<=10;i++){  //�����ж�a[0] a[10] 
		for(j=1;j<=score[i];j++){  //���ּ��δ�ӡ���� 
			printf("%d",i);
		}
	}
	system("pause");
	return 0;
} 
