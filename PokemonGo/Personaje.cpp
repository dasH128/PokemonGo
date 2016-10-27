#include "Personaje.h"


CPersonaje::CPersonaje(int x, int y)
{
	this->x = x;
	this->y = y;
	dx = 0;
	dy = 0;
	direccion = Direcciones::Ninguna;
	ultima = Direcciones::Abajo;
	indiceX = 0;
	indiceY = 0;
	ancho = 64;
	alto = 64;
}


CPersonaje::~CPersonaje()
{
}

void CPersonaje::Mover(BufferedGraphics ^buffer, Bitmap ^ash, Bitmap ^map){

	switch (direccion)
	{
	case Direcciones::Arriba:
		indiceY = 3;
		if (indiceX >= 0  && indiceX < 3){
			indiceX++;
		}else{
			indiceX = 0;
		}
		dx = 0;
		dy = -5;
		ultima = Arriba;
		break;
	case Direcciones::Abajo:
		indiceY = 0;
		if (indiceX >= 0 && indiceX < 3){
			indiceX++;
		}
		else{
			indiceX = 0;
		}
		dx = 0;
		dy = 5;
		ultima = Abajo;
		break;
	case Direcciones::Izquierda:
		indiceY = 1;
		if (indiceX >= 0 && indiceX < 3){
			indiceX++;
		}
		else{
			indiceX = 0;
		}
		dx = -5;
		dy = 0;
		ultima = Izquierda;
		break;
	case Direcciones::Derecha:
		indiceY = 2;
		if (indiceX >= 0 && indiceX < 3){
			indiceX++;
		}
		else{
			indiceX = 0;
		}
		dx = 5;
		dy = 0;
		ultima = Derecha;
		break;
	case Direcciones::Ninguna:
		dx = dy = 0;
		switch (Ninguna)
		{
		case Direcciones::Arriba:
			indiceX = 0;
			indiceY = 3;
			break;
		case Direcciones::Abajo:
			indiceX = 0;
			indiceY = 0;
			break;
		case Direcciones::Izquierda:
			indiceX = 0;
			indiceY = 1;
			break;
		case Direcciones::Derecha:
			indiceX = 0;
			indiceY = 2;
			break;
		}
		break;
	}
	Dibujar(buffer,ash, map);
}

void CPersonaje::Dibujar(BufferedGraphics ^buffer, Bitmap ^img, Bitmap ^map){
	Rectangle PorcionUsar = Rectangle(ancho*indiceX,alto*indiceY,ancho,alto);
	Rectangle Aumento = Rectangle(x,y,ancho*0.5,ancho*0.5);
	buffer->Graphics->DrawImage(img,Aumento,PorcionUsar,GraphicsUnit::Pixel);
	x += dx;
	y += dy;

}


