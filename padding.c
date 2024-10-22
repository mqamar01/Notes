#include <stdio.h>

struct Aircraft(__attribute_pa)
{
	char Model[20];
	int VIN;
	int PAX;
	int MTOW;
	char Make[10];
};

struct Boat
{
	char Model[10];
	int VIN;
	int Capacity;
	int BuyonccyRatio;
	char Make[9];
};

int main()
{
	struct Aircraft B777;
	struct Boat Speedy;
	printf("%ld\n",sizeof(B777));
	printf("%ld\n",sizeof(Speedy));
}
