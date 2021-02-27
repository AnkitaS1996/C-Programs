////////////////////////////////////////////////////////////////////////////////////////////////
//  Statement = 03 Crate Array of 7 Elements With Null(0) Initilization & Display All Elements
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int main()
{
    int iArr[7]={0};
    int i = 0;
    printf("\n Display All Elements =>> ");
    for(i=0;i<7;i++)
    {
        printf("\n\t\t\t %d",iArr[i]);
    }

    printf("\n Thank You...!!!");
    getch();
    return 0;
}
