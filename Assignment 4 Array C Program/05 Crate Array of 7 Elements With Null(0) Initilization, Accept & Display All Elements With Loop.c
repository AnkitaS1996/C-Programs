/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 05 Crate Array of 7 Elements With Null(0) Initilization, Accept & Display All Elements
///                 with Loop
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int main()
{
    int iArr[7]={0},i=0;
    printf("\n =================================================== \n");
    while(i<7)
    {
        printf("\n Enter %d of Elements = ",i+101);
        scanf("%d",&iArr[i]);
        i++;
    }
    printf("\n =================================================== \n");
    Display(iArr);
    printf("\n =================================================== \n");
    printf("\n Thank You...!!!\n");
    printf("\n =================================================== \n");
}
void Display(int iArr[7])
{
    int j = 0;
    printf("\n Display All Elements == >> \n ");
    printf("\n =================================================== \n");
    for(j = 0;j<7;j++)
    {
        printf("\n Elements of %d is => %d.",j+101,iArr[j]);
    }
    printf("\n");
    printf("\n =================================================== \n");
    return;
}
