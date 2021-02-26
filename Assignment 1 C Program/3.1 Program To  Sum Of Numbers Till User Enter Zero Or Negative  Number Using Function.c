////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////   Statement = Program To Sum Of Numbers Till User Enter Zero Or Negative Numbers.c
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int Sum_Calculator(int);

int main()
{
               int iNo = 0, iRet = 0;
               printf("\n=====================**********===========================\n");

               iRet = Sum_Calculator(iNo);

               printf("\n Number Of  Sum  is = %d",iRet);
               printf("\n=====================**********===========================\n");

               printf("\n Thank You..!!!!\n");
               printf("\n=====================**********===========================\n");

               getch();
               return 0;

}

int Sum_Calculator(int iValue)
{
            int Sum  = 0,i = 0;
            for(;;)
            {
                        printf("\n Enter Number : ");
                        scanf("%d",&iValue);
                        printf("\n=====================**********===========================\n");
                        if( iValue <= 0)
                        {
                                break;
                        }
                        Sum = Sum + iValue;
            }
            return Sum;
}
