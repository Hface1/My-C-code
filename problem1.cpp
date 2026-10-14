#include <stdio.h>
#include <stdbool.h>
int main(){
	int h,r,v,n;
	n = 1;
	scanf("%d %d",&h,&r);
	v = h*(3.14*(r*r));
	while(n*v<20000.00){
		n++;
	}
	
	printf("%d",n);
	
	
	return 0;
}
