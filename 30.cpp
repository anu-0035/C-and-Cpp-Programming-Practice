#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class Book{
	private:
		int bookid;
		char title[25];
		float price;
	public:
		Book(){
			bookid=0;
			strcpy(title,"no title");
			price=0;
	}
	void getBookData(){
		cout<<"Enter bookid,title,price";
		cin>>bookid;
		cin.ignore();
		cin.getline(title,24);
		cin>>price;
	}
	void showBookData(){
		cout<<bookid<< " " << title << " "<<price<<endl;
	}
	int storeBook();
		void viewAllBooks();
		void searchBook(char*);
		void deleteBook(char*);
		void updateBook(char*);
	
	
};
void Book::updateBook(char* t){
	fstream file;
	file.open("myFile.txt",ios::in | ios::out |ios::ate |ios::app |ios::binary);
	file.seekg(0);
	file.read((char*)this,sizeof(*this));
	while(!file.eof()){
		if(!strcmp(t,title)){
			getBookData();
			//file.seekp(file.tellp() - sizeof(*this));
			file.write((char*)this,sizeof(*this));
		}
		file.read((char*)this, sizeof(*this));
	
	}
	file.close();
}
void Book::deleteBook(char* t){
	ifstream fin;
	ofstream fout;
	fin.open("myFile.txt",ios::in | ios::out |ios::ate |ios::app |ios::binary);
	if(!fin){
		cout<<"\n File not found";
	}
	else{
		fout.open("tempfile.txt",ios::app |ios::binary);
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
			if(!strcmp(t,title)){
			
				fout.write((char*)this,sizeof(*this));
				fin.read((char*)this,sizeof(*this));
			}
			fin.close();
			fout.close();
			remove("myFile.txt");
			rename("tempfile.txt","myFile.txt");
			}
	}
}
void Book::searchBook(char* t){
int c=0;
ifstream fin;
fin.open("myFile.txt", ios::in |ios::binary);
if(!fin)
cout<<"\n File not found";
else{
fin.read((char*)this,sizeof(*this));
while(!fin.eof()){
if(!strcmp(t,title)){
showBookData();
c++;
}
fin.read((char*)this,sizeof(*this));

}
if(c==0){
cout<<"No record found";
fin.close();
}
}
}
void Book::viewAllBooks(){
ifstream fin;
fin.open("myFile.txt",ios::in |ios::binary);
if(!fin)
cout<<"\n File not found";
else{
fin.read((char*)this,sizeof(*this));
while(!fin.eof()){
showBookData();
fin.read((char*)this,sizeof(*this));
}
fin.close();
}

}
int Book::storeBook(){
if(bookid==0 && price==0){
cout<<"bookdata is not initialized"<<endl;
return(0);
}
else{
ofstream fout;
fout.open("myFie.txt",ios::app |ios::binary);
fout.write((char*)this,sizeof(*this));
fout.close();
return(1);
}

}
int menu(){
	int choice;
	cout<<"\nBook Management System";
	cout<<"\n1.Insert Book Record";
	cout<<"\n2.view All Book Records";
	cout<<"\n3.Search Book Record";
	cout<<"\n4.Delete Book Record";
	cout<<"\n5.Update Book Record";
	cout<<"\n6.Exit";
	cout<<"\n\nEnter your choice: ";
	cin>>(choice);
	return (choice);

}
int main(){
Book b;
char title[25];
while(1){

switch(menu()){
case 1:
b.getBookData();
b.storeBook();
cout<<"\nRecord inserted";
break;
case 2:
b.viewAllBooks();
break;
case 3:
cout<<"\nEnter title to search";
cin.ignore();
cin.getline(title,24);
b.searchBook(title);
break;
case 4:
cout<<"\nEnter title to delete";
cin.ignore();
cin.getline(title,24);
b.deleteBook(title);
break;
case 5:
cout<<"\nEnter title to update";
cin.ignore();
cin.getline(title,24);
b.updateBook(title);
break;
case 6:
cout<<"\n press any key to exit";

exit(0);
default:
cout<<"Invalid input ";

}


}

return 0;
}
