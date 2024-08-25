#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	fstream f;
	f.open("file.txt",ios::out);
	if(!f){
		cout<<"file was not created.";
		
	}
	else{
		cout<<"file created";
	}
	f.close();
	return 0;
}
