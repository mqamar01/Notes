#include <stdio.h>
#include <stdbool.h>

void showprime(int* a, int* b)
{
	for (int i=(*a);i<=(*b);i++)
	{
		bool flag = false;
		for (int j=2;j<i;j++)
		{
			if (i%j == 0)
				flag = true;
		}
		if (flag == false)
			printf("%d\t",i);
	}
}

int main()
{
	int min,max;
	printf("Enter range for numbers: ");
	scanf("%d,%d",&min,&max);
	showprime(&min,&max);
	return 0;
}
