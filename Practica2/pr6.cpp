#include<iostream>

using namespace std;

int tam_ite(string cad){
	int i=0;
	while(cad[i] != '\0'){i++;} 
	return i;
}

void inclz(string &cad, int b){
	for(int i=0; i<b; i++)
		cad[i]=' ';
}

string cop(string cadA, string cadB, int a, int b){
	inclz(cadB,b);
	for(int i=0; i<a; i++)
		cadB[i]=cadA[i];
	return cadB;
}

int main(){
	string cadA = "cesto";
	string cadB = "balonmano     "; 
	int a = tam_ite(cadA);
	int	b = tam_ite(cadB);
	cout<<cop(cadA,cadB,a,b);
	return 0; 
}
