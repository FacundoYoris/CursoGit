#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad,goles,cantidadJugadores=0,d3=0,maximoGoles=0,sinGoles=0,g16=0,g23=0,g30=0;
	char posicion;
	float m25=0;
	ifstream fe;
	fe.open("ternas.txt",ios::in);
	if(!fe){
		cout << "El fichero no se ha abierto"<<endl;
	} else {
		while(!fe.eof()){
			fe>>edad>>posicion>>goles;
			cantidadJugadores++;
				if(edad>25){
					m25++;
				}
				if(posicion=='D' and goles >3){
					d3++;
				}
				if(maximoGoles<goles){
					maximoGoles= goles;
				}
				if(posicion=='A' and goles==0){
					sinGoles++;
				}
				if(edad>15 and edad<23){
					g16 += goles; 
				}else if(edad>22 and edad <30){
					g23 += goles;
				} else if (edad >29 and edad <37){
					g30 +=goles;
				}
		}
		
	}
	cout << "SE INFORMA: "<<endl;
	cout << setw(5)<<""<< "Porc. judadores > 25 años : "<<(m25/cantidadJugadores)*100<<"%"<<endl;
	cout << setw(5)<<""<< "Cant.defensores > 3 goles : "<<d3<<endl;
	cout << setw(5)<<""<< "Cantidad  goles  goleador : "<<maximoGoles<<endl;
	cout << setw(5)<<""<< "Atacante sin goles hechos : "<<sinGoles<<endl;
	cout << setw(5)<<""<< "Cantidad de goles por edad: "<<endl;
	cout << setw(10)<<""<<"16-22 años: "<<g16<<endl;
	cout << setw(10)<<""<<"23-29 años: "<<g23<<endl;
	cout << setw(10)<<""<<"30-36 años: "<<g30<<endl;
	cout << "Casco la concha de tu hermana" << endl;
	return 0;
}

