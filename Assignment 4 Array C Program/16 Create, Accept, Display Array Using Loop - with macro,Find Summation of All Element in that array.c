/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 16 Create, Accept, Display Array Using Loop - with macro,Find Summation of All Element in that array.c
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define MAX 5

int main()
{
    int iArr[MAX]={0},i=0,Sum=0;

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
        Sum = Sum + iArr[i];
        i++;
    }
    printf("\n\n Summation Of All The Element in that Array = %d",Sum);

    printf("\n\n Thank You...!!");
    getch();
    return 0;
}

