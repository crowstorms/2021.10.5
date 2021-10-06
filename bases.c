#include<stdio.h>
int main()
{
	int x = 100;
	
	printf("dec = %d; octal = %o; hex = %x.\n",x,x,x);
	printf("dec = %d; octal = %#o; hex = %#x.\n",x,x,x);
	
	return 0;
//不同的进制要使用不同的转换说明；10进制%d,8进制%o，16进制%x；
//各进制数的前缀（0，0x，0X);要显示出来，必须分别使用%#o，%#x，%#X;
	
	
	
	
	
	
	
}
