#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,x,n,r,j,a[50][50];
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	i=n;
	x=0;
	while(i!=1)
	{
		j=0;
		for(s=i;s!=0;j++)
		{	
			a[x][j]=s%10;
			s=s/10;
		}
		s=i;
		i=0;
		for(r=0;r<j;r++)
		{
			i=i+a[x][r]*a[x][r];
		}
		if(i==s)
		{
			break;
		}
		x++;
	}
	if(i==1)
	{
		printf("true");
	}
	getch();
}
