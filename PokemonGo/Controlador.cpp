#include "Controlador.h"


CControlador::CControlador(int nivel)
{
	this->nivel = nivel;
}


CControlador::~CControlador()
{
}

int CControlador::getNivel(){
	return this->nivel;
}
void CControlador::setNivel(int nivel){
	this->nivel = nivel;
}