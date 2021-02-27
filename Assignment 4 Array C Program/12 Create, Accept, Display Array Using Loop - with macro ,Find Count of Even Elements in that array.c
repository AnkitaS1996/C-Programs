/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 12 Create, Accept, Display Array Using Loop - with macro ,Find Count of Even Elements in that array.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<conio.h>
#include<stdio.h>

#define MAX 7

int main()
{
    int iArr[MAX]={0},i=0,E_Count=0;

    printf("\n Accept Array Elements : \n");

    for(i=0;i<MAX;i++)
    {
       printf("\n Enter Array Elements : ");
       scanf("%d",&iArr[i]);
    }

    printf("\n\n Display All Elements : ");

    for(i=0;i<MAX;i++)
    {
        printf("\n\t\t\t %d",iArr[i]);
    }

    for(i=0;i<MAX;i++)
    {
        if(iArr[i]%2==0)
        {
            E_Count++;
        }
    }
    printf("\n Count Of Even Element in that array is = %d",E_Count);

    printf("\n\n Thank You...");

    getch();
    return 0;
}
