#include<iostream>
using namespace std;

void inv_ite(int *, int);
void inv_recur(int *, int);
void swap(int &, int &);
void mostrar(int *, int);

int main(){
	const int n = 5;
	int A[n] = {1,2,3,4,5};
	//inv_ite(A,5);	
	inv_recur(A,n);
	mostrar(A,n);
	
	return 0;
}

void swap(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}

void mostrar(int *A, int n){
	for(int i=0; i<n; i++)
		cout << *A++ << " ";	
}

void inv_ite(int *A, int n){
	int *ptr = A + (n-1); 
	
	for(int i=0; i<n/2; i++)
		swap( *A++, *ptr-- );
}

void inv_recur(int *A, int n){
	int *ptr = A + (n-1);
	
	if(A >= ptr)
		return ; 
	swap( *A, *ptr); 
	return inv_recur(++A,n-=2);
}




