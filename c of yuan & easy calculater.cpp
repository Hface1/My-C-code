# include <stdio.h>

int main ()
{
	const double pi = 3.1415926;
	double r = 0;
	printf("请输入圆的半径： ");
	scanf("%lf",&r);
	printf("圆的周长: %f", 2 * pi * r );
	
	
	
	return 0;
}
