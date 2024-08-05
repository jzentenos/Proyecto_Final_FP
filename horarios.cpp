#include <iostream>
#include <string>
#include "doctores.h"
#include "horarios.h"

void agregarAgenda(Agenda agendas[], int& contador, const string& fecha, const string& horaEntrada, const string& horaSalida) {
   if (contador < MAX_AGENDAS) {
        agendas[contador].fecha = fecha;
        agendas[contador].horaEntrada = horaEntrada;
        agendas[contador].horaSalida = horaSalida;
        contador++;
    } else {
        cout << "No se pueden agregar m�s agendas. L�mite alcanzado." << endl;
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

void registro() {
    
    Agenda agendas[MAX_AGENDAS];
    int contador = 0;
    string fechaDisponible, horaEntrada, horaSalida;
    char continuar;
    do {
        cout << "Ingrese la fecha disponible del doctor (AAAA-MM-DD): ";
        getline(cin, fechaDisponible);
        cout << "Ingrese la hora de entrada del doctor (HH:MM): ";
        getline(cin, horaEntrada);
        cout << "Ingrese la hora de salida del doctor (HH:MM): ";
        getline(cin, horaSalida);

        agregarAgenda(agendas, contador, fechaDisponible, horaEntrada, horaSalida);

        cout << "�Desea agregar otra agenda? (s/n): ";cin >> continuar;
        cin.ignore(); 
    } while (continuar == 's' || continuar == 'S');
    mostrarAgendas(agendas, contador);
}



