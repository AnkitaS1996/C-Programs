/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 11 Create, Accept, Display Array Using Loop - with macro,Find Maximum & Minimum Element in that array.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<conio.h>
#include<stdio.h>
#define MAX 7
int main()
{
    int iArr[MAX]={0},i=0,Max=0,Min=0;

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

    Max=Min=iArr[0];
    for(i=0;i<MAX;i++)
    {
        if(iArr[i]>Max)
        {
            Max = iArr[i];
        }
        if(iArr[i]<Min)
        {
            Min = iArr[i];
        }
    }

    printf("\n\n Maximum Elements Of Array is = %d",Max);
    printf("\n\n Minimum Elements Of Array is = %d",Min);

    getch();
    return 0;
}
