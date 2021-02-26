//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement = A Program To Accept Number From User As Num1 And Num2 And Print (Num1)^Num2 i.e Num1 Raised
/////                        To Num2 Using Recursion.c (Recursive Power Function)
//////              I/P = (2)^(3)
//////            O/P = 8
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int Power_Function(int iNo1, int iNo2)
{
       static int i = 0, Pow = 1;
        if(iNo2 == 0)
        {
            return Pow;
        }
        else
        {
            Pow = Pow * iNo1;
            return Power_Function(iNo1,iNo2-1);
        }
}
int main()
{
        int Num1 = 0, Num2 = 0, iRet = 0;

        printf("\n Enter Two Numbers To Find its Power : ");
        scanf("%d%d",&Num1,&Num2);

        iRet =  Power_Function(Num1,Num2);

        printf("\n Power Of Given Number is = %d",iRet);

        printf("\n\n Thank You..!!!");

        getch();
        return 0;
}
