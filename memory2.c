#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size = 0;
	int *Arr = NULL;
	
	printf("Enter the size of array\n");
	scanf("%d",&size);                        // 7

	Arr = (int *)malloc(sizeof(int) * size); // Arr = (int *)malloc(28);
                                                                 //  |
	// Use the memory                                            // 7*4

	free(Arr);

	return 0;
}