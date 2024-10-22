#include <stdio.h>
#include <stdbool.h>

#define IFSMALL(n)	((n) >= 'A' && (n) <= 'Z')

int main()
{
	char c = 'C';
	bool ans = IFSMALL(c);
	if (ans)
		printf("Upper case!\n");
	else 
		printf("Lower Case!\n");
	return 0;
}	
