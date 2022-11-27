#include<stdio.h>

int main()
{
	int iToken = 0;

	printf("Tumcha token number sanga\n");
	scanf("%d",&iToken);

	switch(iToken)
	{
		case 11:
		    printf("Mulachi chappal milali\n");
			break;
		case 21:
		    printf("Mulichi chappal milali\n");
			break;
		case 51:
		    printf("Aai chi chappal milali\n");
			break;
		case 101:
		    printf("Vadlanchi chappal milali\n");
			break;
		default:
		    printf("Ashi chappal nahi ahe\n");
			break;
	}
 return 0;
}