#ifndef LINDEKLIST_H
#define LINDEKLIST_H

class LinkedList{
private:
	class Node{
	public:
		int elem;
		Node *next;
		
		Node(){
			next = NULL;
		}
	};
	
	Node *head;
	int size;

public:
	LinkedList();
	~LinkedList();
	void insert(int);
	void remove(int);
	void print();
};

#endif

