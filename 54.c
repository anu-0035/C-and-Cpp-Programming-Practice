//program to ask the user to perform insertion or deletion operation in 1D array using switch case
void insert(),delete();
int main(){
	int x=1,a;
	while(x=1){
	printf("program for insertion and deletion\n1.INSERTION \n 2. DELETION\n3.END the APPLICATION\nenter you choice: ");
	scanf("%d",&a);
	switch(a){
		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
			x=0;
			break;
	}
	
	}
}

