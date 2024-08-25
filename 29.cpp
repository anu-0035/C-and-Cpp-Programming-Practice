#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char i[100];
	ofstream s;
	s.open("file.txt");
	cout<<"enter what u want to append in the file:\n";
	cin.getline(i,100);
	s<<i<<endl;
	s.close();
	ifstream a;
	string l;
	a.open("file.txt");
	cout<<"the file content is:\n";
	while(getline(a,l)){
		cout<<l<<endl;
	}
	a.close();
	
	
	return 0;
}
