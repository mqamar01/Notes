#include <stdio.h>

int counter(int a)
{
	int count = 0;
	for (int i=0;i<32;i++)
	{
		int mask = 0;
		mask = 1<<i;
		if ((a&mask) == 0)
			count++;
	}
	return count;
}

int main()
{
	int num = 5;
	int count = counter(num);
	printf("Number of 0s in '%d' are %d\n",num,count);
	return 0;
}
