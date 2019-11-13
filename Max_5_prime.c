//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR
#include<stdio.h>
void swap(int *a, int *b) {
	int m = *a;
	*a = *b;
	*b = m;
}
void perm(int a[], int k, int m) {
	if(k>m) {int b[5][5];
	         int c[256];
			   	int i=0;
			   	int z=0;
	for(z=0;z<5;z++){
	
		for (int h=0; h<=m;h++) {
			
			b[z][h]=a[h];
		}
		printf("\n");
		for(int d=0;d<5;d++) 
		{   
		int	m=10000*b[d][0]+1000*b[d][1]+100*b[d][2]+10*b[d][3]+1*b[d][4];
			for(int q=2;q<m;q++) 
			{
			   if(m%q!=0&&m%1==0&&m%m==0)
			   {
			   	printf("m=%d\n",m);
			   	
			   	c[i]=m;
			   	i++;
			   }
			}
		}}
    for(int s=0;s<i-1;i++)
	{for(int r=0;r<i-1-s;r++)
	{
		if(c[r]>c[r+1])
		{int f;
			f=c[r];
			c[r]=c[r+1];
			c[r+1]=f;
		}
	}
	} 
	printf("%d",c[i]);}
	else {
		for (int i=k;i<=m;i++) {
			swap(a+k,a+i);
			perm(a,k+1,m);
			swap(a+k,a+i);
		}
	}
}
int main() {
	int a[5] ;
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	printf("%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4]);
	perm(a,0,4);
	
}

