#include "Pokeparada.h"


CPokeparada::CPokeparada(int x, int y)
{
	this->x = x;
	this->y = y;
	a = 128;
	h = 128;
}


CPokeparada::~CPokeparada()
{
}

void CPokeparada::Pintar(BufferedGraphics ^buffer){
	Bitmap ^img = gcnew Bitmap("imagen/pokeparada.png");;

	Rectangle PorcionUsar = Rectangle(0, 0, h, a);
	Rectangle Aumento = Rectangle(x, y, h*0.3, a*0.3);

	buffer->Graphics->DrawImage(img, Aumento, PorcionUsar, GraphicsUnit::Pixel);
}

bool CPokeparada::SelectParada(int PosXMouse, int PosYMouse){
	bool devolver = false;
	if ((PosXMouse > x && PosXMouse <x + h*0.3) && (PosYMouse > y && PosYMouse <y + a*0.3))
	{
		devolver = true;
	}

	return devolver;
}