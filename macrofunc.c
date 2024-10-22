#include <stdio.h>

#define PI	3.142
#define AREA(x)	PI*x*x

int main()
{
	int a = 3;
	float answer = AREA(a);
	printf("%0.2f\n",answer);
}
