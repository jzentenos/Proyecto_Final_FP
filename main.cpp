//Menu Principal
#include <iostream>
using namespace std;

int main (){
	int n;
	do {
		cout<<"\n--------------------"<<endl;
		cout<<"   MENU PRINCIPAL"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"1. Sub-menu PACIENTE"<<endl;
		cout<<"2. Sub-menu DOCTOR"<<endl;
		cout<<"3. Agendar cita"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"Ingrese opcion: "; cin>> n;
		
		switch (n){
			case 1:
				cout<<"\nAhora esta en Sub-menu PACIENTE.";
				break;
			case 2:
				cout<<"\nAhora esta en Sub-menu DOCTORES.";
				break;
			case 3:
				cout<<"\nAhora esta en Agendar cita.";
				break;
			case 0:
				cout<<"\nSaliendo...";
				break;
			default:
				cout<<"\nOpcion invalida. Ingrese su opcion de nuevo: ";
				break;
		}
		
	} while (n!=0);
	
	return 0;
}