//����printf()������
//����̫���� 
#include<stdio.h>
int main()
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	
	printf("un = %u and not %d\n",un,un);//��ӡunsigned int���͵�ֵ��ʹ��%uת��˵����
	printf("end = %hd and %d\n",end,end);//��ӡshort���͵�ֵ��ת��˵��ʹ��hǰ׺��%hd
	printf("big = %ld and not %hd\n",big,big);
	printf("verybig = %lld and not %ld\n",verybig,verybig);
	
	return 0;
	
//P43
//%d,%o,%x;
//%d,%u,%ld;
//%hd,%ho,%hx; 
	 
	
	
	
	
	
	
	
	
	
	
 } 
