#include <stdio.h>
#include <math.h>
int main(void){
	int n,numbers;
	double x,y,time,sumtime;
	sumtime=0.0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf %lf %d",&x,&y,&numbers);
		double sumx,sumy;
		sumx =pow(x,2);
		sumy =pow(y,2); 
		double s=pow(sumx+sumy,0.5);
		double time =s/50*2.0+1.0*numbers+0.5*numbers;
		
		sumtime +=time;
	}
	printf("%d",(int)ceil(sumtime));
	
	return 0;
}

