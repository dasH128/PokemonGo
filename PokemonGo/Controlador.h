#pragma once
#include "Pokemon.h"
#include "Pokeparada.h"
#include <vector>
using namespace std;

class CControlador
{
	CPokemon PokemonSalvaje;
	vector <CPokemon*> FirstPokemon;
	vector <CPokeparada*> FirstPokeparada;
	int nivel;

public:
	CControlador(int nivel);
	~CControlador();


	int getNivel();
	void setNivel(int nivel);

	void Agregar(CPokemon *nuevo);
	void PokemonesInciales();
	void PintarIniciales(BufferedGraphics ^buffer); //void PintarIniciales(BufferedGraphics ^buffer);
	bool ClickPokemon(int PosXMouse, int PosYMouse, CPokemon *oPok);
	bool ClickPokeparada(int PosXMouse, int PosYMouse);
	void PokeparadasIniciales();
	

};

