//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////   Ascii Conversion Of A to Z And a to z
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = "A";
    printf("\n=======================****************************=========================\n");
    for(ch = 'A' ; ch <= 'Z'; ch++)
    {
        printf("\n\t\t %c = %d \t\t%c = %d",ch,ch,ch + 32,ch + 32);
    }
    printf("\n");
    printf("\n=======================****************************=========================\n");

    printf("\n Thank You...!!!!");
    printf("\n=======================****************************=========================\n");
    getch();
    return 0;
}
