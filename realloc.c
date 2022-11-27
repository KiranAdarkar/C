#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = NULL;

	p = (int *)malloc(sizeof(int));   //Dynamic memory allocation

	//Use the memory

	p = (int *)realloc(p , 15 * sizeof(int));
	
	//Use the memory

	free(p);

    return 0;
}