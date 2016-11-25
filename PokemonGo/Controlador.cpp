#include "Controlador.h"


CControlador::CControlador(int nivel)
{
	this->nivel = nivel;
	PokemonesInciales();
	/*CPokemon *Articuno = new CPokemon(); FirstPokemon.push_back(Articuno);
	CPokemon *Zapdos = new CPokemon(); FirstPokemon.push_back(Zapdos);
	CPokemon *Moltres = new CPokemon(); FirstPokemon.push_back(Moltres);*/

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
void CControlador::PokemonesInciales(){
	CPokemon *Articuno = new CPokemon(144, 580, 185); FirstPokemon.push_back(Articuno);
	CPokemon *Zapdos = new CPokemon(145, 830, 300); FirstPokemon.push_back(Zapdos);
	CPokemon *Moltres = new CPokemon(146, 830, 30); FirstPokemon.push_back(Moltres);
	CPokemon *Mewtow = new CPokemon(150, 50, 300); FirstPokemon.push_back(Mewtow);
}

void CControlador::PintarIniciales(BufferedGraphics ^buffer){ //void PintarIniciales(BufferedGraphics ^buffer)


	for (int i = 0; i < FirstPokemon.size(); i++)
	{
		int xID = FirstPokemon[i]->getId();
		FirstPokemon[i]->Pintar(buffer, FirstPokemon[i]->getId());
	}
}