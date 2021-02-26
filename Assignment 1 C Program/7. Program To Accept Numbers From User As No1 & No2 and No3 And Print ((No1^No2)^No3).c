/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement = Program To Accept Numbers From User As No1 & No2 and No3 And Print ((No1^No2)^No3).c
/////         1. Input =  2   3   4       ((2^3)^4)          2.  Input =      (2^6)^3
/////          Output = 4096                                         Output =    262144
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
////Function Declaration
int Power(int,int,int);

int main()
{
            int iNo1 = 0, iNo2 = 0, iNo3 = 0, iRet = 0;
            printf("\n=====================**********===========================\n");

            printf("\n Enter Any Three Numbers : ");
            scanf("%d%d%d",&iNo1,&iNo2,&iNo3);
            printf("\n=====================**********===========================\n");
            printf("\n");

            iRet = Power(iNo1,iNo2,iNo3);

             printf(" Power Of Given Number is = %d.",iRet);
             printf("\n");
             printf("\n=====================**********===========================\n");

              printf("\n Thank You..!!!!\n");
              printf("\n=====================**********===========================\n");

              getch();
              return 0;

}

int Power(int iNumber1, int iNumber2, int iNumber3)
{
            int i = 0, iPow = 1;

            for(i = 1; i <= (iNumber2 * iNumber3); i++)
            {
                    iPow = iPow * iNumber1;
            }
            return iPow;
}
