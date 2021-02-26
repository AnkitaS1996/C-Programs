////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement =  Program To Accept  Number Form User as x and y and print x^y (Power Function).c
/////            1. Input = 2   3    //(2^3)                     2. Input =  5     6   //(5^6)
//////              Output = 8                                           Output =  15625
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

//////Function Declaration
int Power(int,int);

int main()
{
            int iNo1 = 0, iNo2 = 0, iRet = 0;
            printf("\n=====================**********===========================\n");

            printf("\n Enter  2 Number To Find its Power : ");
            scanf("%d%d",&iNo1,&iNo2);
            printf("\n=====================**********===========================\n");
            printf("\n");

            iRet = Power(iNo1,iNo2);

            printf(" Power Of Given Number is = %d.",iRet);
            printf("\n");
            printf("\n=====================**********===========================\n");

            printf("\n Thank You..!!!!\n");
            printf("\n=====================**********===========================\n");

}

int Power(int iNumber1,int iNumber2)
{
            int i = 0, iPow = 1;

            for(i=0; i < iNumber2; i++ )
            {
                    iPow = iPow * iNumber1;
            }
            return iPow;
}
