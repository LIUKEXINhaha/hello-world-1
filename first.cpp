#include<stdio.h>
int main()
{
	int a,b,c,i=1;
	printf("����������������");
	scanf("%d,%d",&a,&b);
	if (a<b)
	{
		c=a;
		a=b;
		b=c;
		for(i=1;i<=b;i++)
		{
			if(i*a%b==0) {
			
			printf("��������������С��������%d",i*a);
			break;}
			
		}
	}
	else {
		for(i=1;i<=b;i++)
		{
			if(i*a%b==0)
			{
			
			printf("��������������С�������� %d",i*a);
			break;}
		}
	}
	 return 0;
}
