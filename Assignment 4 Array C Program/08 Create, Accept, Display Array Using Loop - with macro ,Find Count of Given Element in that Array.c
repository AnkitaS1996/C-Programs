///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = 08 Create, Accept, Display Array Using Loop - with macro ,Find Count of Given Element in that Array.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define Max 7

void Display_Elements(int*);

int main()
{
    int iArr[Max] = {0},i = 0,Num = 0,Cnt=0;

    printf("\n =================================================== \n");
    printf("\n Accept Array Of An Elements Are == >>\n");
    printf("\n =================================================== \n");

    for(i=0;i<Max;i++)
    {
        printf("\n Enter Array Elements : ");
        scanf("%d",&iArr[i]);
    }

    Display_Elements(iArr);
    printf("\n");

    i=0;
    printf("\n Enter Elements of array  to its Count of element is : ");
    scanf("%d",&Num);
    while(i<Max)
    {
        if(iArr[i]==Num)
        {
            Cnt++;
        }
        i++;
    }
    printf("\n Count of Elements is %d",Cnt);

    getch();
    return 0;

}
void Display_Elements(int iArr[])
{
    int i = 0;
    printf("\n =================================================== \n");
    printf("\n Display Array Elements : ");

    for(i=0;i<Max;i++)
    {
        printf("\n\t\t\t %d",iArr[i]);
    }
    printf("\n =================================================== \n");
    return;
}
