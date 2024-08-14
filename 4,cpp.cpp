#include<iostream>
using namespace std;
union stu{
int a1;
char a2;
float a3;
}s1;
int main(){

s1.a1=34;
cout<<s1.a1<<endl;
s1.a2='a';
cout<<s1.a2<<endl;
s1.a3=34.9;
cout<<s1.a3<<endl;
return 0;
}
