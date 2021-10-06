#include<stdio.h>
int main ()
{
	int ten = 10;
	int two = 2;
	printf("Doing it right:");
	printf("%d minu %d is %d\n",ten,2,ten -two);
	
	printf("Doing it wrong:");
	printf("%d minus %d is %d\n",ten);//遗漏两个参数,剩下两个参数随机打印 
	
	return 0;
	
	
	
	
	
	
 } 
