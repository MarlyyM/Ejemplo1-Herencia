#include "ARBITRO.h"
ARBITRO::ARBITRO(PLAYER j1, PLAYER j2) : jugador1(j1), jugador2(j2) {}

short ARBITRO::evaluar() {
    if (jugador1.getJugada() == jugador2.getJugada())
        return 0; 

    else if ((jugador1.getJugada() == 1 && jugador2.getJugada() == 3) || 
        (jugador1.getJugada() == 2 && jugador2.getJugada() == 1) || 
        (jugador1.getJugada() == 3 && jugador2.getJugada() == 2))   
        return 1; 
    else
        return -1; 
}