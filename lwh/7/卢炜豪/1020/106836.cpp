#include<stdio.h>
int main()
{
	int x;int i=0;
	while(scanf("%d",&x)!=EOF)
	{
		if(1<x||x<5000000000)
		{
		int n;
		for(n=1;n<=x;n++)
		{
			if(x%n==0)
				i++;
		}
		if(i==2||i==1)
			printf("yes\n");	
		else 
			printf("no\n");
		i=0;
	}
	
}
}