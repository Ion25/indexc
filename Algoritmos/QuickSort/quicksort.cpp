#include<iostream>

using namespace std;

void qs(int A[], int izq, int der){
	int aux;
	int i=izq;
	int j=der;
	int x = (izq + der)/2;
	
	do{
		while((A[i]<x) /*&& (j<=der)*/)
		{
			i++;
		}
		while((x<A[j]) /*&& (j>izq)*/)
		{
			--j;
		}
		
		if(i<=j)
		{
			aux = A[i]; A[i] = A[j]; A[j] = aux;   
			i++; j--;
		}
	}while(i<=j);
	
	if(izq<j)
		qs(A,izq,j);
	if(i<der)
		qs(A,i,der);
}

void mostrar(int A[], int n){
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
}

int main(){
	
	int A[] = {6,8,0,4,5,9,3,2,1,7};
	mostrar(A,10);
	qs(A,0,10-1);
	cout<<"\n\n";
	mostrar(A,10);
	
	return 0;
}
