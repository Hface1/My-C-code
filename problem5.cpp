#include <stdio.h>

int main (){
	char X,Z;
	int  Y,W;
	
	scanf("%c %d %c %d",&X,&Y,&Z,&W);
	if(X<='z'&&X>='a'&&Z<='z'&&Z>='a'){
		if(X==Z){
			printf("valid\n");
			if(Y<=W){
				printf("%d",W-Y+1);
				
			}else{
				printf("%d",Y-W+1);
			}
		}else{
			printf("invalid\n");
			printf("-1");
		}	
	}else{
			printf("invalid\n");
			printf("-1");
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	
	
	return 0;
}
