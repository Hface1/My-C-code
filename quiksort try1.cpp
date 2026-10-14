#include <stdio.h>

int partition(int a[],int low,int high){
	int pivot =a[low];
	while(low<high){
		while(low<high && a[low]<=pivot){
			low++;
		}
		while(low<high && a[high]>=pivot){
			high--;
		}
	}
	a[high] = pivot;
}
	
void quicksort(int a[],int low,int high){
	if(low<high){
		int pi = partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
	
	
}
	
	

