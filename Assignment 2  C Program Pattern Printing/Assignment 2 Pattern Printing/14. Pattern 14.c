/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///	14.	A	B	C  	D 	E
////	B 			    B
////	C			    C
////	D		   	    D
////	A	B	C 	D	E	  
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

	char ch1 = 'A';
	char ch2 = 'A';

	for(i = 1; i <= iNo; i++)
	{	
		
		for(j = 1; j <= iNo; j++)		
		{
			ch1 ='A';
			if( i==1 || j == 1  || i == iNo || j == iNo)
			{
				if(i == 1 || i == iNo)
				{
					printf(" %c",ch1);
					ch1++;
				}
				else
				{
					printf(" %c",ch2);
				}	
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n");
		ch2++;
		
	}
	return;
}
