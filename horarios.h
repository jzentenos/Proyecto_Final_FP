#ifndef HORARIOS_H
#define HORARIOS_H

#include <string>
#include "doctores.h"

const int MAX_AGENDAS = 100;

struct Agenda {
    string fecha;       
    string horaEntrada; 
    string horaSalida;  
};

void agregarAgenda(Agenda agendas[], int& contador, const string& fecha, const string& horaEntrada, const string& horaSalida);
void registro();
void mostrarAgendas(const Agenda agendas[], int contador);

#endif
