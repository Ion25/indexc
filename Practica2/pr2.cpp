#include<iostream>

using namespace std;

void mostrar(int M[], int l){
	for(int i=0; i<l; cout<<M[i++]<<" ");
}

void inv_ite(int M[], int l){
	for(int i=0; i<l/2; i++)
	{
		M[i] ^= M[(l-1)-i];
		M[(l-1)-i] ^= M[i];
		M[i] ^= M[(l-1)-i];
	}
}

void inv_recu(int M[], int l, int c){
	int &a = M[c];
	int &b = M[l-1];
	a^=b;
	b^=a;
	a^=b;
	
	if(c<(l-1)/2) 			//Para l impar y par
		inv_recu(M,--l,++c);
}


int main(){
	
	int M[] = {1,2,3,4,5};
	//inv_ite(M,5);
	//inv_recu(M,5,0);
	mostrar(M,5);
	
	return 0;
}


