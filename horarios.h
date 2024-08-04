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
