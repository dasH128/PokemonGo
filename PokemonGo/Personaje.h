#pragma once
#include "Pokemon.h"
#include "Controlador.h"
#include <vector>


using namespace System::Drawing;
enum Direcciones{ Ninguna, Arriba, Abajo, Izquierda, Derecha };


class CPersonaje
{
private:
	int Pokeball;
	int Pociones;
	int Revivir;
	int Monedas;
	int PolvoEstelar;
	int Caramelo;
	int Experiencia;
	bool MaestroPokemon;
	vector <CPokemon*> MyPokemon;

	int x, y, indiceX, indiceY, ancho, alto;
	Direcciones ultima;
	int dx, dy;
public:
	CPersonaje(int x, int y);
	~CPersonaje();

	Direcciones direccion;
	void Mover(BufferedGraphics ^buffer, Bitmap ^ash, int Map[18][40], CControlador *objContr); // 
	void Dibujar(BufferedGraphics ^buffer, Bitmap ^ash, int Map[18][40], CControlador *objContr); //Bitmap fondoMap 
	
	int getPokeball();
	int getPociones();
	int getRevivir();
	int getMonedas();
	int getPolvoEstelar();
	int getCaramelo();
	int getExperiencia();
	bool getMaestroPokemon();

	void setPokeball(int valor);
	void setPociones(int valor);
	void setRevivir(int valor);
	void setMonedas(int valor);
	void setCaramelo(int valor);
	void setPolvoEstelar(int valor);
	void setExperiencia(int valor);
	void setMaestroPokemon(bool valor);

	int getNPokemon();
	CPokemon *getPokemon(int pos);
	void GuardarPokemon(CPokemon *nuevo);
	void TransferirPokemon(int pos);
	void DarPuntoCosmico(int pos);
};		   

