#include<iostream>
using namespace std;

void a_to_B(char *, char *);
int size(char *);
void inicializar(char *);

int main(){
	char A[] = "cesto";
	char B[] = "balon     ";
	
	cout << A << endl;
	cout << B << endl;
	a_to_B(A,B); 
	
	return 0;
}

int size(char *A){
	if(*A == '\0')
		return 0;
	return 1 + size(++A);
}

void inicializar(char *C){
	for(int i=0; i<size(C); i++)
	{
		*C = ' ';
		C++;		
	}
}

void a_to_B(char *A, char *B){
	char *ptb = B;
	inicializar(B);
	int n = size(A);
	for(int i=0; i<n; i++)
	{
		*ptb = *A;
		ptb++;
		A++;	
	}
	cout << B << endl;
}
