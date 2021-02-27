//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 17 Create, Accept, Display Array Using Loop - with macro,Find Maximum & 2nd Maximum Element in that array.c
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define MAX 5
void Display_Elements(int*);
int main()
{
    int iArr[MAX]={0},i = 0,Max1=0,Max2=0;

    printf("\n Accept Array Elements : \n");

    for(i=0;i<MAX;i++)
    {
        printf("\n Enter Any Elements is = ");
        scanf("%d",&iArr[i]);
    }

    Display_Elements(iArr);

    Max1=iArr[0];


    for(i=0;i<MAX;i++)
    {
        if(iArr[i]>Max1)
        {
            Max2=Max1;
            Max1=iArr[i];
        }
        else if(iArr[i]>Max2 && iArr[i] < Max1)
        {
            Max2=iArr[i];
        }
    }

    printf("\n\n Maximum 1st Number of Elements of Array is = %d",Max1);

    printf("\n\n Maximum Second Number Of Elements of array is = %d",Max2);

    printf("\n\n Thank You...!!!");
    getch();
    return 0;
}

void Display_Elements(int iArr[])
{
    int i = 0;
    printf("\n\n Display Elements : ");
    for(i=0;i<MAX;i++)
    {
        printf("\n\t\t   %d",iArr[i]);
    }
}
