#include<stdio.h>
#include<conio.h>

int Is_Prime(int);

void Is_Prime_Given_Range(int No1,int No2)
{
    int F_Small = 0,Big_Last = 0,Cnt = 0;

    printf("\n Prime Numbers Of Given Range is ==> \n");

    while(No1 <= No2)
    {
        if(Is_Prime(No1))
        {
            printf(" %d",No1);

            (Cnt == F_Small)? (F_Small = No1) : (Big_Last = No1);
        }
        No1++;
    }

    printf("\n\n Difference Between Smallest And Biggest Prime Number In Given Range is = %d.",Big_Last-F_Small);
}

int Is_Prime(int iNum)
{
    int i = 0;

    if(iNum<2)
    {
        return 0;
    }

    for(i = 2;i <= iNum/2;i++)
    {
        if(iNum % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int iNo1 = 0,iNo2 = 0;

    printf("\n Enter Any Two Numbers : ");
    scanf("%d%d",&iNo1,&iNo2);

    Is_Prime_Given_Range(iNo1,iNo2);

    printf("\n\n Thank You..!!!");
    _getch();
    return 0;
}
