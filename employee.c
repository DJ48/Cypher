/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct emp // new user defined datatype
{
    char id[10];
    char name[50];

};

int main()
{
    struct emp employees[3]; // struct emp vs emp1
    printf("Enter 3 employee records id and name \n");
    
    for (int i = 0; i < 3; i++) 
    {
        scanf("%s",employees[i].id);
        scanf("%s",employees[i].name);
    }

    for (int i = 0; i < 3; i++) 
    {
        printf("%s\t",employees[i].id);
        printf("%s\n",employees[i].name);
    }

    int f3;
    char u_id[10];
    printf ("Enter the Employee id that you want to update:-");
    scanf ("%s", &u_id);
    for (int i = 0; i < 3; i++)
    {
        if (strcmp (u_id, employees[i].id) == 0)
        {
            printf ("\n----Please Enter the new id and new name:-\n");
            scanf ("%s", employees[i].id);
            scanf ("%s", employees[i].name);
            f3=1;

        }
    }
    if(f3==0)
    {
        printf("\nEmployee id %s not found.",u_id);
    }
    else
    {
        printf("\n-------Printing Details after update--------\n");
        for (int i = 0; i < 3; i++)
        {
            printf ("%s\t", employees[i].id);
            printf ("%s\n", employees[i].name);
        }
    }
 
return 0;
}

