#include <stdio.h>

void product(int a[2][2], int b[2][2], int c[2][2])
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
	int a[2][2], b[2][2],c[2][2];
	printf("Enter elements of first matrix: ");
	scanf("%d,%d,%d,%d",&a[0][0],&a[0][1],&a[1][0],&a[1][1]);
	printf("Enter elements of second matrix: ");
	scanf("%d,%d,%d,%d",&b[0][0],&b[0][1],&b[1][0],&b[1][1]);
	product(c,a,b);
	printf("\n%d\t%d\n%d\t%d\n",c[0][0],c[0][1],c[1][0],c[1][1]);
	return 0;
}
