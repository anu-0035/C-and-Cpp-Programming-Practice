#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream f("lpu.txt");
	if(f.is_open()){
		cout<<1;
	}
	f.close();
	return 0;
}
