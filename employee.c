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

    int f3=0;
    char u_id[10];
    printf ("Enter the Employee id that you want to update:-");
    scanf ("%s", u_id);
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
  int f2=0,dindex;
  char d_id[10];
  printf ("Enter the id that you want to delete:");
  scanf ("%s", d_id);
  
  for (int i = 0; i < 3; i++)
  {
    if (strcmp (d_id, employees[i].id) == 0)
    {
      dindex = i;
      f2=1;
    }
  }
  
  if(f2==0)
  {
    printf("\nEmployee id %s not found.",d_id);
  }
  else
  {
    for (int i = dindex; i < 3; i++)
    {
        if (i == 2)
        {
            strcpy (employees[i].id, "\0");
            strcpy (employees[i].name, "\0");
        }
        else
        {
            employees[i] = employees[i + 1];
        }
    }
    printf ("\n---------Printing Details After Deletion-------\n");
  
    for (int i = 0; i < 3; i++)
    {
      printf ("%s\t", employees[i].id);
      printf ("%s\n", employees[i].name);
    }
  }
  
  
    int flag=0,sindex;
    char sid[10];
    printf ("Enter employe id to search \n");
    scanf ("%s", sid);
    
    for (int i = 0; i < 3; i++)
    {
        if (strcmp (sid, employees[i].id) == 0)
        {
            flag = 1;
            sindex = i;
            break;
        }
        
    }
    
    if (flag == 1)
    {
        printf ("Employee Found \n");
        printf ("%s\t", employees[sindex].id);
        printf ("%s\n", employees[sindex].name);
    }
    else
        printf ("Employee with id %s not found \n", sid);

  return 0;
}
