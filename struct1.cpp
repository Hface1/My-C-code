#include <stdio.h>

int main(){
	struct date{
		int a;
		int b;
	};
	struct com{
		int a;
		int b;
		int c;
	};
	
	struct date p={1,2},q={3,4};
	printf("%d\n%d\n",q.a-p.a,q.b-p.b);
	
	
	return 0;
}
