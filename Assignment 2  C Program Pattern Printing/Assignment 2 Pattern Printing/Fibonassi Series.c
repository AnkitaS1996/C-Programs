#include<stdio.h>
#include<conio.h>
int main()
{
	int i = 0,cnt = 0, No1 = 0,No2 = 1,No3 = 0;
	printf("\n Enter Count For Fibonassi Series : ");
	scanf("%d",&cnt);

	if(cnt <= 0)
	{
		printf("\n Invalid Number : ");
	} 
	for(i = 0; i < cnt; i++)
	{	
	    printf(" %d",No3);	
		No3 = No1 + No2;
		No2 = No1;
		No1 = No3;
		No3 = No1;
		
	}

	printf("\n Thank You...!!!!");
	getch();
	return 0;
}