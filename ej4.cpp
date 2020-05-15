#include<iostream>
using namespace std;

int size_ite(char *);
int size_recur(char *);

int main(){
	char *A = "qwerty";

	cout << size_ite(A) << endl;
	cout << size_recur(A) << endl;
	return 0;
}

int size_ite(char *A){
	int i=0;
	
	while( *A != '\0' ){
		A++;
		i++;
	}
	return i;
}
	

int size_recur(char *A){
	if(*A == '\0')
		return 0;
	return 1 + size_recur(++A);
}
