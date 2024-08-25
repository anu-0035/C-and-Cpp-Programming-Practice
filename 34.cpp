#include<bits/stdc++.h>
using namespace std;
class distance{
	private:
		int f,i;
	public:
		
		distance(){
			this->f=0;
			this->i=0;
		}
		distance(int x,int y){
			this->f=x;
			this->i=y;
		}
		friend distance operator + (distance&, distance&);
};
distance operator +(distance d1, distance d2){
	distance d3;
	d3.f=d1.f + d2.f;
	d3.i=d1.i + d2.i;
	return d3;
}
int main(){
	distance d1(8,9);
	distance d2(10,7);
	distance d3;
	d3= d1 + d2;
	cout<<d3.f<<"  "<<d3.i;
}
