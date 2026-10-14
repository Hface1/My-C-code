#include <stdio.h>

int main()
{
	double n = 0;
	double a;
	double b = 0;
	
	do{
		scanf("%lf", &a);
		
		if(a != -1.0){
			n++;
			b += a;
		}
		
	}while(a!=-1.0);
		printf("%f",b/n);
	
	
	return 0;
	
}
