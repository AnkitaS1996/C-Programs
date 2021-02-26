//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///	8.	15
////	20 	25
////	30	35 	40
////	45 	50 	55 	60
////	65	70	75 	80 	85
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

	int cnt = 15;
	for(i = 1; i <= iNo; i++)
	{
		
		for(j = 1; j <= iNo; j++)
		{
			if(j<=i)
			{
				printf(" %-4d",cnt);
				cnt = cnt + 5;
				
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