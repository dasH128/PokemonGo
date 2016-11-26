#pragma once
using namespace System::Drawing;

class CPokeparada
{
private:
	int x, y, a, h;
public:
	CPokeparada(int x, int y);
	~CPokeparada();

	void Pintar(BufferedGraphics ^buffer);
	bool SelectParada(int PosXMouse, int PosYMouse);
};

