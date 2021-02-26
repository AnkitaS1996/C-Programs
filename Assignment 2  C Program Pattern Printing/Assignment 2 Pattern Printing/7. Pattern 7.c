//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///	7.	7
////	14 	21
////	28	35 	42
////	49 	56 	63 	70
////	77	84	91 	98 	105
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
	int i = 0, j = 0,temp = 1;

	int cnt = 7;
	for(i = 1; i <= iNo; i++)
	{
		
		for(j = 1; j <= iNo; j++)
		{
			if(j<=i)
			{
				printf(" %-4d",cnt*temp);	
				temp++;
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
