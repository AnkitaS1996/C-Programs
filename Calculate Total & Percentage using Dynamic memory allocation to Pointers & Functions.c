#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float Calculate_Total_Percentage(int *Total,int **Sub_Marks)
{
    int i = 0;

    int *P = &Sub_Marks;
    
    printf("\n Display Subject Marks is : \n");
    for(i = 0;i < 3;i++)
    {
        P=*Sub_Marks+i;

        printf("\n\t\t %d",*P);
        *Total = *Total + *P;
    }
    return ((*Total/300.0)*100);
}

int main()
{
    int i = 0,Total = 0;
    float Per = 0.0;

    int *Sub_Marks = NULL;

    Sub_Marks=(int*)malloc(sizeof(int)*3);

    for(i=0;i<3;i++)
    {
        printf("\n Enter %d Subject Marks = ",i+1);
        scanf("%d",&Sub_Marks[i]);
    }
    
    Per = Calculate_Total_Percentage(&Total,&Sub_Marks);

    printf("\n\n Total Marks Of Given Student Are = %d.",Total);
    printf("\n\n Percentage Of Given Student is = %f.",Per);

    printf("\n Thank You...!!!!");

    getch();
    return 0;
}
