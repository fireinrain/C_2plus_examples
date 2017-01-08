#include <stdio.h>

int main(){
	
	int score[11],i,j,t;
	for(i=0;i<=10;i++){
		score[i]=0;   //初始化
		 
	}
	for(i=1;i<=5;i++){
		scanf("%d",&t); //把每个数读到变量中
		score[t]++; //进行计数 
	} 
	for(i=0;i<=10;i++){
		for(j=1;j<=score[i];j++){
			printf("%d",i);
		}
	}
	system("pause");
	return 0;
} 
