#include <stdio.h>

int main(){
	int n,a,b;
	int cnt=0;
	int c =0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			cnt++;
		}else{
			cnt=0;
		}
		if(c<cnt){
			c=cnt;
		}
	}
	printf("\n%d",c);
	
	return 0;
}
