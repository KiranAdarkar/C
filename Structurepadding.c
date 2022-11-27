#include<stdio.h>

struct Demo
{
 int i;      //4
 char ch;    //1 -> 4
 float f;    //4
 float d;    //4
 char dh;    //1 -> 4
 char fh;    //1 ---^
};

int main()
{
	struct Demo dobj;      //20
	
	
printf("Size of dobj is : %d\n",sizeof(dobj));

return 0;
}