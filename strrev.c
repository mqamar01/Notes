#include <stdio.h>
#include <stddef.h>
#include <string.h>

void strrev(char *arr)
{
	int a = 0;
	int b = strlen(arr)-1;
	while (b>a)
	{
		char i = arr[b];
		arr[b] = arr[a];
		arr[a] = i;
		a++;b--;
	}
}

int main()
{
	char name[] = "Murtaza Qamar";
	strrev(name);
	printf("%s\n",name);
	return 0;
}
