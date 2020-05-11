#include<iostream>

using namespace std;

int k=0;

void CountS(int A[],int B[],int n)    
{
	int C[k];
	for(int i=0;i<k+1;i++)
		C[i]=0;

	for(int j=1;j<=n;j++)
		C[A[j]]++;			    
	
	for(int i=1;i<=k;i++)
		C[i]+=C[i-1];            
	
	for(int j=n;j>=1;j--)
	{
		B[C[A[j]]]=A[j];          

		C[A[j]]=C[A[j]]-1;		  
	}
}

int main()
{ 	
	int n;
	cout<<"Enter the size of the array :";
	cin>>n;
	
	//int A[] = {0,9,4,2,1,3,7,6,5,8};
	int A[10],B[10]; 
	
	for(int i=1;i<=10;i++)        
	{
		cin>>A[i];
		if(A[i]>k)
		{
			k=A[i];              
		}
	}
	
	CountS(A,B,10);        


	for(int i=1;i<=10;i++)       
		cout<<B[i]<<" ";
	
	
	cout<<endl;
	return 0;
}
