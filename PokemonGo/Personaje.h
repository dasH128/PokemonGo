#pragma once
#include "Controlador.h"

using namespace System::Drawing;
enum Direcciones{ Ninguna, Arriba, Abajo, Izquierda, Derecha };


class CPersonaje
{
private:
	int x, y, indiceX, indiceY, ancho, alto;
	Direcciones ultima;
	int dx, dy;
public:
	CPersonaje(int x, int y);
	~CPersonaje();

	Direcciones direccion;
	void Mover(BufferedGraphics ^buffer, Bitmap ^ash, int Map[18][40], CControlador *objContr); // 
	void Dibujar(BufferedGraphics ^buffer, Bitmap ^ash, int Map[18][40], CControlador *objContr); //Bitmap fondoMap 
	
};

