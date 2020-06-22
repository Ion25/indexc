#include <iostream>
#include "Persona.cpp"
#include "genericList.h"
using namespace std;

void print(genericList<Persona> *&Lista)
{
	Persona *nodos;
	Iterator<Persona> *ite = Lista->getIterator();	
	int id = 1;
	
	while(ite->moreNode())
	{
		nodos = ite->getInfo();
		cout << "#" << id << endl;
		cout << nodos->getNombre() << endl;
		cout << nodos->getApellido() << endl;
		cout << nodos->getEdad() << endl;
		
		id++;
		cout << "\n";		
	}
	cout << "Tamano: " <<Lista->size() << endl;
	cout << "-----------------------\n"; 
}


int main(){
	
	genericList<Persona> *Lista = new genericList<Persona>;
	
	Persona *persona1 = new Persona("Lily","Mendoza",22);
	Persona *persona2 = new Persona("Carlos","Soliz",23);
	Persona *persona3 = new Persona("Ricardo","Mendez",25);
	Persona *persona4 = new Persona("Camila","Cespedes",24);
	Persona *persona5 = new Persona("Karla","Hernandez",27);
	
	/* */
	Lista->addNode(persona1);
	Lista->addNode(persona2);
	Lista->addNode(persona3);
	Lista->addNode(persona4);
	print(Lista);
	
	Lista->addNode(persona5,3);
	print(Lista);
	
	/* */
	Lista->remove();
	print(Lista);
	
	Lista->remove(5);
	print(Lista);
	
	Lista->remove(1);
	print(Lista);

	/* */
	cout << "<-begin()->" << endl;
	Lista->begin();		//Primer Nodo
	Persona *begin = Lista->begin().getInfo();
	cout << begin->getNombre() << endl;
	cout << begin->getApellido() << endl;
	cout << begin->getEdad() << endl;
	cout << "\n";

	/* */
	cout << "<-end()->" << endl;
	Lista->end();  		//Último Nodo
	Persona *end = Lista->end().getInfo();
	cout << end->getNombre() << endl;
	cout << end->getApellido() << endl;
	cout << end->getEdad() << endl;
	cout << "\n";

	




	return 0;
}
