#pragma once
#include "Pokemon.h"
#include <vector>
using namespace std;

class CControlador
{

	vector <CPokemon*> FirstPokemon;
	int nivel;

public:
	CControlador(int nivel);
	~CControlador();


	int getNivel();
	void setNivel(int nivel);

	void PokemonesInciales();
	void PintarIniciales(BufferedGraphics ^buffer); //void PintarIniciales(BufferedGraphics ^buffer);
	
};

