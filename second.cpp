#include<stdio.h>
int main ()
{
	int a,b,c=0;
	printf("����������������");
	scanf("%d,%d",&a,&b) ;
	if(b>a)
	{int t;
	t=b;
	b=a;
	a=t;

	while(b>0)
	{
		c=a%b;
		a=b;
		b=c;
		
	}
	if(a==1) printf("�ǻ�Ϊ����") ;
	else
	{
	printf("�ǻ�Ϊ����");}
	}
	else
	{
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
		
	}
    if(a==1) printf("�ǻ�Ϊ����") ;
	else
	{
	printf("�ǻ�Ϊ����");}
		}
	}
	

