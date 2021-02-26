////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement = Write Program To Display Table Of Number Of any Given Range.c
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void DisplayTable(int,int);

int main()
{
            int iStart = 0, iEnd = 0;
            printf("\n=====================***** Table Print Range *****===========================\n");

            printf("\n\n Enter Number To Display Print Table : ");
            scanf("%d%d",&iStart,&iEnd);
            printf("\n========================*************=============================\n");
            DisplayTable(iStart,iEnd);

            printf("\n Thank You...!!!!\n");
            printf("\n========================*************=============================\n");
            getch();
            return 0;
}
void DisplayTable(int iNo1,int iNo2)
{
            int cnt = 0, i = 0;
            printf("\n========================*************=============================\n");

            printf("\n");

            for(i = 1; i <= 10; i++)   //// Vertical Print Table
            //for(cnt = iNo1; cnt <= iNo2; cnt++)   ////Horizontal Print Table
            {
                    //for(i = 1; i <= 10; i++)   /////Horizontal Print Table
                    for(cnt = iNo1; cnt <= iNo2; cnt++)  //// Vertical Print Table
                    {
                            printf("  %3d",i * cnt);
                    }
                    printf("\n");
            }
            printf("\n========================*************=============================\n");
            return;
}
