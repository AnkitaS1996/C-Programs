//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 13 Create, Accept, Display Array Using Loop - with macro ,Find Count of Odd Elements in that array.c
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define MAX 7

int main()
{
    int iArr[MAX]={0},i=0,Odd_Cnt=0;

    printf("\n Accept Array Elements : \n");

    for(i=0;i<MAX;i++)
    {
        printf("\n Enter Array Elements : ");
        scanf("%d",&iArr[i]);
    }

    printf("\n Display Elements Are ==>> ");

    for(i=0;i<MAX;i++)
    {
        printf("\n\t\t\t %d",iArr[i]);
    }
    i=0;
    while(i<MAX)
    {
        if(iArr[i]%2 != 0)
        {
            Odd_Cnt++;
        }
        i++;
    }

    printf("\n Count Of Odd Elements in Array is = %d.",Odd_Cnt);

    printf("\n\n Thank You...!!");

    getch();
    return 0;

}
