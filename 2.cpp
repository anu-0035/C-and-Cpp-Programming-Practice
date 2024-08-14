#include<iostream>
using namespace std;
class LPU{
	public:
	int id;
	string name;
	void print(){
		cout<<"course is:"<<name;
	}
};
int main(){
	LPU a;
	a.name="cpp";
	a.print();
	
	return 0;
	
}
