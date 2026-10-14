#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = rand()%100+1;
	int count = 0;
	int number = 0;
	
	do{
	scanf("%d",&number);
	count++;
	
		if(number>a){
			printf("数字偏大");
		}else if(number<a){
			printf("数字偏小"); 
		}
	}while(number!=a);
	
	printf("恭喜你猜对了,用了%d次",count);
	
	return 0;
}
