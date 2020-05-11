#include<iostream>

using namespace std;

void slcts(int A[], int n){
	int aux;
	for(int i=0; i<10-1; i++)
	{
		int min = i;
		for(int j=i+1; j<10; j++)
		{
			if(A[min]>A[j])
				min = j;			
		}
		
		aux=A[min];
		A[min]=A[i];
		A[i]=aux;	
	}	
}

void mostrar(int A[], int n){
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
}

int main(){

	int A[] = {8,7,9,3,0,1,2,5,4,6};
	mostrar(A,10);
	cout<<"\n\n";
	slcts(A,10);
	mostrar(A,10);
	
	return 0;
}
