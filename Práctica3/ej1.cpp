#include<iostream>
using namespace std;

int sum_ite(int *, int );
int sum_recur(int *, int );

int main(){
	int A[] = {1,2,3,4,5};
	cout << sum_ite(A,5) << endl;
	cout << sum_recur(A,5) << endl;
	
	return 0;   
}

int sum_ite(int *A, int n){
	int s=0;
	
	for(int i = 0; i < n; i++)
		s += *A++; 
	return s;
}

int sum_recur(int *A, int n){
	if(n == 1)
		return *A;
	return *A + sum_recur(++A,--n);
}
