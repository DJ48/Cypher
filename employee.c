#include <stdio.h>

#include <string.h>

struct emp // new user defined datatype

{

char id[10];

char name[50];

};

int main()
  

{

int dindex,f2;
char d_id[10]
struct emp employees[3]; // struct emp vs emp1

printf("Enter 3 employee records id and name \n");

for (int i = 0; i < 3; i++) {

scanf("%s",employees[i].id);

scanf("%s",employees[i].name);

}

for (int i = 0; i < 3; i++) {

printf("%s\t",employees[i].id);

printf("%s\n",employees[i].name);

}
printf ("Enter the id that you want to delete:");

scanf ("%s", &d_id);

for (int i = 0; i < 3; i++)
{
printf("Drebug");
if (strcmp(d_id, employees[i].id) == 0)
{

dindex = i;
f2=1;
break;
}

}
printf("%d",dindex);
if(f2==0){
printf("\nEmployee id %s not found.",d_id);
}
else{
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

return 0;

}
}
}
