#include<stdio.h>
#include<math.h>

void main()
{	
	int a[50],n,j,t;
	
	printf("hello\n");
	printf("enter number of values=");
	scanf("%d",&n);	

	for(j=0;j<n;j++)
	{
		printf("enter %d=",j+1);
		scanf("%d",&a[j]);
	}					
	
	t=1;
	for(j=1;j<n;j++)
	{
		if(a[j-1]<a[j])
		{
			t++;
		}
	}
	printf("%d",t);

	getch();
}
