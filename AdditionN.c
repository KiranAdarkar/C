/*
     Steps to develop the application
	 Step 1 : Understand the problem statement
	 Step 2 : Write the Algorithm
	 Step 3 : Decide the programming language(C/C++/Java/Python/_____)
	 Step 4 : Write the program 
	 Step 5 : Test the program
*/

//Accept N numbers from user and perform the addition 

//Input
//Value of N = 51
//Values : 10 20 30 40 50

//Output
//Addition is : 150

//Algorithm
/*
    Start
	      Accept the number of elements from user
		  Allocate the memory to store that numbers
		  Accept the numbers from user
		  Perform addition of all numbers
		  Display the addition
	END
*/

#include<stdio.h>               //for printf and scanf
#include<stdlib.h>              //for malloc and free

////////////////////////////////////////////////////////////
//
//  Application Name : Addition of N numbers
//  Input :  N numbers
//  Output : Addition
//  Author : Kiran Dilip Adarkar
//  Date : 18 September 2022
//
////////////////////////////////////////////////////////////

int main()
{
	int *Arr = NULL;         //Pointer to hold the address of array
	int iSize = 0;           //Variable to hold size of array
	register int i = 0;               //Loop Counter
	int iSum = 0;            //To hold the addition

printf("Please enter how many elements you want?\n");
scanf("%d",&iSize);

//Allocate the memory
Arr = (int *)malloc(iSize * sizeof(int) );
printf("Memory allocation is successfull\n");

printf("Please enter the elements\n");

//    1       2        3
for(i = 0; i < iSize; i++)
{
//        4
	scanf("%d",&Arr[i]);
}

//perform Addition
//     1       2       3
for(i = 0; i < iSize; i++)
{
//             4
	iSum = iSum + Arr[i];
}

printf("Addition is : %d\n",iSum);

free(Arr);
printf("Memory gets deallocated\n");

return 0;
}