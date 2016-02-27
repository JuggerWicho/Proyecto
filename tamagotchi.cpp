#include <iostream>
using namespace std;
class tamagotchi{
	public:
		//ATRIBUTOS
		void setnombre(string Nnombre);
		string getnombre(void);
		void setedad( int Eedad);
		int getedad(void);
		void setpeso(float Ppeso);
		float getpeso(void);
		void setcolor( string Ccolor);
		string getcolor(void); 

		//MEDIDORES
		void setfelic ( int Ffelic);
		int getfelic(void);
		void setdinero(int Ddinero);
		int getdinero (void);
		void sethambre ( int Hhambre);
		int gethambre (void);
		void setaburr(int Aaburr);
		int getaburr(void);
		void setsueño(int Ssueno);
		int getsueño(void);
		void setsalud(int Ssalud);
		int getsalud(void);
		tamagotchi::tamagotchi();
		tamagotchi::~tamagotchi();
		
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
		int sueno;
		int salud; 
}; 
//SET
	void tamagotchi:: setnombre(string Nnombre){
		nombre = Nnombre;		
	}
	void tamagotchi:: setedad(int Eedad){
		edad = Eedad;
	}
	void tamagotchi::setpeso(float Ppeso){
		peso = Ppeso;
	}
	void tamagotchi::setcolor(string Ccolor){
		color = Ccolor;
	}
//GET 
	string tamagotchi::getnombre(void){
		return nombre;
	}
	int tamagotchi::getedad(void){
		return edad;
	}
	float tamagotchi::getpeso(void){
		return peso;
	}
	string tamagotchi::getcolor(void){
		return color;
	}
	
	 tamagotchi::tamagotchi(){
		nombre = "SinNombre";
		edad = 0;
		peso = 0 ;
		color = "SinColor";
		dinero = 100;
		felic = 75;
		hambre = 25;
		aburr = 25;
		sueno = 75;
		salud = 100;
	} 
int main(){
	tamagotchi mascota;
	string nombree;
	int eedad;
	string coloor;
	float pesoo;
	cout<<"Bienvenido"<<endl<<endl<<"Que nombre deseas ponerle a tu tamagotchi:"<<endl;
	cin>>nombree;
	mascota.setnombre(nombree);
	cout<<"Bien.."<<endl<<"Ahora, vamos a darle una edad a "<<mascota.getnombre()<<endl;
	cin>>eedad;
	mascota.setedad(eedad);
	cout<<"Una vez con esos datos,  necesitamos ponerle un peso"<<endl;
	cin>>pesoo;
	mascota.setpeso(pesoo);
	cout<<"Que color deseas que tenga "<<mascota.getnombre()<<endl;
	cin>>coloor;
	mascota.setcolor(coloor);
	cout<<"Esto son los datos de tu tamagotchi: "<<endl<<"Nombre: "<<mascota.getnombre()<<endl<<"Edad: "<<mascota.getedad()<<endl<<"Peso: "<<mascota.getpeso()<<endl<<"Color: "<<mascota.getcolor();
	cout<<"Que deseas hacer";
	cout<<"- - - - - -- - -  - - - - - - - - - - - - - - - - - - - ";
	cout<<"|           1.Alimentar...                             |";
	cout<<"|                                                      |";
	cout<<"|           2.Bañar                                    |";
	cout<<"|                                                      |";
	cout<<"|           3.Acariciar                                |";
	cout<<"|                                                      |";
	cout<<"|           4.Entrenar                                 |";
	cout<<"|                                                      |";
	cout<<"|           5.Jugar                                    |";
	cout<<"|                                                      |";
	cout<<"|___________6.Dormir___________________________________|";
		return 0;
}

