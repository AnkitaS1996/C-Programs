//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///	6.	1
////	2 	3
////	4	5 	6
////	7 	8 	9 	10
////	11	12	13 	14 	15
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
	
	int cnt = 1;
	for(i = 1; i <= iNo; i++)
	{
		for(j = 1; j <= iNo; j++)
		{
			if(i==j || j<=i)
			{
				printf(" %-3d",cnt);
				cnt++;											
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