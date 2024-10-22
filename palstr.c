#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindrome(char *ptr)
{
	int i = 0;
	int j = strlen(ptr)-1;
       	bool flag = 1;
	while (j>i)
	{
		if (ptr[j] != ptr[i])
			flag = 0;
		i++;j--;
	}
	return flag; 
}

int main()
{
	char string[50];
	scanf("%s",&string);
	bool ans = palindrome(string);
	if (ans)
		printf("String is Palindrome!\n");
	else
		printf("String is not palindrome!\n");
}
