#pragma once
#include <vector>
using namespace std;
using namespace System::Drawing;

class CPokemon
{
	
private:
	
	int x, y, a, h;
	int id;
	char *nombre;
	int tipo;
	int atk1, atk2, atk3, atk4;

public:
	CPokemon();
	~CPokemon();

	CPokemon(int id, int x, int y);
	void CrearPokemon();
	void Pintar(BufferedGraphics ^buffer, int id);

	int getId();
};

