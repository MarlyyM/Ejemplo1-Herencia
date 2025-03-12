#include "PLAYER.h"
#include <iostream>
using namespace std;

PLAYER::PLAYER() {
    jugada = 0;
}

PLAYER::PLAYER(int opcion) {
    jugada = opcion;
}

void PLAYER::seleccionar() {
    int opcion;
    cout << "ELIJA su jugada (1=Piedra, 2=Papel, 3=Tijera):" << endl;
    cin >> opcion;
    setJugada(opcion);
}

short PLAYER::getJugada() {
    return jugada;
}

void PLAYER::setJugada(short x) {
    if (x >= 1 && x < 4)
    {
        jugada = x;
    }
    else {
        cout << "opcion invalida" << endl;
    }
}

void PLAYER::imprimir()
{
    cout << "opcion seleccionada" << jugada << endl;
}




