//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///	12.	7
////	7 		7
////	7		7		7
////	7		7 		7	  	7
////	7		7		7 		7		7	  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int);

int main()
{
	int No = 0;
	printf("\n Enter Number To Print Pattern : ");
	scanf("%d",&No);
	Pattern(No);
	printf("\n Thank You....!!!");
	getch();
	return 0;
}

void Pattern(int iNo)
{
	int i = 0, j = 0;

	int No1 = 7;

	for(i = 1; i <= iNo; i++)
	{	
		for(j = 1; j <= i; j++)		
		{
			printf(" %d",No1);
		}
		printf("\n");	
		
	}
	return;
}