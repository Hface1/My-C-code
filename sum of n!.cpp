#include <stdio.h>

int main(){
	int n;
	int a=1;
	int sum=0;
	
	scanf("%d",&n);
	
		for(int i=1;i<=n;i++){
		a *=i;	
		sum +=a;
	}
	
	
	printf("%d",sum);
	
	
	return 0;
}
