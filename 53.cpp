/*#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int i){
	int max=i,l=2*i,r=2*i+1;
	while(l<=n && a[l]>a[max]){
		max=l;
	}
	while(r<=n && a[r]>a[max]){
		max=r;
	}
	if(max!=i){
		swap(a[max],a[i]);
		heapify(a,n,max);
	}
}
int insert(int a[],int n , int v){
	n++;
	a[n]=v;
	heapify(a,n,n/2);
}
void display(int a[],int n){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[]={0,2,33,42,5,6,9};
	int n=6;
	for(int i=n/2;i>=1;i--){
		heapify(a,n,i);
	}
	display(a,n);
}/*
#include <iostream>
using namespace std;

void heapify(int a[], int n, int i) {
    int max = i, l = 2 * i, r = 2 * i + 1;
    if (l <= n && a[l] > a[max]) {
        max = l;
    }
    if (r <= n && a[r] > a[max]) {
        max = r;
    }
    if (max != i) {
        swap(a[max], a[i]);
        heapify(a, n, max);
    }
}

void insert(int a[], int& n, int v) {
    n++;
    a[n] = v;
    heapify(a, n, n / 2);
}

void display(int a[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int a[] = { 0,2, 33, 42, 5, 6, 9};
    int n = 6;

    for (int i = n / 2; i >= 1; i--) {
        heapify(a, n, i);
    }

    display(a, n);

    return 0;
}*/


#include <iostream>
using namespace std;

void heapify(int a[], int n, int i) {
    int max = i, l = 2 * i + 1, r = 2 * i + 2;
    if (l < n && a[l] > a[max]) {
        max = l;
    }
    if (r < n && a[r] > a[max]) {
        max = r;
    }
    if (max != i) {
        swap(a[max], a[i]);
        heapify(a, n, max);
    }
}

void insert(int a[], int& n, int v) {
    n++;
    a[n] = v;
    int i = n;
    while (i > 0 && a[(i - 1) / 2] < a[i]) {
        swap(a[(i - 1) / 2], a[i]);
        i = (i - 1) / 2;
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int a[] = {2, 33, 42, 5, 6, 9};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = (n / 2) - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    display(a, n);
    cout << endl;

    insert(a, n, 10);
    display(a, n + 1);

    return 0;
}

