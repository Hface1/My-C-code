#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	double deta;
	deta = b*b-4*a*c;
	printf("deta=%f",deta);
	printf("\n");
	x1 = (-b+pow(deta,0.5))/(2*a);
	x2 = (-b-pow(deta,0.5))/(2*a);
	
	
	if(deta>=0){
		if(x1 == x2){
			printf("x1=x2=%5f",x1);
		}else if(x1 > x2){
			printf("x1=%5f; x2=%5f",x2,x1);
		}else{
			printf("x1=%5f; x2=%5f",x1,x2);
		}
	}else{
		printf("NO answer!");
	}
	return 0;
}

