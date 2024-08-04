#include<iostream>
#include "doctores.h"
#include<string>
using namespace std;
int doc_nuevos(INFORMACION doctores[]){
	INFORMACION info[1000];
	int n;
	cout<<"Cantidad de doctores: "; cin>>n;
	for(int i=0; i<n; i++){
		cin.ignore();
		cout<<"\nNombres: "; getline(cin, info[i].nombres);
		cout<<"\nApellidos: "; getline(cin, info[i].apellidos);
		cout<<"\nNumero de celular: "; cin>>info[i].telefono;
		cin.ignore();
		cout<<"\nEspecialidad: "; getline(cin, info[i].especialidad);
		cout<<"\nEstado civil: "; getline(cin, info[i].estado_civil);
		cout<<"\nNacionalidad: "; getline(cin, info[i].pais);
		cout<<"\nDNI: "; cin>>info[i].DNI;
		cin.ignore();
		cout<<"\nEmail: "; getline(cin, info[i].nombres);
	}
	return n;
}
