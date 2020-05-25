#include "Persona.h"
using namespace std;

class ArregloDePersonas{
	private:
		Persona *ptrP;
		int n;
	public:
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
