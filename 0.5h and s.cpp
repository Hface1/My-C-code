#include <stdio.h>

int main(){
	double h;
	double s=0.0;
	scanf("%lf",&h);
	s += h;
	for(int i=1;i<10;i++){
		h/=2;
		s +=(2*h);
	}
	h/=2;
	printf("%f %f",h,s);
	return 0;
}
