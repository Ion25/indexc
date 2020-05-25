#include <iostream>
#include "Persona.h"
//#include "Persona.cpp"
//#include "ArregloDePersonas.h"
using namespace std;



Persona::Persona()
{
	nombre = "";
	apellido = "";
	edad = 0;	
}

Persona::Persona(string nombre, string apellido, int edad)
{
	this -> nombre = nombre;
	this -> apellido = apellido;
	this -> edad = edad;
}

string Persona::getNombre() const
{
	return nombre;
}

string  Persona::getApellido() const
{
	return apellido;
}

int Persona::getEdad() const
{
	return edad;
}

void Persona::setNombre(const string nombre)
{
	this->nombre = nombre;
}

void Persona::setApellido(const string apellido)
{
	this->apellido = apellido;
}

void Persona::setEdad(const int edad)
{
	this->edad = edad;
}

class ArregloDePersonas:Persona{
	private:
		Persona *ptrP;
		int size;
	public:
		ArregloDePersonas();
		ArregloDePersonas(const Persona [],const int);
		ArregloDePersonas(const ArregloDePersonas &o);
		~ArregloDePersonas();
		void redimensionar(int );
		void push_back(const Persona &);
		void insert(const int, const Persona &);
		void remove(const int);
		const int getSize() const;
		void clear();
};


ArregloDePersonas::ArregloDePersonas()
{
	size = 0;
	ptrP = new Persona[size];
}

ArregloDePersonas::ArregloDePersonas(const Persona personas[], const int tam)
{
	size=tam;
	ptrP = new Persona[size];
	for(int i=0;i<size;i++)
		*(ptrP + i) = personas[i];
}

ArregloDePersonas::ArregloDePersonas(const ArregloDePersonas &o)
{
	size=o.size;
	ptrP = new Persona[size];
	for(int i=0;i<o.size;i++)
		*(ptrP + i) = *(o.ptrP + i);
}

ArregloDePersonas::~ArregloDePersonas()
{
	delete [] ptrP;
}

void ArregloDePersonas::redimensionar(int n)
{
	Persona *aux = new Persona[size];
	for(int i=0;i<size;i++)
		*(aux + i) = *(ptrP + i);
	delete [] ptrP;
	size = size + n;
	
	ptrP = new Persona[size];
	for(int i=0;i<size;i++)
		*(ptrP + i) = *(aux + i);
	delete [] aux;
}

void ArregloDePersonas::push_back(const Persona &p)
{
	this -> redimensionar(1);
	*(ptrP + size-1) = p;
}

void ArregloDePersonas::insert(const int pos, const Persona &p)
{
	this->redimensionar(1);
	
	for(int i=size-1;i>pos;i--)
		*(ptrP + i) = *(ptrP + i-1);
		
	*(ptrP + pos) = p;
}

void ArregloDePersonas::remove(const int pos)
{
	for(int i=pos;i<size-1;i++)
		*(ptrP + i) = *(ptrP + i + 1);
		
	this -> redimensionar(-1);
}

const int ArregloDePersonas::getSize()const
{
	return size;
}

void ArregloDePersonas::clear()
{
	this -> redimensionar(-size);
}





