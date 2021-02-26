///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement = Accept That Array Element From User By Accept Function Find Minimum From That Array By Using
////                         Find Minimum Element Which Should Be Recursive.c
//////               I/P = 10   2   30  54  88  95
/////              O/P = 2
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define MAX 5

int i = 0;  //// Global Initialization

int Min_Arr_Element(int iArr[])
{
       static int i = 0, min = 0;
        if(i < MAX)
        {
              if(i == 0)
              {
                  min = iArr[i];
              }
               if(min > iArr[i])
               {
                    min = iArr[i];
               }
               i = i + 1;
               return Min_Arr_Element(iArr++);
        }
        return min;
}
int main()
{
        int Arr[MAX] = {0}, iRet = 0;

        for(i = 0; i < MAX; i++)
        {
                printf("\n Enter Number %d Array Of An Element ", i+1);
                scanf("%d",&Arr[i]);
        }

        iRet = Min_Arr_Element(Arr);

        printf("\n Minimum Number Of An Array Element is = %d",iRet);

        printf("\n\n Thanks You..!!!!");

        getch();
        return 0;
}
