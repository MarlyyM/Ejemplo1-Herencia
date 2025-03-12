#include "PLAYERPc.h"
#include <stdlib.h>

void PLAYERPc::seleccionar() 
{
	int opcion = rand() % 3 + 1;
	setJugada(opcion);
}