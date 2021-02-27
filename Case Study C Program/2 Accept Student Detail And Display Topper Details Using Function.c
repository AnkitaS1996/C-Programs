#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define cnt 5

/////Global Static Variable
static int SID = 101;

void Student_Accept_Detail();
void Display_Student_Detail();

struct Class_Student_Std
{
    int s_R_No;
    char s_Name[30];
    int s_Physics;
    int s_Chemistry;
    int s_Maths;
    int s_M_Total;
    float s_Per;
}obj[cnt];

void Add_Student_Detail()
{
            int i = 0;

            printf("\n Student Accepting Details == >> \n ");

            //struct Class_Student_Std obj[cnt];

            for(i = 0; i < cnt; i++,SID++)
            {
                    printf("\n================******************======================\n");

                    printf("\n Student Roll Number = %d.\n",SID);
                    obj[i].s_R_No  = SID;

                    printf("\n Enter Student Name : ");
                    //scanf("%s",&obj[i].s_Name);
                    scanf(" %[^\n]",&obj[i].s_Name);
                    //fflush(stdin);

                    PM1: /////Label Physics Marks
                    printf("\n Enter Physics Marks = ");
                    scanf("%d",&obj[i].s_Physics);
                    if(obj[i].s_Physics > 100)
                    {
                            printf("\n Invalid Physics Marks..!!!");
                            printf("\n================******************======================\n");
                            goto PM1;
                    }

                    CM1:  //// Label Chemistry Maths
                    printf("\n Enter Chemistry Marks = ");
                    scanf("%d",&obj[i].s_Chemistry);
                    if(obj[i].s_Chemistry > 100)
                    {
                            printf("\n Invalid Chemistry Marks..!!!");
                            printf("\n================******************======================\n");
                            goto CM1;
                    }

                    MM1: /////Label Maths Marks.
                    printf("\n Enter Maths Marks = ");
                    scanf("%d",&obj[i].s_Maths);
                     if(obj[i].s_Maths > 100)
                    {
                            printf("\n Invalid Chemistry Marks..!!!");
                            printf("\n================******************======================\n");
                            goto MM1;
                    }
                    printf("\n================******************======================\n");

          }
}

void Display_Student_Detail()
{
            int i = 0;
            float Sum = 0;

            printf("\n================******** Display Student Details **********======================\n");
            printf("\n Display Student Details --->> \n");

            for(i = 0; i < cnt; i++)
            {
                        printf("\n================******************======================\n");
                        printf("\n Student Roll No = %d .",obj[i].s_R_No);

                        printf("\n Student Name = %s.",obj[i].s_Name);

                        obj[i].s_M_Total = obj[i].s_Physics + obj[i].s_Chemistry + obj[i].s_Maths;

                        printf("\n Total Marks Of  \n\t\t 1. Physics = %d. \n\t\t 2. Chemistry = %d. \n\t\t 3. Maths = %d. \n\t\t Total Marks Are = %d.",obj[i].s_Physics,obj[i].s_Chemistry,obj[i].s_Maths,obj[i].s_M_Total);

                        obj[i].s_Per = (obj[i].s_M_Total * 100) / 300;

                        if(i == 0)
                        {
                                Sum = obj[i].s_Per;
                        }

                        printf("\n Student Percentage = %0.2f%%.",obj[i].s_Per);
                        printf("\n================******************======================\n");
            }

            for(i = 0; i < cnt; i++)
            {
                if(Sum < obj[i].s_Per)
                {
                        Sum = obj[i].s_Per;
                }
            }

            getch();
            system("cls");

            for(i = 0; i < cnt; i++)
            {
                if(Sum == obj[i].s_Per)
                {
                            printf("\n##########******* Topper Details*******###########\n");
                            printf("\n\n Topper Student Details : ");

                            printf("\n\n\t\t Student Roll Number = %d.",obj[i].s_R_No);
                            printf("\n\n\t\t Student Name = %s",obj[i].s_Name);
                            printf("\n\n\t\tStudent Percentage = %0.2f%%.",obj[i].s_Per);

                            printf("\n====================******************==========================\n");
                            printf("\n \n \t Subject Marks is -->>. ");

                            printf("\n================******************======================\n");
                            printf("\n\n  \t 1. Physics = %d. \t 2. Chemistry = %d. \t 3. Maths = %d.",obj[i].s_Physics,obj[i].s_Chemistry,obj[i].s_Maths);
                            printf("\n====================******************==========================\n");
                }
            }
}

int main()
{
            int i = 0;

            Add_Student_Detail();
            getch();
            system("cls");
            Display_Student_Detail();

            getch();
            return 0;
}
