//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///	1.	A
////	B	C
////	D	E 	F
////	G 	H 	I 	J
////	K	L	M 	N 	O
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
	char ch = 'A';

	for(i = 1; i <= iNo; i++)
	{
		for(j = 1; j <= iNo; j++)
		{
			if(j <= i)
			{
				printf(" %c",ch);
				ch++;
			}
			else
			{
				printf("   ");
		
			}

		}
		printf("\n");
	}	
}