#include<stdio.h>
#include<stdlib.h>
int a[5]={'0','0','0','0','0'};
int b[5]={'0','0','0','0','0'};
int c[5]={'0','0','0','0','0'};


int main()
{
int n,i,j,k;
printf("enter the size of set a and b:\n");
scanf("%d",&n);
printf("enter the element in set a:\n");
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
printf("set A\n");
for(i=1;i<=n;i++)
{
	printf("%d\t",a[i]);
}
printf("\nenter the element in set b:\n");
for(i=1;i<=n;i++)
{
	scanf("%d",&b[i]);
}
printf("\nset B\n");
for(i=1;i<=n;i++)
{
	printf("%d\t",b[i]);
}
printf("\nbit format of set A");
for(i=1;i<=5;i++)
{
for(j=1;j<=n;j++)
{	
	if(i!=a[j])
	{
		a[i]=0;
	}
	else
	{
		a[i]=1;
		i++;
	}
	
}
}
for(i=1;i<=5;i++)
{
	printf("%d\t",a[i]);
	

}
}
