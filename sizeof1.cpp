#include <stdio.h>
#include <stdbool.h>

int a;
int b;
int c;
int d;
int i;
void  function1 (int c , int d){
	if(i > c && i < d){
	printf("it is ture");
	}else{
		printf("it is false");
	}
}



int main(){
	bool i;
	scanf("%d  %d  %d" , &i, &a , &b);
	function1( a, b );
		
	printf("\n");
	printf("%d" ,i);
	return 0;
}
