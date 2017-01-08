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
	for(i=0;i<=10;i++){  //依次判断a[0] a[10] 
		for(j=1;j<=score[i];j++){  //出现几次打印几次 
			printf("%d",i);
		}
	}
	system("pause");
	return 0;
} 
