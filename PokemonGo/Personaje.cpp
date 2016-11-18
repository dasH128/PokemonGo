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

void CPersonaje::Mover(BufferedGraphics ^buffer, Bitmap ^ash, int Map[18][40], CControlador *objContr){

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
	Dibujar(buffer, ash, Map, objContr);
}

void CPersonaje::Dibujar(BufferedGraphics ^buffer, Bitmap ^img, int Map[18][40], CControlador *objContr){

	Rectangle RecCamina1 = Rectangle(x + 15 * 0.39 + dx, y + 49 * 0.39, (ancho - 34) * 0.39, (alto - 54) * 0.39);
	buffer->Graphics->DrawRectangle(Pens::Red, RecCamina1);
	Rectangle RecCamina2 = Rectangle(x + 15 * 0.39, y + 49 * 0.39 + dy, (ancho - 34) * 0.39, (alto - 54) * 0.39);
	buffer->Graphics->DrawRectangle(Pens::Blue, RecCamina2);

	int X = 0, Y = 0;

	Pen^ Pen0 = gcnew Pen(Color::Black, 3.0f);
	Pen^ Pen1 = gcnew Pen(Color::Blue, 3.0f);
	Pen^ Pen2 = gcnew Pen(Color::Yellow, 3.0f);
	for (int i = 0; i < 18; i++)
	{
		X = 0;
		for (int j = 0; j < 40; j++){
			Rectangle RecValidar = Rectangle(X, Y, 25, 25);
			//e->Graphics->DrawRectangle(blackPen, x, y, width, height); Map[i][j]*25
			//buffer->Graphics->DrawRectangle(blackPen,0+(25*i),0+(25*j),25,25);
			if (Map[i][j] == 0){
				buffer->Graphics->DrawRectangle(Pen0, 0 + (25 * j), 0 + (25 * i), 25, 25);
			}
			if (Map[i][j] == 1){
				buffer->Graphics->DrawRectangle(Pen1, 0 + (25 * j), 0 + (25 * i), 25, 25);
				if (RecCamina1.IntersectsWith(RecValidar)) dx = 0;
				if (RecCamina2.IntersectsWith(RecValidar)) dy = 0;
			}
			if (Map[i][j] == 2){
				buffer->Graphics->DrawRectangle(Pen2, 0 + (25 * j), 0 + (25 * i), 25, 25);
				//objContr->setNivel(1);
				if (RecCamina1.IntersectsWith(RecValidar)) objContr->setNivel(1);
				if (RecCamina2.IntersectsWith(RecValidar)) objContr->setNivel(1);
			}
			X = X + 25;
		}
		Y = Y + 25;
	}

	Rectangle PorcionUsar = Rectangle(ancho*indiceX,alto*indiceY,ancho,alto);
	Rectangle Aumento = Rectangle(x,y,ancho*0.5,ancho*0.5);
	buffer->Graphics->DrawImage(img,Aumento,PorcionUsar,GraphicsUnit::Pixel);
	x += dx;
	y += dy;

}


