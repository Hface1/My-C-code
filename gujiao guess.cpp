#include <stdio.h>

int function(int a,int cnt){
	cnt=0;
	
	while(1){
		if(a%2==0){
		a =a/2;
	}else{
		a =3*a+1;
	}
	cnt++;
	
	if(a==1){
		printf("\n%d",cnt);
		break;
	}
	}
	
	
	
}

int main(){
	int n,cnt;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		function(i,cnt);
		
	}
	
	
	return 0;
}














