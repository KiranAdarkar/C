#include<stdio.h>

struct Demo
{
 int i;
 float f;
 double d;
};

union Hello
{
	int i;
	float f;
	double d;
};

int main()
{
	struct Demo dobj;
	union Hello hobj;

	dobj.i = 11;
	dobj.f = 90.8;
	dobj.d = 90.587;

	hobj.f = 90.4;

printf("Size of structure is : %d\n",sizeof(dobj));
printf("Size of  is : %d\n",sizeof(hobj));
printf("i of dobj is : %d\n",dobj.i);

printf("f of hobj is : %f\n",hobj.f);
printf("d of hobj is : %lf\n",hobj.d);

return 0;
}