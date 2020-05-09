#include<iostream>

using namespace std;

int sum_ite(int M[], int l){
	int s=0;
	for(int i=0; i<l; s+=M[i++]);
	return s;
}

int sum_recu(int M[], int l){
	if(l==1)
		return M[0];
	return M[l-1] + sum_recu(M,--l);
}

int main(){
	
	int M[] = {1,2,3,4,5};
	cout<<sum_ite(M,5)<<endl;
	cout<<sum_recu(M,5)<<endl;
	
	return 0;
}
