#include <iostream>
#include "LinkedList.h" 

LinkedList::LinkedList(){
	head = NULL;
	size = 0;
}

LinkedList::~LinkedList(){
	Node *reco = head;
	Node *borr;
	int cont = 0;
	
	while(cont != size){
		borr = reco;
		reco = reco->next;
		delete borr;
		++cont;
	}
}

/* Insertar elemeto y ordenar */
void LinkedList::insert(int x){
	Node *nuevo = new Node();
	nuevo->elem = x;
	
	if(head == NULL)
	{
		head = nuevo;
	}
	else
	{
		if(x < head->elem)
		{
			nuevo->next = head;
			head = nuevo;
		}
		else
		{
			Node *reco = head;
			Node *atras = head;
			int cont = 1;
			
			while(x >= reco->elem  &&  cont != size ){
				atras = reco;
				reco = reco->next;
				++cont;
			}
			
			if(x >= reco->elem)
			{
				reco->next = nuevo;
			}
			else
			{
				nuevo->next = reco;
				atras->next = nuevo;
			}
				
		}
		
	}
	
	size = size + 1;
	
}

/* Eliminar un elemento de acuedo a la posición 1,2,..n */
void LinkedList::remove(int pos){
	if(pos <= size)
	{
		Node *borr;
		
		if(pos == 1)
		{
			borr = head;
			head = head->next;
		}
		else
		{
			Node *reco;
			reco = head;
			
			for(int i=1; i<=pos-2; i++){
				reco = reco->next;
			}
			Node *prox = reco->next;
			reco->next= prox->next;
			borr = prox;
		}
		
		delete borr;
		
	}
	size = size - 1;
}

/*Imprime la lista*/
void LinkedList::print(){
	Node *reco = head;
	int cont = 0;
	
	while(cont != size){
		std::cout << reco->elem << " ";
		reco = reco->next;
		++cont;
	}
	
	std::cout << "\n";
}

