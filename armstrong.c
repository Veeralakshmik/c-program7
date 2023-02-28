include<stdio.h>
void main()
{
	int min,max,sum,r,temp,n;
	scanf("%d%d",&min,&max);
	for(n=min;n<=max;n++)
	{
		sum=0;
		temp=n; 
		while(temp>0)
		{
		r=temp%10;
		sum=sum+(r*r*r);
		temp=temp/10;
	}
	if(sum==n)
	printf("%d\t",n);
	}
	}
