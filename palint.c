#include <stdio.h>
#include <stdbool.h>

bool palindrome (int a)
{
	int length = 0 ;
	int dump = a;
	bool flag = true;
	while (dump>0)
	{
		dump = dump/10;
		length++;
	}
	for (int i=0;i<(length/2);i++)
	{


}

int main()
{
	long num;
	printf("Enter number to check its palindromity lmao: ");
	scanf("ld",&num);
	bool ans = palindrome(num);
	if (ans)
		printf("Number is palindrome\n");
	else
		printf("Number is not palindrome\n");
}
