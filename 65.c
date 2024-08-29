#include<stdio.h>
struct address
{
  char housename[25];
  char city[25];
  char streetname[25];
};
struct employee
{
  int id;
  char name[25];
  float salary;
struct address add;
};
int main()
{
  struct employee e;
  printf("\n\tenter employee id:");
  scanf("%d",&e.id);
  printf("\n\tenter eemployee name:");
  scanf("%s",&e.name);
  printf("\n\tenter employee salary:");
  scanf("%f",&e.salary);
  printf("\n\tenter employee house name:");
  scanf("%s",&e.add.housename);
  printf("\n\tenter employee city:");
scanf("%s",e.add.city);
printf("\n\t enter the employee street name:");
scanf("%s",e.add.streetname);
printf("\n details of the employees");
printf("\n\t employee Id:%d",e.id);
printf("\n\t employee name:%s",e.name);
printf("\n\t employee salary: %f",e.salary);
printf("\n\t employee house no: %s",e.add.housename);
printf("\n\t employee city: %s",e.add.city);
printf("\n\t employee street name: %s",e.add.streetname);}


