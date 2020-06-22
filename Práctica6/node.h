#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
public:
	Node(T *, Node<T> *);
	T *getInfo()const;
	void setInfo(T *);
	Node<T> *getNext()const;
	void setNext(Node<T> *);
	~Node();
	
private:
	T *Info;
	Node<T> *Next;	
};

template <class T>
Node<T>::Node(T *info, Node<T> *next):Info(info), Next(next){}

template <class T>
T *Node<T>::getInfo()const
{
	return Info;
}

template <class T>
void Node<T>::setInfo(T *info)
{
	Info = info;
}

template <class T>
Node<T> *Node<T>::getNext()const
{
	return Next;
}

template <class T>
void Node<T>::setNext(Node<T> *next)
{
	Next = next;
}

template <class T>
Node<T>::~Node(){}


#endif // NODE_H








