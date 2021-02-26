///////////////////////////////////////////////////////////////////////////////
/*
1.Write_a_Program_To_Print_Below_Pattern.c
     A
     B C
     D E F
     G H I J
     K L M N O
*/
///////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
#include <conio.h>

void Pattern_Print();

int main()
{
	Pattern_Print();

	getch();
	return 0;
}

void Pattern_Print()
{
	int iNo = 0, i = 0, j = 0;

	printf("\n Enter a Number To Print Pattren => ");
	scanf("%d",&iNo);

	for ( i = 0; i < iNo; i++)
	{
		for ( j = 0; j < iNo; j++)
		{
			/* code */

			if (i >= j)
			{
				/* code */
				printf(" * ");
			}
			else	
			{
				printf("   ");
			}
		}
		printf("\n");
	}

	return;
}