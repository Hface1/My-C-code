#include <stdio.h>

void swap(int *p,int *q){
	int t;
	t = *p;
	*p= *q;
	*q= t;
}


int main (){
	//int n;
	//scanf("%d,&n");
	//int a[n];
	int n=10;
	int a[n]={2,3,5,9,0,7,1,80,6,4};
	for(int i=0;i<n-1;i++){
		int m = 0;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				m = 1;
				
			}
			
		}
		if(m = 0)break;
	}
	for(int d=0;d<n;d++){
		printf("%d\c",a[d]);
	}
	
	
	return 0;
}

