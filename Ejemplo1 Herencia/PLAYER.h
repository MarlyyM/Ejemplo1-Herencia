#pragma once

class PLAYER
{
private:
	short jugada;

public:
	PLAYER();

	PLAYER(int opcion);

	void seleccionar();
	short getJugada();
	void setJugada(short x);

	void imprimir();	
};



