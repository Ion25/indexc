#include <iostream>
#include "Persona.h"
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

/*
int main(){
	Persona persona1("Lily","Mendoza",22);
	cout << persona1.getNombre() << endl;
	cout << persona1.getApellido() << endl;
	cout << persona1.getEdad() << endl;
	
	persona1.setNombre("Ricardo");
	persona1.setApellido("Perez");
	persona1.setEdad(25);
	
	cout << persona1.getNombre() << endl;
	cout << persona1.getApellido() << endl;
	cout << persona1.getEdad() << endl;
}
*/

