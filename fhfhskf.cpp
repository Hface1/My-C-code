#include <stdio.h>

int main(){
	char stuff;
	int a,h,n;
	scanf("%d %d %c %d",&a,&h,&stuff,&n);
	
	
	if(n==1){
		for(int i=0;i<h;i++){
			printf("\n");
			for(int i=0;i<a;i++){
			printf("%c",stuff);
		}
	}
	}
	if(n==0){
		printf("\n");
		for(int i=0;i<a;i++){
			printf("%c",stuff);
		}
		printf("\n");
		for(int i=2;i<h;i++){
			printf("%c",stuff);
			for(int i=2;i<a;i++){
				printf(" ");
			}
			printf("%c",stuff);
			printf("\n");
		}
		for(int i=0;i<a;i++){
			printf("%c",stuff);
	}
	}
	return 0;
}
