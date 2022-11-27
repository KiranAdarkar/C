#include<stdio.h>


void Fun()
{
printf("Inside function\n");
}

int main()
{
Fun();

void (*fptr)();

fptr = Fun;

fptr();
 
return 0;
}