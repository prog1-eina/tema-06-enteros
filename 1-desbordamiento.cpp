/*******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 16 de octubre de 2020
 * Resumen: Programa que muestra los efectos de un desbordamiento.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que muestra los efectos de un desbordamiento.
 */
int main() {
    unsigned int factorial = 1;                // factorial = 0!
    for (unsigned int i = 1; i <= 18; i++) {
        factorial = i * factorial;             // factorial = i!
        cout << i << "! = " << factorial << endl;
    }

    return 1;
}
