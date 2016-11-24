#pragma once
#include <vector>
using namespace std;
using namespace System::Drawing;

class CPokemon
{
	vector <CPokemon*> PokeIniciales;
private:
	int x, y, a, h;
	int id;
	char *nombre;
	int tipo;
	int atk1, atk2, atk3, atk4;

public:
	CPokemon(int id, int x, int y, int a, int h);
	~CPokemon();

	void CrearPokemon();
	void Pintar(Graphics ^g, int id);
	void PokemonInicial();
};

