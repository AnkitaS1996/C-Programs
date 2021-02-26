//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///	11.	Q
////	Q 		Q
////	Q		Q 		Q
////	Q		Q 		Q	  	Q
////	Q		Q		Q  		Q		Q 	  
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

	char ch = 'Q';

	for(i = 1; i <= iNo; i++)
	{	
		for(j = 1; j <= i; j++)		
		{
			printf(" %c",ch);
		}
		printf("\n");	
		
	}
	return;
}