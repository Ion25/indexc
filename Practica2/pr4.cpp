#include<iostream>

using namespace std;

int tam_ite(string cad){
	int i=0;
	while(cad[i] != '\0'){i++;} 
	return i;
}


int tam_recu(string cad, int c){
	if(cad[c]=='\0')
		return 0;
	return 1 + tam_recu(cad,++c);
}

int main(){
	string cad = "qwerty";
	cout<<tam_ite(cad)<<endl;
	cout<<tam_recu(cad,0)<<endl;
	return 0;
}
