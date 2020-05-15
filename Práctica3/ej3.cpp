#include<iostream>
using namespace std;

void ordn(int *, int);
void mostrar(int *, int);

int main(){
	int A[] = {9,1,7,0,2,3,4,8,6,5};
	ordn(A,10);
	mostrar(A,10);
	
	return 0;
}

void swap(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}

void ordn(int *A, int n){
	for (int i=1; i<n; i++)
	{
		int *pti = A+1;
		int *ptj = A;
		for (int j=0; j<n-i; j++)
		{
			if( *ptj > *pti )
				swap(*ptj,*pti);
				ptj++;
				pti++;
		}
	}
}

void mostrar(int *A, int n){
	for(int i=0; i<n; i++)
		cout << *A++ << " ";
}
