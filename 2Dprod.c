#include <stdio.h>

void product(int a[][2], int b[][2], int c[][2])
{
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			a[i][j] = (b[i][0] * c[0][j]) + (b[i][1] * c[1][j]);
		}
	}
}

int main()
{
	int a[2][2] = {{1,2},{3,4}};
	int b[2][2] = {{5,6},{7,8}};
	int prod[2][2];
	product(prod,a,b);
	printf("%d\t%d\n%d\t%d\n",prod[0][0],prod[0][1],prod[1][0],prod[1][1]);
}
