#include<stdio.h>

main()
{
	int r,c,sum=0;

	printf("How many rows :- ");
	scanf("%d",&r);
	printf("How many cols :- ");
	scanf("%d",&c);

	int array[r][c];
	int i,j;

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter array[%d][%d] :- ",i,j);
			scanf("%d",&array[i][j]);
			sum = sum+array[i][j];
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
	
	printf("Addition of :- %d",sum);
}