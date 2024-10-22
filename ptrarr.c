//Create an array of 10 pointers pointing to different cities. Then pass that array to a function that 
//stores & prints the array in reverse alphabetical order.

#include <stdio.h>

void display(char* arr[10])
{
	for (int i=0;i<10;i++)
	{
		printf("%s\n",arr[i]);
	}
}
int main()
{
	char a0 = "Karachi";
	char a1 = "Amsterdam";
	char a2 = "Rio";
	char a3 = "Birmingham";
	char a4 = "Moscow";
	char a5 = "Pittsburgh";
	char a6 = "Arlington";
	char a7 = "Austin";
	char a8 = "Sochi";
	char a9 = "Baku";
	char* arr[10] = {a0,a1,a2,a3,a4,a5,a6,a7,a8,a9};
	//function(arr);
	display(arr);
}
