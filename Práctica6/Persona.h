using namespace std;

class Persona{
	private:
		string nombre;
		string apellido;
		int edad;
	public:
		Persona();
		Persona(string, string, int);
		string getNombre() const;
		string getApellido() const;
		int getEdad() const;
		void setNombre(const string);
		void setApellido(const string);
		void setEdad(const int);
};

