#include<stdio.h>
struct employee
{
  char ename[20];
  int ssn; 
  float salary;
  struct dob
  {
    int date;
    int month;
    int year;
  }db1;
}emp={"aniket",1000,1000.50,{22,6,1990}};
int main(){
	printf("\n employee name: %s",emp.ename);
	printf("\n employee SSn: %d",emp.ssn);
	printf("\n employee salary: %.2f",emp.salary);
	printf("\n employee Dob: %d/%d/%d ",emp.db1.date,emp.db1.month,emp.db1.year);
	return 0;}
