#include<iostream>

using namespace std;

int tam_ite(string cad){
	int i=0;
	while(cad[i] != '\0'){i++;} 
	return i;
}

int tsin_spac(string cad, int b){ //suponiendo que las últimas full " "
	int i=0;
	while(cad[b-1-i] == ' '){i++;}
	return b-i;
}

string concad(string cadA, string cadB, int a, int b){
	int j = tsin_spac(cadB,b);
	for(int i=j; i<b; i++)
		cadB[i]=cadA[i-j];
		
	return cadB;
}

int main(){
	string cadA = "cesto";
	string cadB = "balon     "; 
	int a = tam_ite(cadA);
	int	b = tam_ite(cadB);
	cout<<concad(cadA,cadB,a,b);
	return 0;
}
