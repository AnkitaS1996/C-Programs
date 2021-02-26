///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////   Statement = Sum Of Numbers Of User Defined Count.c
///////                      Example =  Enter How Many Numbers You Want To Calculate Sum = 5
/////                                           Accept N Numbers And Same Time Calculate Their Sum Using Recursive Function.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int CalculateSum(int Num)
{
            int iNo =0,Sum = 0;
            if(Num == 0)
            {
                    return Sum;
            }
            else
            {
                    printf("\n Enter Number : ");
                    scanf("%d",&iNo);
                    Sum = Sum + iNo;
                    return Sum + CalculateSum(Num -1);
            }
}

int main()
{
            int No = 0, iRet = 0;

            printf("\n Enter Number Of Count To Calculate Sum : ");
            scanf("%d",&No);

            iRet = CalculateSum(No);

            printf("\n Given Number Of Sum = %d",iRet);

            printf("\n\n Thank You...!!!");
            getch();
            return 0;
}


