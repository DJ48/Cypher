#include <stdio.h>

#include <string.h>

struct emp // new user defined datatype

{

char id[10];

char name[30];

};

int main()

{

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

return 0;

}
