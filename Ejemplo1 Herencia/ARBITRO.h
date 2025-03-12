#pragma once
#include "PLAYER.h"
class ARBITRO
{
private:
    PLAYER jugador1;
    PLAYER jugador2;

public:
    ARBITRO(PLAYER j1, PLAYER j2);
    short evaluar(); 
};

