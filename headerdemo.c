#include"Marvellous.h"

int main()
{
	struct Demo obj;

	int no = 11;

	float Radius = 30.6f;                 //f is used for guaranteed float or it will be considered as double
	float Area = PI * Radius * Radius;

	IPTR ptr = &no;

	printf("Area is : %f\n",Area);

	printf("Value of no is : %d\n",*ptr);

	return 0;
}