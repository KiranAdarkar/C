#include<stdio.h>

#pragma pack(1)    

struct Demo
{
 int i;      //4
 char ch;    //1 
 float f;    //4
 float d;    //4
 char dh;    //1 
 char fh;    //1 
};

int main()
{
	struct Demo dobj;      //15
	
	
printf("Size of dobj is : %d\n",sizeof(dobj));

return 0;
}