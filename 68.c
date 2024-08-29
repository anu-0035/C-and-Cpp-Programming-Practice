
# char name[30];
int id;
float salary;

}u[100];

int main()
{
int n,i;
printf("\nEnter value of n:");
scanf("%d",&n);
fflush(stdin);
for(i=0;i<n;i++)
{
printf("\n enter name");
fflush(stdin);
get(u[i].name);
printf("\n entered name is: %s",u[i].name);
printf("\n enter id:");
fflush(stdin);
scanf("%d",&u[i].id);
printf("\n entered id is: %d",u[i].id);
printf("\n enter salary:");
fflush(stdin);
scanf("%f",&u[i].salary);
printf("\n entered salary is: %.2f",u[i].salary);}
return 0;}


