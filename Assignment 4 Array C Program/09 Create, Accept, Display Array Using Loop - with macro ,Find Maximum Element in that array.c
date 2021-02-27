/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// Statements = 09 Create, Accept, Display Array Using Loop - with macro ,Find Maximum Element in that array.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define Max 7
int main()
{
    int iArr[Max]={0},i=0,max=0;

    printf("\n Accept Array Elements : \n");

    for(i=0;i<Max;i++)
    {
        printf("\n Enter Array Elements : ");
        scanf("%d",&iArr[i]);
    }

    printf("\n Display All Elements : \n");
    for(i=0;i<Max;i++)
    {
        printf("\n\t\t\t %d",iArr[i]);
    }
    i=0;
    max = iArr[i++];
    while(i<Max)
    {
        if(iArr[i]>max)
        {
            max=iArr[i];
        }
        i++;
    }
    printf("\n\n Maximum Elements Of Array is = %d",max);
    getch();
    return 0;

}
