#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string r;
	ifstream re("lpu.txt");
	while(getline(re,r)){
		cout<<r<<endl;
	}
	re.close();
	return 0;
}
