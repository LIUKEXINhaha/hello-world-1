//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include<stdio.h>

int main()
{
	
	int n,l,t,m,b,c,j;
	
	
	int a[256];
	int d,i,q=0;
    for(n=0;n>0;n++){q=0;
	for(j=n;j>=0;j--){
	t=j;
	for(d=1;d>=0;d++)
	{ 
	   t=t/10;
		if(t==0)
		{
			goto done;
		}
	}
	done:
		c=j;
	for(i=0;i<d;i++)
	{
	     m=c%10;
		a[i]=m;
		c=c/10;
		
		if(a[i]==1)
		q++;
	}
	
	}
	if(q!=1&&q==n){
	printf("%d",n);
	break;}}
return 0;
}
    
	

