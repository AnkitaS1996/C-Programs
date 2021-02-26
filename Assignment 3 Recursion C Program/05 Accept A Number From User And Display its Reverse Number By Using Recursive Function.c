////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement = Accept A Number From User And Display its Reverse Number By Using Recursive Function.c
/////               I/P =  12365
/////              O/P =  56321
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int Dispaly_Reverse_Number(int);

int main()
{
        int No = 0, iRet = 0;
        printf("\n Enter Number To Display Its Reverse Number : ");
        scanf("%d",&No);
        iRet = Display_Reverse_Number(No);
        printf("\n Given Reverse Number is = %d",iRet);
        printf("\n\n Thank You");
        getch();
        return 0;
}

int Display_Reverse_Number(int iNum)
{
        static int temp = 0, Rev = 0;

        temp = iNum;
        if(temp == 0)
        {
                return Rev;
        }
        else
        {
                 Rev = (Rev * 10) + (temp % 10);

                 return Display_Reverse_Number(temp/10);
        }
}
