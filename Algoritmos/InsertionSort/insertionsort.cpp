#include<iostream>

using namespace std;

void ints(int A[], int n){
	for(int i=1; i<10; i++)
	{
		int ptf = A[i];
		int j=i-1;
		while( j>=0 && A[j]>ptf )
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = ptf;
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
	ints(A,10);
	mostrar(A,10);
	
	return 0;
}
