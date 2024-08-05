//Menu Principal
#include <iostream>
#include <string>
#include "doctores.h"
#include "validacion.h"
#include "datos.h"

using namespace std;

void Paciente ();
void Doctor ();
void Cita ();

int main (){
	int n;
	do {
		cout<<"\n--------------------"<<endl;
		cout<<"   MENU PRINCIPAL"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"1. Sub-menu PACIENTE"<<endl;
		cout<<"2. Sub-menu DOCTOR"<<endl;
		cout<<"3. Sub-menu CITAS"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"Ingrese opcion: "; cin>> n;
		
		switch (n){
			case 1:
				Paciente ();
			break;
			case 2:
				Doctor();
			break;
			case 3:
				Cita();
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

//Arreglo global datos
//Variable global numDatos que contiene el numero de pacientes
DATOS datos[1000];
int numDatos;

void Paciente (){
	int a;
	do {
		cout<<"\n--------------------"<<endl;
		cout<<"Sub-menu PACIENTE"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"1. Agregar paciente"<<endl;
		cout<<"2. Lista de pacientes registrados"<<endl;
		cout<<"0. Regresar al Menu Principal -> "<<endl;
		cout<<"Ingrese opcion: "; cin>> a;
		
		switch (a){
			case 1:
				numDatos = leer_datos(datos);
			break;
			case 2:
				if(numDatos = 0){
					cout<<"\nAun no se registraron pacientes.";
				}
				else {
					mostrar_datos(datos,numDatos);
				}
			break;
			case 0:
				cout<<"Regresando al Menu Principal...";
				system("pause");
			break;
			default:
				cout<<"Opcion invalida, intentelo de nuevo"<<endl;
				system("pause");
			break;
		}
	} while (a!=0);
}

//Arreglo global doctores
//Variable global numDoctores que contiene el numero de doctores
INFORMACION doctores[1000];
int numDoctores = 0;

void Doctor (){
	int b;
	do {
		cout<<"\n--------------------"<<endl;
		cout<<"Sub-menu DOCTOR"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"1. Agregar doctor"<<endl;
		cout<<"2. Lista de doctores registrados"<<endl;
		cout<<"0. Regresar al Menu Principal -> "<<endl;
		cout<<"Ingrese opcion: "; cin>> b;
		
		switch (b){
			case 1:
				numDoctores = doc_nuevos(doctores);
			break;
			case 2:
				if(numDoctores = 0){
					cout<<"\nAun no se registraron doctores.";
				}
				else {
					doc_mostrar(doctores,numDoctores);
				}
			break;
			case 0:
				cout<<"Regresando al Menu Principal...";
				system("pause");
			break;
			default:
				cout<<"Opcion invalida, intentelo de nuevo"<<endl;
				system("pause");
			break;
		}
	} while (b!=0);
}
	
void Cita (){
	int c;
	do {
		cout<<"\n--------------------"<<endl;
		cout<<"Sub-menu CITAS"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"1. Agendar cita"<<endl;
		cout<<"2. Lista de citas registradas"<<endl;
		cout<<"0. Regresar al Menu Principal -> "<<endl;
		cout<<"Ingrese opcion: "; cin>> c;
		
		switch (c){
			case 1:
				cout<<"Ahora esta en Agendar cita";
			break;
			case 2:
				cout<<"Ahora esta en Lista de citas registradas";
			break;
			case 0:
				cout<<"Regresando al Menu Principal...";
				system("pause");
			break;
			default:
				cout<<"Opcion invalida, intentelo de nuevo"<<endl;
				system("pause");
			break;
		}
	} while (c!=0);
}