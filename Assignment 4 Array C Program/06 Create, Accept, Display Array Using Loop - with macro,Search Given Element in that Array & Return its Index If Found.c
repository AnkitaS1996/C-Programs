//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 06 Create, Accept, Display Array Using Loop - with macro,Search Given Element in that Array & Return its Index If Found
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define MAX 5

void Display(int*);

int main()
{
    int iArr[MAX]={0},i=0,No=0;
    printf("\n =================================================== \n");
    printf("\n Accept Array Elements : \n");
    printf("\n =================================================== \n");

    for(i = 0;i < MAX;i++)
    {
        printf("\n Enter Elements : ");
        scanf("%d",&iArr[i]);
    }
    printf("\n =================================================== \n");
    Display(iArr);
    printf("\n");
    printf("\n =================================================== \n");
    printf("\n Enter Elements To  Returns its Index Of that Found: ");
    scanf("%d",&No);
    printf("\n =================================================== \n");
    for(i=0;i<MAX;i++)
    {
        if(iArr[i] == No)
        {
            //printf("\n Match Elements Found At index %d",i);
            break;
        }
    }

    if(i == MAX)
    {
        printf("\n Not Match Return Index is Found");
    }
    else
    {
        printf("\n Match Elements Found At index %d",i);
    }
    printf("\n =================================================== \n");
    printf("\n Thank You...!!!\n");
    printf("\n =================================================== \n");
}
void Display(int iArr[])
{
    int i = 0;
    printf("\n Display All Elements Are : ");
    printf("\n =================================================== \n");
    for(i=0;i<MAX;i++)
    {
        printf("\n Elements Of is = %d",iArr[i]);
    }
    printf("\n");
    printf("\n =================================================== \n");
    return;
}



