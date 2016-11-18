#pragma once
using namespace System::Drawing;

class CPokemon
{
private:
	int id;
	char *nombre;
	int tipo;
	int atk1, atk2, atk3, atk4;


public:
	CPokemon(int id);
	~CPokemon();

	void CrearPokemon();
	void Pintar();
};

