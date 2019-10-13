#include<stdio.h>
int main ()
{
	int a,b,c=0;
	printf("输入两个正整数：");
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
	if(a==1) printf("是互为质数") ;
	else
	{
	printf("是互为质数");}
	}
	else
	{
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
		
	}
    if(a==1) printf("是互为质数") ;
	else
	{
	printf("是互为质数");}
		}
	}
	

