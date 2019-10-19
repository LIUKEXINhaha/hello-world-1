//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
#define N 10
int main()
{   int a,b,i;
    int  t[N];
    float m = 1.78;
    float x = 1.77999, y = 2;
    float z = m / y, z1 = x / y;
    int c,d;
    a=(int)z;printf("z的整数部分：%d\n",a);
    b=(int)z1;printf("z1的整数部分：%d\n",b);
    c=(z-a)*100000;printf("z的小数部分：%d\n",c);
    d=(z1-b)*100000;printf("z1的小数部分：%d\n",d);
    for(i=0;i<4;i++)
    {
    	c=c/10;printf("%d ",c);
    	d=d/10;printf("%d\n",d);
    	if(c==d)
    	{t[i]=1;
		}
		else t[i] =0;
	}
	if(a==b && t[0]==t[1]==t[2]==t[3]==t[4]==1 )
	{printf ("两个浮点数相等\n");}
	else{printf ("两个浮点数不相等\n");
	printf("z=%f\nz1=%f",z,z1);
	}
	return 0;
    
}
