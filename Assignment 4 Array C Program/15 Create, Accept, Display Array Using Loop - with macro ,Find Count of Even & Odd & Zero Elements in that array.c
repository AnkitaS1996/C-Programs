////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 15 Create, Accept, Display Array Using Loop - with macro ,Find Count of Even & Odd & Zero Elements in that array.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define MAX 7

int main()
{
    int iArr[MAX]={0},i=0,E_Cnt=0,O_Cnt=0,Null=0;

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
        if(iArr[i]%2==0)
        {
            E_Cnt++;
        }
        if(iArr[i]%2 != 0)
        {
            O_Cnt++;
        }
        if(iArr[i]==0)
        {
            Null++;
        }
        i++;
    }

    printf("\n\n Count Of Even Elements is = %d",E_Cnt);
    printf("\n\n Count Of Odd Elements is = %d",O_Cnt);
    printf("\n\n Count Of Null Elements is = %d",Null);

    printf("\n\n Thank You...!!");
    getch();
    return 0;
}
