#include <iostream>
using namespace std;
class tamagotchi{
	public:
		//ATRIBUTOS
		void setnombre(string nombre);
		string getedad (void);
		void setedad( int edad);
		int getedad(void);
		void setpeso(float peso);
		float getpeso(void);
		void setcolor( string color);
		string getcolor(void);
		//MEDIDORES
		void setfelic ( int felic);
		int getfelic(void);
		void setdinero(int dinero);
		int getdinero (void);
		void sethambre ( int hambre);
		int gethambre (void);
		void setaburr(int aburr);
		int getaburr(void);
		void setsue�o(int sue�o);
		int getsue�o(void);
		void setsalud(int salud);
		int getsalud(void);
		//METODOS
		void acariciar();
		void alimentar();
		void entrenar();
		void ba�ar();
		
	private:
		//ATRIBUTOS
		string color;
		string nombre;
		float peso;
		int edad;
		//MEDIDORES
		int felic;
		int dinero;
		int hambre;
		int aburr;
		int sue�o;
		int salud;
};
int main(){
	
	
	return 0;
}

