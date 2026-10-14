#include <stdio.h>

int main ()
{
	int score;
	const int a=9;
	const int b=8;
	const int c=7;
	const int d=6;
	const int e=10;
	
	
	printf("请输入你的成绩:");
	scanf("%d" ,&score);
	int score10 = score/10;
	
	switch(score10){
		case e:
			printf("您的成绩等级为A");
			break;
		case a:
			printf("您的成绩等级为A");
			break;
		case b:
			printf("您的成绩等级为B");
			break;
		case c:
			printf("您的成绩等级为C");
			break;
		case d:
			printf("您的成绩等级为D");
			break;
		default:
			printf("您的成绩等级为E");
			break;
	}
	
	
	
	
	
	return 0;
}
