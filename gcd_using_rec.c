#include<stdio.h>

int gcd(int ,int);
void main()
{
	int n,t,i,m;

	printf("hello aadesh agrawal(2019uec1660)\nenter values=");
	scanf("%d%d",&n,&m);
	
	printf("%d",gcd(n,m));
	getch();
}

int gcd(int x,int y)
{
	if(x>=y)
	{
		if(y!=0)
		{
			return (gcd(y,x%y));
		}
		else
		{
			return x;
		}
	}
	else
	{
		return (gcd(y,x));
	}
}
