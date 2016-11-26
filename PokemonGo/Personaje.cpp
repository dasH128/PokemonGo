#include "Personaje.h"
using namespace System;

CPersonaje::CPersonaje(int x, int y)
{
	CPokemon *Zapdos = new CPokemon(145, 200, 90); MyPokemon.push_back(Zapdos);
	CPokemon *Moltres = new CPokemon(146, 260, 90); MyPokemon.push_back(Moltres);
	CPokemon *Articuno = new CPokemon(144, 320, 90); MyPokemon.push_back(Articuno);
	CPokemon *Mewtow = new CPokemon(150, 380, 90); MyPokemon.push_back(Mewtow);
	CPokemon *nuevo = new CPokemon(3, 380, 90); MyPokemon.push_back(nuevo);
	CPokemon *nuevo1 = new CPokemon(13, 380, 90); MyPokemon.push_back(nuevo1);
	CPokemon *nuevo2 = new CPokemon(52, 380, 90); MyPokemon.push_back(nuevo2);
	CPokemon *nuevo3 = new CPokemon(6, 380, 90); MyPokemon.push_back(nuevo3);
	CPokemon *nuevo4 = new CPokemon(128, 380, 90); MyPokemon.push_back(nuevo4);
	CPokemon *nuevo5 = new CPokemon(4, 380, 90); MyPokemon.push_back(nuevo5);
	CPokemon *nuevo6 = new CPokemon(9, 380, 90); MyPokemon.push_back(nuevo6);


	Pokeball = 5;
	Pociones = 5;
	Revivir = 5;
	Monedas = 0;
	PolvoEstelar = 500;
	Caramelo = 15;
	Experiencia = 0;
	MaestroPokemon = false;

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
	//buffer->Graphics->DrawRectangle(Pens::Red, RecCamina1);
	Rectangle RecCamina2 = Rectangle(x + 15 * 0.39, y + 49 * 0.39 + dy, (ancho - 34) * 0.39, (alto - 54) * 0.39);
	//buffer->Graphics->DrawRectangle(Pens::Blue, RecCamina2);

	int X = 0, Y = 0;

	Pen^ Pen0 = gcnew Pen(Color::Black, 3.0f);
	Pen^ Pen1 = gcnew Pen(Color::Blue, 3.0f);
	Pen^ Pen2 = gcnew Pen(Color::Yellow, 3.0f);
	Pen^ Pen3 = gcnew Pen(Color::Green, 3.0f);
	for (int i = 0; i < 18; i++)
	{
		X = 0;
		for (int j = 0; j < 40; j++){
			Rectangle RecValidar = Rectangle(X, Y, 25, 25);
			//e->Graphics->DrawRectangle(blackPen, x, y, width, height); Map[i][j]*25
			//buffer->Graphics->DrawRectangle(blackPen,0+(25*i),0+(25*j),25,25);
			if (Map[i][j] == 0){
				//buffer->Graphics->DrawRectangle(Pen0, 0 + (25 * j), 0 + (25 * i), 25, 25);
			}
			if (Map[i][j] == 1){
				buffer->Graphics->DrawRectangle(Pen1, 0 + (25 * j), 0 + (25 * i), 25, 25);
				if (RecCamina1.IntersectsWith(RecValidar)) dx = 0;
				if (RecCamina2.IntersectsWith(RecValidar)) dy = 0;
			}
			if (Map[i][j] == 2){
				buffer->Graphics->DrawRectangle(Pen2, 0 + (25 * j), 0 + (25 * i), 25, 25);

				if (RecCamina1.IntersectsWith(RecValidar)){
					objContr->setNivel(2);	this->x = 950;	this->y = 200;
				} 
				if (RecCamina2.IntersectsWith(RecValidar)){
					objContr->setNivel(2);	this->x = 950;	this->y = 200;
				} 

			}
			if (Map[i][j] == 3){
				buffer->Graphics->DrawRectangle(Pen2, 0 + (25 * j), 0 + (25 * i), 25, 25);
				if (RecCamina1.IntersectsWith(RecValidar)){
					objContr->setNivel(1);	this->x = 30;	this->y = 250;
				}
				if (RecCamina2.IntersectsWith(RecValidar)){
					objContr->setNivel(1);	this->x = 30;	this->y = 250;
				}

			}
			if (Map[i][j] == 4){
				buffer->Graphics->DrawRectangle(Pen2, 0 + (25 * j), 0 + (25 * i), 25, 25);

				if (RecCamina1.IntersectsWith(RecValidar)){
					objContr->setNivel(1);	this->x = 450;	this->y = 20;
				}
				if (RecCamina2.IntersectsWith(RecValidar)){
					objContr->setNivel(1);	this->x = 450;	this->y = 20;
				}

			}
			if (Map[i][j] == 5){
				buffer->Graphics->DrawRectangle(Pen2, 0 + (25 * j), 0 + (25 * i), 25, 25);

				if (RecCamina1.IntersectsWith(RecValidar)){
					
					objContr->setNivel(0);	this->x = 450;	this->y = 400;
				}
				if (RecCamina2.IntersectsWith(RecValidar)){
					objContr->setNivel(0);	this->x = 450;	this->y = 400;
				}

			}
			if (Map[i][j] == 10){
				Random r;
				Random Id;
				int id = Id.Next(1, 151);
				
				buffer->Graphics->DrawRectangle(Pen3, 0 + (25 * j), 0 + (25 * i), 25, 25);

				if (RecCamina1.IntersectsWith(RecValidar)){
					if (r.Next(0,25) == 20){ 
						CPokemon *nuevo = new CPokemon(id,X, Y);
						nuevo->Pintar(buffer, id);
						objContr->Agregar(nuevo);
						objContr->PintarIniciales(buffer);;

					}
				}
				if (RecCamina2.IntersectsWith(RecValidar)){
					if (r.Next(0, 25) == 20){
						CPokemon *nuevo = new CPokemon(id, X, Y);
						nuevo->Pintar(buffer, id);
					}
				}
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





int  CPersonaje::getPokeball(){ return Pokeball; }
int  CPersonaje::getPociones(){ return Pociones; }
int  CPersonaje::getRevivir(){ return Revivir; }
int  CPersonaje::getMonedas(){ return Monedas; }
int CPersonaje::getPolvoEstelar(){ return PolvoEstelar; }
int CPersonaje::getCaramelo(){ return Caramelo; }
int  CPersonaje::getExperiencia(){ return Experiencia; }
bool CPersonaje::getMaestroPokemon(){ return MaestroPokemon; }
	
void CPersonaje::setPokeball(int valor){ Pokeball = valor; }
void CPersonaje::setPociones(int valor){ Pociones = valor; }
void CPersonaje::setRevivir(int valor){ Revivir = valor; }
void CPersonaje::setMonedas(int valor){ Monedas = valor; }
void CPersonaje::setPolvoEstelar(int valor){ PolvoEstelar = valor; }
void CPersonaje::setCaramelo(int valor){ Caramelo = valor; }
void CPersonaje::setExperiencia(int valor){ Experiencia = valor; }
void CPersonaje::setMaestroPokemon(bool valor){ MaestroPokemon = valor; }

int CPersonaje::getNPokemon(){ return MyPokemon.size(); }
CPokemon * CPersonaje::getPokemon(int pos){ return MyPokemon[pos]; }

void CPersonaje::GuardarPokemon(CPokemon *nuevo){ MyPokemon.push_back(nuevo); }
void CPersonaje::TransferirPokemon(int pos){ MyPokemon.erase(begin(MyPokemon) + pos); }
void CPersonaje::DarPuntoCosmico(int pos){
	MyPokemon[pos]->setPuntoCosmico(MyPokemon[pos]->getPuntoCosmico()+100);
	setPolvoEstelar(getPolvoEstelar()-100);
}