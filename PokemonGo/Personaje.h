#pragma once
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
	void Mover(BufferedGraphics ^buffer, Bitmap ^ash, Bitmap ^map); //, 
	void Dibujar(BufferedGraphics ^buffer, Bitmap ^ash, Bitmap ^map); //Bitmap fondoMap 
	
};

