//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
#include<stdio.h>
int  primer(int i)
{
	int f,t1;
	int o[100];
	f=0;
	for(t1=1;t1<=i;t1++)
	{
		if(i%t1==0)
		{
		o[f]=t1;
		f++;}
	}
	if(f==2)
	{if(o[0]==1&&o[1]==i)
	return 0;
	else return -1;
}
}
int main ()
{
	int i,m,b,t,s,h=0,w,v;
	int a[10];
	int o[10000];
	for(i=100;i<=10000;i++)
	{   int c=1,t1=0,q=0;
		c=primer(i);
		s=i;
		for(t=0;t>=0;t++)
		{
			a[t]=s%10;
			
			q+=a[t];
			t1+=a[t]*a[t];
			s=s/10;
			
			if(s==0)
			{
			break;}
		}
		m=primer(q);
		b=primer(t1);
		
		if(c==0&&m==0&&b==0)
		{
		printf("%d是超级素数\n",i);
	    o[h]=i;
	    w+=o[h];
	    h++;
		}
		
		}
	    
		v=w/h;
		printf("平均数为：%d",v);
		return 0;
}
