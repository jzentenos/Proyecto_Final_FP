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
	for(int i=0; i<n; i++){
		cout<<"\nPaciente #"<<(i + 1)<<":"<< endl;
        cout<<"Nombres: "<<datos[i].nombre<< endl;
        cout<<"Apellidos: "<<datos[i].apellido<< endl;
        cout<<"DNI: "<<datos[i].DNI<<endl;
        cout<<"Numero de celular: "<<datos[i].telefono<<endl;
        cout<<"Fecha de nacimiento: "<< datos[i].nacimiento.dia<<"/"<<datos[i].nacimiento.mes<<"/"<<datos[i].nacimiento.periodo<<endl;
        cout<<"Direccion:"<<endl;
        cout<<"Calle: "<<datos[i].direccion.calle<< endl;
        cout<<"Numero de casa: "<<datos[i].direccion.numero<<endl;
        cout<<"Codigo postal: "<<datos[i].direccion.cod_postal<<endl;
        cout<<"Referencia: "<<datos[i].direccion.referencia<<endl;
        cout<<"--------------------------"<<endl;
	}
	
}
