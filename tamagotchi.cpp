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
		void setsueño(int sueño);
		int getsueño(void);
		void setsalud(int salud);
		int getsalud(void);
		//METODOS
		void acariciar();
		void alimentar();
		void entrenar();
		void bañar();
		
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
		int sueño;
		int salud;
};
int main(){
	
	
	return 0;
}

