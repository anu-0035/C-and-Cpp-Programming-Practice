#include<iostream>
using namespace std;
int main(){
	int i,j,n,m;
	cout<<"enter the size of matrix n x m: ";
	cin>>n>>m;
	int a[n][m],b[n][m],c[n][m];
	cout<<"enter the values of matrix A:\n";
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<"enter the value of the element "<<i+1<<"x"<<j+1<<": ";
			cin>>a[i][j];
		}
	}
	cout<<"enter the values of matrix B:\n";
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<"enter the value of the element"<<i+1<<"x"<<j+1<<": ";
			cin>>b[i][j];
		}
	}
	cout<<"the matrix A: \n";
	for (i=0;i<n;i++){
		cout<<"[ ";
		for(j=0;j<m;j++){
			cout<<a[i][j]<<" ";
			}
			cout<<"]\n";
}
	cout<<"the matrix B: \n";
	for (i=0;i<n;i++){
		cout<<"[ ";
		for(j=0;j<m;j++){
			cout<<b[i][j]<<" ";
			}
			cout<<"]\n";
}
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=0;
		}
	}
	cout<<"the multiplication of 2 matrix is:\n";
for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			for(int k=0;k<n;k++){
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			}
		}

	for (i=0;i<n;i++){
		cout<<"[ ";
		for(j=0;j<m;j++){
			cout<<c[i][j]<<" ";
			}
			cout<<"]\n";
}
return 0;	
}
