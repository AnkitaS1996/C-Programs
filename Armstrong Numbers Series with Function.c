#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter Start Numbers of Series : ");
    scanf("%d",&No1);

    printf("\n Enter Last Numbers of Series : ");
    scanf("%d",&No2);

    Amstrong_Series(No1,No2);

    _getch();
    return 0;
}

void Amstrong_Series(int Num1,int Num2)
{
    int Temp = 0,Digit = 0,i = 0,Sum = 0;

    for(i = Num1;i <= Num2;i++)
    {
        Temp = i;
        while(Temp > 0)
        {
            Digit = Temp%10;
            Temp = Temp / 10;
            Sum = Sum + (Digit*Digit*Digit);
        }
        if(Sum == i)
        {
            printf("\t %d",i);
        }
        Sum = 0;
    }
    return;
}


