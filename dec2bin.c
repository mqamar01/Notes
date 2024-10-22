#include <stdio.h>

void dec2bin(int n)
{
	for (int i=31;i>=0;i--)
	{
		int mask = 0;
		mask = 1<<i;
		((mask&n) == 0) ? printf("0") : printf("1");
	}
	printf("\n");
}

int main()
{
	int num = 5;
	dec2bin(num);
	return 0;
}

