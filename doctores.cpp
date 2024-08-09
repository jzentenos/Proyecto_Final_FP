#include<iostream>
#include "doctores.h"
#include<string>
#include "validacion.h"
using namespace std;
int doc_nuevos(INFORMACION doctores[]){
	int n;
	cout<<"Cantidad de doctores: "; cin>>n;
	for(int i=0; i<n; i++){
		cin.ignore();
		cout<<"--------------------------"<<endl;
		cout<<"Doctor #"<<i+1<<endl;
		cout<<"\nNombres: "; getline(cin, doctores[i].nombres);
		cout<<"\nApellidos: "; getline(cin, doctores[i].apellidos);
		cout<<"\nNumero de celular: "; cin>>doctores[i].telefono;
		//Validacion del numero de celular del doctor
		int lon2=strlen(doctores[i].telefono);
		while(!val_num(doctores[i].telefono, lon2)){
			cout<<"Numero de celular incorrecto. Ingrese nuevamente: ";
			cin>>doctores[i].telefono;
			lon2=strlen(doctores[i].telefono);
		}
		cin.ignore();
		cout<<"\nEspecialidad: "; getline(cin, doctores[i].especialidad);
		cout<<"\nEstado civil: "; getline(cin, doctores[i].estado_civil);
		cout<<"\nNacionalidad: "; getline(cin, doctores[i].pais);
		cout<<"\nDNI: "; cin>>doctores[i].DNI;
		//Validacion del DNI del doctor
		int lon3=strlen(doctores[i].DNI);
		while(!val_num(doctores[i].DNI, lon3) || lon3!=8){
			cout<<"Numero de celular incorrecto. Ingrese nuevamente: ";
			cin>>doctores[i].DNI;
			lon3=strlen(doctores[i].DNI);
		}
		cin.ignore();
		cout<<"\nEmail: "; getline(cin, doctores[i].email);
		cout<<"--------------------------"<<endl;
	}
	return n;
}
void doc_mostrar(INFORMACION doctores[],int contador){
	for(int i=0; i<contador; i++){
        cout<<"Doctor #"<<(i + 1)<<":"<<endl;
        cout<<"Nombres: "<<doctores[i].nombres<<endl;
        cout<<"Apellidos: "<<doctores[i].apellidos<<endl;
        cout<<"Numero de celular: "<< doctores[i].telefono<<endl;
        cout<<"Especialidad: "<<doctores[i].especialidad<<endl;
        cout<<"Estado civil: "<<doctores[i].estado_civil<<endl;
        cout<<"Nacionalidad: "<<doctores[i].pais<<endl;
        cout<<"DNI: "<<doctores[i].DNI<<endl;
        cout<<"Email: "<<doctores[i].email<<endl;
        cout<<"--------------------------"<<endl;
	}
	
}
