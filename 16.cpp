#include <iostream>
using namespace std;
int main(){

string str("Hello");
string str1("world");
str.insert(3,"ro");
cout<<str<<endl;
str.append(str1,2,4);
cout<<str<<endl;
str.erase(2,5);
cout<<str<<endl;
str.replace(0,3,str1);
cout<<str<<endl;
str.at(3);
cout<<str<<endl;
string s="hi",s1="bye";
s.swap(s1);
string sb="are";
int i=str.find(sb);
cout<<i<<endl;

string a="hello how are you", t=a.substr(7,8);
cout<<t<<endl;
cout<<a[8];
return 0;

}
