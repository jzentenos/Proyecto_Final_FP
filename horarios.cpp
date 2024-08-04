#include <iostream>
#include <string>
#include "doctores.h"

const int MAX_AGENDAS = 100;

struct Agenda {
    string fecha;      
    string horaEntrada; 
    string horaSalida;  
};

void agregarAgenda(Agenda agendas[], int& contador, const string& fecha, const string& horaEntrada, const string& horaSalida) {
   if (contador < MAX_AGENDAS) {
        agendas[contador].fecha = fecha;
        agendas[contador].horaEntrada = horaEntrada;
        agendas[contador].horaSalida = horaSalida;
        contador++;
    } else {
        cout << "No se pueden agregar más agendas. Límite alcanzado." << endl;
    }
}

void mostrarAgendas(const Agenda agendas[], int contador) {
    cout << "Fecha        | Hora Entrada | Hora Salida" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < contador; ++i) {
        cout << agendas[i].fecha
                  << " | " << agendas[i].horaEntrada
                  << " | " << agendas[i].horaSalida
                  << endl;
    }
}


