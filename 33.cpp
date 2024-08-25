#include<fstream>
#include<iostream>

using namespace std;


class Student
	{
	private: 
	char name[30];
	char stu_ID[20];
	char joining_DATE[20];
	char age[10];
	char comment[80];
	
	public:
	void getstu_data()
	{
		cout<<"Welcome To Info Brother: "<<endl;
		cout<<"======================";
		cout<<"\n\n student Name: ";
		cin.getline(name,30);
		cout<<" Student ID: ";
		cin.getline(stu_ID,20);
		cout<<" Joining Date: (DD/MM/YYYY) ";
		cin.getline(joining_DATE,20);
		cout<<" Employee Age: ";
		cin.getline(age,10);
		cout<<" Comment: ";
		cin.getline(comment,80);
	}
	
	
	void showstu_data() 
	{
		cout<<"\n\nStudent DATA: "<<endl;
		cout<<"=================================\n"<<endl;
		cout<<" Name: "<< name<<endl;
		cout<<" Student ID: "<< stu_ID<<endl;
		cout<<" Date of joining: "<< joining_DATE<<endl;
		cout<<" Age of Employee: "<< age<<endl;
		cout<<" Comment: "<< comment<<endl;
	}
};



class Library
{
	public:
	Student s; 
	fstream fp, fp1;
	
	void WriteStu() 
	{
	fp.open("Student.txt",ios::out);
	if(fp)
	{
		s.getstu_data(); 
		fp.write((char*)&s,sizeof(s));
		cout<<"Record Store Successfully: "<<endl;
	}
	fp.close();
	}
	
	void W_displaystu()
	{
		fp.open("Student.txt",ios::in); 
		if(fp) 
		{
			while(fp.read((char*)&s,sizeof(s))) 
			{
				s.showstu_data();
			}
			fp.close();
		}
	}
};

int main()
{
	Library stu; 
	stu.WriteStu(); 
	stu.W_displaystu(); 
	
	return 0;
}
