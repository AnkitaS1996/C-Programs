////////////////////////////////////////////////////////////////////////////////////////////
//// Statement = 02 Create Array With Initilization & Display All Elements
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n====== 02 Create Array With Initilization & Display All Elements =======\n");
    int iArr[10]={10,20,30,40,50,45,36,27,88,90};
    int i = 0;

    printf("\n Display All Element : ");
    for(i=0;i<=10;i++)
    {
        printf("\n\t\t\t%d",iArr[i]);
    }
    printf("\n Thank You..!!!");
    getch();
    return 0;
}
