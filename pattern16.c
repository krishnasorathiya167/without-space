#include<stdio.h>
main()

{
	int i ,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			if(j%2==1)
			{
				printf("%d ",1);
			}
			else
			{
				printf("%d ",0);
			}
		}
		printf("\n");
	}	
}