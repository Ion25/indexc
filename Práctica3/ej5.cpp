#include<iostream>
using namespace std;

void a_to_B(char *, char *);
int size(char *);

int main(){						
	char A[] = "cesto";				//char *A = "cesto";		->		*B=*A, no procesa 
	char B[] = "balon     ";		//char *B = "balon      ";  ->		*B=*A, procesa si A[] y B[];
	
	a_to_B(A,B); 
	
	return 0;	
}

int size(char *A){
	if(*A == '\0')
		return 0;
	return 1 + size(++A);
}

void a_to_B(char *A, char *B){
	char *ptb = B + 5;
	int n = size(A);
	for(int i=0; i<n; i++)
	{
		*ptb = *A;
		ptb++;
		A++;	
		
	}
	cout << B << endl;
}


	
	
