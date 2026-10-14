#include <stdio.h>
int a;

int cnta=0;
int cntb=0;
int cntc=0;

int main(){
	scanf("%d",&a);
	int b[a];
	printf("\n");
	for(int i=0; i<a;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0; i<a;i++){
		if(b[i]<0){
		cnta++;
		}else if(b[i]>0){
			cntb++;
		}else{
			cntc++;
		}
		
	}
	printf("%d %d %d",cnta,cntb,cntc);
	return 0;
}
