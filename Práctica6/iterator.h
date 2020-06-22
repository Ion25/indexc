#ifndef ITERATOR_H
#define ITERATOR_H
#include "node.h"

template <class T>
class Iterator
{
public:
	Iterator(Node<T> *);
	bool moreNode();
	void iterator();
	T *getInfo();
private:
	Node<T> *Cursor;
};

template <class T>
Iterator<T>::Iterator(Node<T> *node):Cursor(node){}


template <class T>
bool Iterator<T>::moreNode()
{
	return (Cursor != NULL);
}

template <class T>
void Iterator<T>::iterator()
{
	if(moreNode())
	{
		Cursor = Cursor->getNext();
	}	
}

template <class T>
T *Iterator<T>::getInfo()
{
	T *node_current;
	if(moreNode())
	{
		node_current = Cursor->getInfo();
		iterator();
		return node_current;
	}
	return NULL;
}

#endif // ITERATOR_H
