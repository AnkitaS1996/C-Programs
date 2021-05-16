#include<stdio.h>
#include<conio.h>

int Is_Perfect(int input1)
{
    int i = 1,Sum = 0;

    while(i<input1)
    {
        if(input1%i == 0)
        {
            Sum += i;
        }
        i++;
    }

    return(Sum == input1)? 1 : 0;
}
int main()
{
    int No = 0,iRet = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&No);

    iRet = Is_Perfect(No);

    //(iRet)? printf("\n Given Number %d is Perfect Number.\n",No) : printf("\n Given Number %d is Not Perfect Number\n",No);
    (iRet)? printf("\n Output ==> 1 \n") : printf("\n Output ==> 0 \n");

    printf("\n Thank You..!!!");

    _getch();
    return 0;
}
