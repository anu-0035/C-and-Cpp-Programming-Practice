//write a program yo find or print the size of int,char ,array of char ,float and double data type
#include<stdio.h>
#include<conio.h>
int main()
{ int a=56;
double b=12365864654;
float c=56.904;
char d,l[20];
d='A';
printf("size of int=%d\n",sizeof(a));
printf("size of float=%d\n",sizeof(c));
printf("size of double=%d\n",sizeof(b));
printf("size of char=%d\n",sizeof(d));
printf("size of array of char=%d\n",sizeof(l));
return 0;}
