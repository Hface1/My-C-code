#include <stdio.h>
int a[10];
int b;
int c[10];
int i;
int f;

int main(){
	for(i=0; i<10; i++){
	scanf("%d", &f);
	a[i] = f;
	}
	
	for(i=0; i<10; i++){
		int d;
		d =9-i;
		c[d] = a[i];
	}
	printf("\n");
	for(i=0; i<10; i++){
		printf("%d", c[i]);
		if(i<9){
			printf(" ");

		}
	}
	
	printf("\n");
	return 0;
}
