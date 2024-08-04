//Menu Principal
#include <iostream>
using namespace std;

void Paciente ();

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
				Paciente ();
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
				cout<<"\nOpcion invalida, intentelo de nuevo."<<endl;
				system("pause");
				break;
		}
		
	} while (n!=0);
	
	return 0;
}
	
void Paciente (){
	int a;
	do {
		cout<<"\n--------------------"<<endl;
		cout<<"Sub-menu PACIENTE"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"1. Agregar Paciente"<<endl;
		cout<<"2. Lista de pacientes registrados"<<endl;
		cout<<"0. Regresar al Menu Principal -> "<<endl;
		cout<<"Ingrese opcion: "; cin>> a;
		
		switch (a){
			case 1:
				cout<<"Ahora esta en Agregar paciente";
				break;
			case 2:
				cout<<"Ahora esta en Lista de pacientes registrados";
				break;
			case 0:
				cout<<"Regresando al Menu Principal...";
				break;
			default:
				cout<<"Opcion invalida, intentelo de nuevo"<<endl;
				system("pause");
				break;
		}
	} while (a!=0);
}