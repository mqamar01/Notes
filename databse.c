#include <stdio.h>

typedef struct Car
{
	unsigned int VIN;
	char color[10];
	unsigned int EngineNo;
	char Make[12];
}Car;

int main()
{
	Car Lancer;
	Lancer.VIN = 12431;
	Lancer.color = "White";
	Lancer.EngineNo = 56224;
	Lancer.Make = "Honda";
	printf("Car details as follows:\nVIN = %d\nColor = %s\nEngine Number = %d\nMake = %s\n",Lancer.VIN,Lancer.color,Lancer.EngineNo,Lancer.Make);
	return 0;
}

