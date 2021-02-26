///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////   Statement = Accept A Number From User And Display that Number Of Fibonacci Series by Recursive Function.
////                I/P = Count Of Number = 7
////               O/P =    0   1   1   2   3   5   8
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Fibonacci_Series(int iNo,int iNo1,int iNo2,int iNo3)
{
        if(iNo == 0)
        {
            return;
        }
        else
        {
            printf(" %d",iNo3);
            iNo3 = iNo2 + iNo1;
            iNo2 = iNo1;
            iNo1 = iNo3;
            iNo3 = iNo1;
            return Fibonacci_Series(iNo - 1,iNo1,iNo2,iNo3);
        }
}

int main()
{
        int cnt = 0,No1 = 0, No2 = 1, No3 = 0;

        printf("\n Enter Count Of Number for Fibonacci Series : ");
        scanf("%d",&cnt);

        Fibonacci_Series(cnt,No1,No2,No3);

        printf("\n\n Thank You..!!!");
        getch();
        return 0;
}
