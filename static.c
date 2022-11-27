#include<stdio.h>

void Demo()
{
int A = 10;
A++;
printf("Value from Demo is : %d\n",A);
}

int main()
{
Demo();
Demo();
Demo();

return 0;
}