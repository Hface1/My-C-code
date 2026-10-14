#include <stdio.h>
#include <stdlib.h>

void swap(int*x,int*y){
	int t=*x;
	*x=*y;
	*y=t;
}
void bubblesort(int a[],int n){
	for(int i=0;i<n;i++){
		int swapped = 0;
		for( int j=0;j<n;i++){
			if(a[j]>a[j+1]){
				
				swap(&a[j],&a[j+1]);
				swapped = 1;
			}
			
		}
		if(swapped = 0)break;
	}
	
}
int main(){
	int a[10]={3,2,1,4,9,0,5,7,6,8};
	int n=10;
	bubblesort(a,n);
	for(int i=0;i<n;i++){
		printf("%d",&a[i]);
		
	}
	
	
}
