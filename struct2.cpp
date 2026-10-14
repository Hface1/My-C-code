#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};
struct date function(struct date *a,struct date *b){
	a=0;
	b=0;
	int c=0;
	scanf("%d %d",&a,&b);
	printf("%d",c);
	
}

int main(){
	struct date today={};
	printf ("%d  %d  %d",today.month ,today.day ,today.year );
	struct date *p=&today;
	
	
	
	return 0;
}
