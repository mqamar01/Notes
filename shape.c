#include <stdio.h>

int main()
{
	int vertical;
	printf("Enter number of rows:");
	scanf("%d",&vertical);
	for (int i=vertical; i>0; i--)
	{
		for (int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
