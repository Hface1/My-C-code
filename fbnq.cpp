#include <stdio.h>

int a[30];

int main(){
	int n;
	scanf("%d",&n);
	a[0]=1;
	a[1]=1;
	
	if(n==1){
		printf("1");
	}else if(n==2){
		printf("1 1");
	}else{
		printf("1 1");
		for(int i=0;i<n-2;i++){
		a[i+2]=a[i]+a[i+1];
		
		printf(" %d",a[i+2]); 
		
	}
	}
	
	
	return 0;
	
}
