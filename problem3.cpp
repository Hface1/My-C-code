#include <stdio.h>
#include <stdbool.h>

int main(){
	int a,b;
	scanf ("%d %d",&a,&b);
	bool c = a>b&&a+b<=100;
	bool d = a<b&&a+b<=100;
	bool e = a==b&&a+b<=100;
	if(c==1){
		printf("yes");
	}else if(d==1){
		printf("no");
	}else if(e==1){
		printf("equal probability");
	}else{
		printf("something is peculier");
	}
	
	
	return 0;
}
