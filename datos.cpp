#include<iostream>
#include "datos.h"
#include<string>
using namespace std;
int leer_datos(DATOS datos[]){
	int a; //a: cantidad de pacientes a registrar
	cout<<"Ingrese la cantidad de pacientes a registrar: "; cin>>a;
	for(int i=0; i<a; i++){
		cin.ignore();
		cout<<"\nNombres: "; getline(cin,datos[i].nombre);
		cout<<"\nApellidos: "; getline(cin, datos[i].apellido); 
		cout<<"\nDNI: "; cin>>datos[i].DNI;
		cin.ignore();
		cout<<"\nNumero de celular: "; cin>>datos[i].telefono;
		cin.ignore();
		cout<<"\nFecha de nacimiento dd/mm/aaaa: "; 
		cin>>datos[i].nacimiento.dia>>datos[i].nacimiento.mes>>datos[i].nacimiento.periodo;
		cin.ignore();
		cout<<"\nDireccion";
		cout<<"\nCalle: "; getline(cin, datos[i].direccion.calle);
		cout<<"\nNumero de casa: "; cin>>datos[i].direccion.numero;
		cin.ignore();
		cout<<"\nCodigo postal: "; cin>>datos[i].direccion.cod_postal;
		cin.ignore();
		cout<<"\nReferencia: "; getline(cin, datos[i].direccion.referencia);
	}
}
void mostrar_datos(DATOS datos[], int n){
	
	
}
