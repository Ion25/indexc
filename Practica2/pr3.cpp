#include<iostream>

using namespace std;

void mostrar(int M[], int l){
	for(int i=0; i<l; i++)
		cout<<M[i]<<" ";
}

void ord(int M[], int l){
	for(int i=0; i<l; i++)
		for(int j=0; j<l-1; j++)
			if(M[j]>M[j+1])
			{
				M[j] ^= M[j+1];
				M[j+1]^= M[j];
				M[j] ^= M[j+1];
			}		
}

int main(){
	int M[]={1,5,2,3,4};
	ord(M,5);
	mostrar(M,5);
	
	return 0;
}
