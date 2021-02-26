///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement = Accept That  Array Elements From User By Accept Function Find Maximum From That Array By
//////                        Using Find Maximum Element Which Should Be Recursive.c
//////                I/P =  10 30 50 60 80
//////              O/P =  80
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define Max 5
int i = 0;    /////Global  Initialization
int Find_Max_Arr_Element(int iArr[])
 {
         static int i = 0, imax = 0;

         if(i < Max)
         {
                 if(i == 0)
                 {
                     imax = iArr[i];
                 }

                 if(imax < iArr[i])
                 {
                        imax = iArr[i];
                 }
                 i = i + 1;
                 return Find_Max_Arr_Element(iArr++);
         }
         return imax;
 }
 int main()
 {
         int Arr[Max] = {0}, iRet = 0, i = 0;
         for(i = 0; i < Max; i++)
         {
                 printf("\n Enter a Number %d Element Of Array is = ", i+1);
                 scanf("%d",&Arr[i]);
         }
         iRet = Find_Max_Arr_Element(Arr);
         printf("\n Maximum Number is = %d",iRet);

         printf("\n\n Thank You..!!!");

         getch();
         return 0;
 }
