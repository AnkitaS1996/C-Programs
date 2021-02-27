/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = 04 Crate Array of 7 Elements With Null(0) Initilization & Accept All Elements
///                 without Loop Display All Elements
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int main()
{
   int iArr[7]={0},i=0,iRet=0;

   printf("\n =================================================== \n");
   UP:
   if(i<7)
   {
       printf("\n Enter [%d] Array Element : ",i+101);
       scanf("%d",&iArr[i]);
       i++;
       goto UP;
   }
   printf("\n =================================================== \n");

   Display(iArr);

   printf("\n =================================================== \n");
   printf("\n Thank You...!!!\n");
   printf("\n =================================================== \n");

   getch();
   return 0;
}
void Display(int iArr[7])
{
    int j = 0;

    printf("\n =================================================== \n");
    printf("\n Display All Elements ==> \n");
    Up:
    if(j<7)
    {
        printf("\n\t\t\t %d",iArr[j]);
        j++;
        goto Up;
    }
    printf("\n =================================================== \n");

    return;
}







