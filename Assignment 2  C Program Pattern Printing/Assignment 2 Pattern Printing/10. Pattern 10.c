//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///	10.	2
////	2 		4
////	2		4 		6
////	2		4 		6	  	8
////	2		4		6  		8		10 	  
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
	int i = 0, j = 0, temp = 1;

	int cnt = 2;

	for(i = 1; i <= iNo; i++)
	{	
		temp = 1;
		for(j = 1; j <= i; j++)		
		{
			printf(" %-3d",cnt * temp);
			temp++;
		}
		printf("\n");	
		
	}
	return;
}
