#include<stdio.h>
int main()
{
	int a,b,c,i=1;
	printf("输入两个正整数：");
	scanf("%d,%d",&a,&b);
	if (a<b)
	{
		c=a;
		a=b;
		b=c;
		for(i=1;i<=b;i++)
		{
			if(i*a%b==0) {
			
			printf("两个正整数的最小公倍数：%d",i*a);
			break;}
			
		}
	}
	else {
		for(i=1;i<=b;i++)
		{
			if(i*a%b==0)
			{
			
			printf("两个正整数的最小公倍数： %d",i*a);
			break;}
		}
	}
	 return 0;
}
