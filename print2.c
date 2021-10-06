//更多printf()的特性
//还不太明白 
#include<stdio.h>
int main()
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	
	printf("un = %u and not %d\n",un,un);//打印unsigned int类型的值，使用%u转换说明；
	printf("end = %hd and %d\n",end,end);//打印short类型的值，转换说明使用h前缀（%hd
	printf("big = %ld and not %hd\n",big,big);
	printf("verybig = %lld and not %ld\n",verybig,verybig);
	
	return 0;
	
//P43
//%d,%o,%x;
//%d,%u,%ld;
//%hd,%ho,%hx; 
	 
	
	
	
	
	
	
	
	
	
	
 } 
