#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main(){
	LinkedList lG;
	lG.insert(1);
	lG.insert(2);
	lG.insert(4);
	lG.print();
	lG.insert(3);
	lG.print();
	lG.insert(3);
	lG.print();
	lG.remove(3);
	lG.print();
	lG.remove(1);
	lG.print();
	lG.insert(0);
	lG.print();
	lG.insert(1);
	lG.print();
	lG.remove(2);
	lG.print();
	lG.insert(10);
	lG.print();
	lG.remove(1);
	lG.print();
	
	return 0;
}
