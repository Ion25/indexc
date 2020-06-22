#ifndef GENERICLIST_H
#define GENERICLIST_H
#include "iterator.h"

template <class T>
class genericList
{
public:
	genericList();
	int size();
	void addNode(T *);
	void addNode(T *, int);
	void remove();
	void remove(int);
	Node<T> begin();
	Node<T> end();
	Iterator<T> *getIterator();
	~genericList();
	
private:
	Node<T> *first_node;
};


template <class T>
genericList<T>::genericList()
{
	first_node = NULL;
}


template <class T>
int genericList<T>::size()
{
	Node<T> *p = first_node;
	int cont = 0;
	
	while(p != NULL)
	{
		p = p->getNext();
		cont++;
	}
	
	return cont;
}


/*first_node es el último nodo ingresado (PILA)*/
template <class T>
void genericList<T>::addNode(T *node)
{
	first_node = new Node<T>(node, first_node);
}


template <class T>
void genericList<T>::addNode(T *node, int pos)
{
	if(pos <= size() + 1)
	{
		if(pos != size() + 1)
		{
			Node<T> *new_node = new Node<T>(node, first_node);
			Node<T> *p = first_node;	//p recorre los nodos
			
			for(int i=1; i<=pos-2; i++)
			{
				p = p->getNext();
			}
			
			Node<T> *prox = p->getNext();
			p->setNext(new_node);
			new_node->setNext(prox);
		}
		else
		{
			addNode(node);
		}
	}
}


/*remove el último en ser ingresado (PILA)*/
template <class T>
void genericList<T>::remove()
{
	Node<T> *aux = first_node->getNext();
	delete first_node;
	first_node = aux;
}


template <class T>
void genericList<T>::remove(int pos)
{
	if(pos <= size())
	{
		Node<T> *removes;
		
		if(pos == 1)
		{
			remove();
		}
		else
		{
			Node<T> *p = first_node;	//p recorre los nodos
			for(int i=1; i<=pos-2; i++)
			{
				p = p->getNext();					
			}
			
			Node<T> *prox = p->getNext();
			p->setNext(prox->getNext());
			removes = prox;
		}
		delete removes;
	}
	
}


template <class T>
Node<T> genericList<T>::begin()
{
	return *first_node;
}


template <class T>
Node<T> genericList<T>::end()
{
	Node<T> *p = first_node;
	int cont=1;
	
	while(cont != size())
	{
		p = p->getNext();
		cont++;
	}
	
	return *p;
		
}


template <class T>
Iterator<T> *genericList<T>::getIterator()
{
	return new Iterator<T>(first_node);
}


template <class T>
genericList<T>::~genericList()
{
	Node<T> *p = first_node;
	Node<T> *aux;
	
	while(p != NULL)
	{
		aux = p->getNext();
		delete p;
		p = aux;
	}
	
	first_node = NULL;
	
}

#endif // GENERICLIST_H
