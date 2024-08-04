#include "validacion.h"
bool val_num(const char var_evaluar[], int lon) {
    for (int i=0; i<lon; i++) {
        if(!isdigit(var_evaluar[i])) {  // Verificar cada carácter en la cadena
            return false;  // Si encuentra un carácter que no es dígito, retorna falso
        }
    }
    return true;  // Si todos los caracteres son dígitos, retorna verdadero
}
