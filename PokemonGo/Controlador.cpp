#include "Controlador.h"
#include "Personaje.h"

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
	
	CPokeparada *Pokepa1 = new CPokeparada(350, 50);; FirstPokeparada.push_back(Pokepa1);

}
void CControlador::PokeparadasIniciales(){
	//CPokeparada *Pokepa1 = new CPokeparada(350, 50);
}
void CControlador::PintarIniciales(BufferedGraphics ^buffer){ //void PintarIniciales(BufferedGraphics ^buffer)


	for (int i = 0; i < FirstPokemon.size(); i++)
	{
		int xID = FirstPokemon[i]->getId();
		FirstPokemon[i]->Pintar(buffer, FirstPokemon[i]->getId());
	}

	for (int i = 0; i < FirstPokeparada.size(); i++)
	{
		FirstPokeparada[i]->Pintar(buffer);
	}
}

bool CControlador::ClickPokemon(int PosXMouse, int PosYMouse, CPokemon *oPok){
	
	for (int i = 0; i < FirstPokemon.size(); i++)
	{
		if (FirstPokemon[i]->SelectPokemon(PosXMouse, PosYMouse) == true){
			//CPokemon =
			return true;
		}
	}
}

bool CControlador::ClickPokeparada(int PosXMouse, int PosYMouse){
	for (int i = 0; i < FirstPokeparada.size(); i++)
	{
		if (FirstPokeparada[i]->SelectParada(PosXMouse, PosYMouse) == true){
			
			return true;
		}
	}
}

void CControlador::Agregar(CPokemon *nuevo){
	FirstPokemon.push_back(nuevo);
}

