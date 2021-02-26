////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////    Statement = Swapping Of Two Number Without Any Third Number
////        Input  =  No1 = 10  No2 = 20
////       Output  =  No1 = 20  No1 = 10
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0,No2 = 0;
    printf("\n Enter Any Two number : ");
    scanf("%d%d",&No1,&No2);

    printf("Number Before Swap No1 = %d N02 = %d.",No1,No2);

    No2 = No1 + No2;
    No1 = No2 - No1;
    No2 = No2 - No1;

    printf("\n Number After Swap No1 = %d No2 = %d.",No1,No2);

    printf("\n Thank You...!!!");
    getch();
    return 0;
}
