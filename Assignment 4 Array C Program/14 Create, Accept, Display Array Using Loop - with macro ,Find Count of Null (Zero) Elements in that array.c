/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  Statements = 14 Create, Accept, Display Array Using Loop - with macro ,Find Count of Null (Zero) Elements in that array.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define MAX 7

int main()
{
    int iArr[MAX]={0},i=0,Null=0;

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
    UP:
    if(i<MAX)
    {
        if(iArr[i]==0)
        {
            Null++;
        }
        i++;
        goto UP;
    }

    printf("\n\n Count Of Null Elements is = %d.",Null);

    printf("\n Thank You...!!");
    getch();
    return 0;
}
