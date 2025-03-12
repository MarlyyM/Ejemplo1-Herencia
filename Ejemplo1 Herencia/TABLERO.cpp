#include "TABLERO.h"
#include <iostream>
using namespace std;

void TABLERO::mostrarJugada(PLAYER j1, PLAYER j2) {
    string opciones[] = { "", "Piedra", "Papel", "Tijera" };
    cout << "Jugador 1: " << opciones[j1.getJugada()]
        << " Vs Jugador 2: " << opciones[j2.getJugada()] << endl;
}

void TABLERO::mostrarGanador(ARBITRO arbitro) {
    short resultado = arbitro.evaluar();
    if (resultado == 1)
        cout << "Resultado: Jugador 1 gana" << endl;
    else if (resultado == 0)
        cout << "Resultado: Es un empate" << endl;
    else
        cout << "Resultado: Jugador 2 gana" << endl;
}