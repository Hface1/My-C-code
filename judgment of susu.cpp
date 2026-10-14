#include <stdio.h>

int main()
{
	int x;
	int i;
	int b;
	
	scanf("%d",&b);
	
	for(x=2; x<b; x++ ){
		int m = 1;
		for (i=2; i<x; i++ ){
		if(x % i == 0 ){
			m=0;
			break;
		}
	}
	if(m == 1){
		printf(" %d ", x);
		m = 0;
	}
	}
	
	return 0;
}
























		




