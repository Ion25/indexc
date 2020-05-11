#include<iostream>

using namespace std;

void merge(int izq[], int nIzq, int der[], int nDer, int A[]){
	int i=0, j=0, k=0;
	while((i < nIzq) && (j < nDer))
	{
		if(izq[i] <= der[j]){
			A[k] = izq[i];
			i++;
		}else{
			A[k] = der[j];
			j++;
		}
		k++;
	}
	while(i<nIzq)
	{
		A[k] = izq[i];
		i++; k++;
	}
	while(j<nDer)
	{
		A[k] = der[j];
		j++; k++;
	}
}

void ms(int A[], int n){
	if(n==1){return;}
	int mitad = n/2;
	int izq[mitad];
	int der[n-mitad];
	for(int i=0; i<mitad; i++)
		izq[i] = A[i];
	for(int i=mitad; i<n; i++)
		der[i-mitad] = A[i];
		
	ms(izq,mitad);
	ms(der,n-mitad);
	merge(izq,mitad,der,n-mitad,A);
}

void mostrar(int A[], int n){
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
}

int main(){
	
	int A[] = {8,7,9,3,0,1,2,5,4,6};
	mostrar(A,10);
	cout<<"\n\n";
	ms(A,10);
	mostrar(A,10);
	
	return 0;
}
