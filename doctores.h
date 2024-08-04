#ifndef DOCTORES_H
#define DOCTORES_H
#include<string>
struct INFORMACION{
	string nombres;
	string apellidos;
	char telefono[100];
	string especialidad;
	string estado_civil;
	string pais;
};
INFORMACION doc_nuevos();
INFORMACION doc_mostrar();
#endif
