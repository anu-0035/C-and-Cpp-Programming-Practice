// You are using GCC
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct Line{
    int x;
    int y;
}a,b;
int main(){
    cin>>a.x>>a.y;
    cin>>b.x>>b.y;
    float e=a.x,f=a.y,g=b.x,h=b.y;
    cout<<"Distance: "<<setprecision(3)<<pow(pow(a.x-b.x,2)+pow(a.y-b.y,2),0.5);
    cout<<"\nMidpoint: "<<(e+g)/2<<"<<<<(f+h)/2;
    return 0;
}
