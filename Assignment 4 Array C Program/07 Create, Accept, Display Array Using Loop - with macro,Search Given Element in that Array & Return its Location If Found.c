////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 07 Create, Accept, Display Array Using Loop - with macro,Search Given Element in that Array & Return its Location If Found.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define MAX 5

void Display_Elemnts(int*);

int main()
{
    int iArr[MAX]={0},i=0,iNum = 0;
    printf("\n =================================================== \n");
    printf("\n Accepts Elements Of Array : \n");
    printf("\n =================================================== \n");

    for(i=0;i<MAX;i++)
    {
        printf("\n Enter Array Elements is == > ");
        scanf("%d",&iArr[i]);
    }
    printf("\n =================================================== \n");
    Display_Elements(iArr);

    printf("\n Search Given Elements in that array & its Location if Found : ");
    scanf("%d",&iNum);

    for(i=0;i<MAX;i++)
    {
        if(iArr[i] == iNum)
        {
            break;
        }
    }
    if(i==MAX)
    {
        printf("\n Given Elements Of Array its Location Not Found.");
    }
    else
    {
        printf("\n Given Elements Of its Location = %d",i+1);
    }
    printf("\n =================================================== \n");
    printf("\n Thank You...!!!\n");
    printf("\n =================================================== \n");
    getch();
    return 0;
}

void Display_Elements(int iArr[])
{
    int i = 0;
    printf("\n =================================================== \n");
    printf("\n Display All Elements is == >> \n");
    printf("\n =================================================== \n");
    while(i<MAX)
    {
        printf("\n\t\t\t %d",iArr[i]);
        i++;
    }
    printf("\n =================================================== \n");
    return;
}
