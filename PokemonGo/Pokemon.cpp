#include "Pokemon.h"

/*
1 planta
2 fuego
3 agua
4 bicho
5 normal
6 veneno
7 trueno
8 tierra
9 psyquico
10 peleador
11 fantasma
12 hielo
13 dragon
*/
CPokemon::CPokemon(int id)
{
	nombre = new char[20];
	switch (id)
	{
		case 1: nombre = "bulbasour", tipo = 1; break;
		case 2: nombre = "Ivysaur", tipo = 1; break;
		case 3: nombre = "Venusaur", tipo = 1; break;
		case 4: nombre = "Charmander", tipo = 2; break;
		case 5: nombre = "Charmeleon", tipo = 2; break;
		case 6: nombre = "Charizard", tipo = 2; break;
		case 7: nombre = "Squirtle", tipo = 3; break;
		case 8: nombre = "Wartotle", tipo = 3; break;
		case 9: nombre = "Blastoise", tipo = 3; break;
		case 10: nombre = "Caterpie", tipo = 4; break;
		case 11: nombre = "Metapod", tipo = 4; break;
		case 12: nombre = "Butterfree", tipo = 4; break;
		case 13: nombre = "Weedle", tipo = 4; break;
		case 14: nombre = "Kakuna", tipo = 4; break;
		case 15: nombre = "Beedrill", tipo = 4; break;
		case 16: nombre = "Pidgey", tipo = 5; break;
		case 17: nombre = "Pidgeotto", tipo = 5; break;
		case 18: nombre = "Pidgeot", tipo = 5; break;
		case 19: nombre = "Ratata", tipo = 5; break;
		case 20: nombre = "Raticate", tipo = 5; break;
		case 21: nombre = "Spearow", tipo = 5; break;
		case 22: nombre = "Fearow", tipo = 5; break;
		case 23: nombre = "Ekans", tipo = 6; break;
		case 24: nombre = "Arbok", tipo = 6; break;
		case 25: nombre = "Pikachu", tipo = 7; break;
		case 26: nombre = "Raichu", tipo = 7; break;
		case 27: nombre = "Sandshrew", tipo = 8; break;
		case 28: nombre = "Sandlash", tipo = 8; break;
		case 29: nombre = "Nidoran", tipo = 6; break;
		case 30: nombre = "Nidorina", tipo = 6; break;
		case 31: nombre = "Nidoqueen", tipo = 6; break;
		case 32: nombre = "Nidoran", tipo = 6; break;
		case 33: nombre = "Nidorino", tipo = 6; break;
		case 34: nombre = "Nidoking", tipo = 6; break;
		case 35: nombre = "Clefairy", tipo = 5; break;
		case 36: nombre = "Clefable", tipo = 5; break;
		case 37: nombre = "Vulpix", tipo = 2; break;
		case 38: nombre = "Ninetales", tipo = 2; break;
		case 39: nombre = "Jigglypuff", tipo = 5; break;
		case 40: nombre = "Wigglytuff", tipo = 5; break;
		case 41: nombre = "Zubat", tipo = 6; break;
		case 42: nombre = "Golbat", tipo = 6; break;
		case 43: nombre = "Oddish", tipo = 1; break;
		case 44: nombre = "Gloom", tipo = 1; break;
		case 45: nombre = "Vileplume", tipo = 1; break;
		case 46: nombre = "Paras", tipo = 4; break;
		case 47: nombre = "Parasect", tipo = 4; break;
		case 48: nombre = "Venonat", tipo = 4; break;
		case 49: nombre = "Venomoth", tipo = 4; break;
		case 50: nombre = "Diglett", tipo = 8; break;
		case 51: nombre = "Dugtrio", tipo = 8; break;
		case 52: nombre = "Meowth", tipo = 5; break;
		case 53: nombre = "Persian", tipo = 5; break;
		case 54: nombre = "Psyduck", tipo = 3; break;
		case 55: nombre = "Golduck", tipo = 3; break;
		case 56: nombre = "Mankey", tipo = 5; break;
		case 57: nombre = "Primeape", tipo = 5; break;
		case 58: nombre = "Growlithe", tipo = 2; break;
		case 59: nombre = "Arcanine", tipo = 2; break;
		case 60: nombre = "Poliwag", tipo = 3; break;
		case 61: nombre = "Poliwhirl", tipo = 3; break;
		case 62: nombre = "Poliwrath", tipo = 3; break;
		case 63: nombre = "Abra", tipo = 9; break;
		case 64: nombre = "Kadabra", tipo = 9; break;
		case 65: nombre = "Alakazan", tipo = 9; break;
		case 66: nombre = "Machop", tipo = 10; break;
		case 67: nombre = "Machoke", tipo = 10; break;
		case 68: nombre = "Machamp", tipo = 10; break;
		case 69: nombre = "Bellsprout", tipo = 1; break;
		case 70: nombre = "Weepinbell", tipo = 1; break;
		case 71: nombre = "Victreebel", tipo = 1; break;
		case 72: nombre = "Tentacool", tipo = 3; break;
		case 73: nombre = "Tentacruel", tipo = 3; break;
		case 74: nombre = "Geodude", tipo = 8; break;
		case 75: nombre = "Graveler", tipo = 8; break;
		case 76: nombre = "Golem", tipo = 8; break;
		case 77: nombre = "Ponyta", tipo = 2; break;
		case 78: nombre = "Rapidash", tipo = 2; break;
		case 79: nombre = "Slowpoke", tipo = 3; break;
		case 80: nombre = "Slowbro", tipo = 3; break;
		case 81: nombre = "Magnemite", tipo = 7; break;
		case 82: nombre = "Magneton", tipo = 7; break;
		case 83: nombre = "Farfetch'd", tipo = 5; break;
		case 84: nombre = "Doduo", tipo = 5; break;
		case 85: nombre = "Dodrio", tipo = 5; break;
		case 86: nombre = "Seel", tipo = 3; break;
		case 87: nombre = "Dewgong", tipo = 3; break;
		case 88: nombre = "Grimer", tipo = 6; break;
		case 89: nombre = "Muk", tipo = 6; break;
		case 90: nombre = "Shellder", tipo = 3; break;
		case 91: nombre = "Cloyster", tipo = 3; break;
		case 92: nombre = "Gastly", tipo = 11; break;
		case 93: nombre = "Haunter", tipo = 11; break;
		case 94: nombre = "Gengar", tipo = 11; break;
		case 95: nombre = "Onix", tipo = 8; break;
		case 96: nombre = "Drowzee", tipo = 9; break;
		case 97: nombre = "Hypno", tipo = 9; break;
		case 98: nombre = "Krabby", tipo = 3; break;
		case 99: nombre = "Kingler", tipo = 3; break;
		case 100: nombre = "Voltorb", tipo = 7; break;
		case 101: nombre = "Electrode", tipo = 7; break;
		case 102: nombre = "Exeggcute", tipo = 1; break;
		case 103: nombre = "Exeggutor", tipo = 1; break;
		case 104: nombre = "Cubone", tipo = 8; break;
		case 105: nombre = "Marowak", tipo = 8; break;
		case 106: nombre = "Hitmonlee", tipo = 10; break;
		case 107: nombre = "Hitmonchan", tipo = 10; break;
		case 108: nombre = "Lickitung", tipo = 5; break;
		case 109: nombre = "Koffing", tipo = 6; break;
		case 110: nombre = "Weezing", tipo = 6; break;
		case 111: nombre = "Rhyhorn", tipo = 8; break;
		case 112: nombre = "Rhydon", tipo = 8; break;
		case 113: nombre = "Chansey", tipo = 5; break;
		case 114: nombre = "Tangela", tipo = 1; break;
		case 115: nombre = "Kangaskhan", tipo = 5; break;
		case 116: nombre = "Horsea", tipo = 3; break;
		case 117: nombre = "Seadra", tipo = 3; break;
		case 118: nombre = "Goldeen", tipo = 3; break;
		case 119: nombre = "Seaking", tipo = 3; break;
		case 120: nombre = "Staryu", tipo = 3; break;
		case 121: nombre = "Starmie", tipo = 3; break;
		case 122: nombre = "Mr. Mime", tipo = 9; break;
		case 123: nombre = "Scyther", tipo = 4; break;
		case 124: nombre = "Jynx", tipo = 12; break;
		case 125: nombre = "Electabuzz", tipo = 7; break;
		case 126: nombre = "Magmar", tipo = 2; break;
		case 127: nombre = "Pinsir", tipo = 4; break;
		case 128: nombre = "Tauros", tipo = 5; break;
		case 129: nombre = "Magikarp", tipo = 3; break;
		case 130: nombre = "Gyarados", tipo = 3; break;
		case 131: nombre = "Lapras", tipo = 3; break;
		case 132: nombre = "Ditto", tipo = 5; break;
		case 133: nombre = "Eevee", tipo = 5; break;
		case 134: nombre = "Vaporeon", tipo = 3; break;
		case 135: nombre = "Jolteon", tipo = 7; break;
		case 136: nombre = "Flareon", tipo = 2; break;
		case 137: nombre = "Porygon", tipo = 5; break;
		case 138: nombre = "Omanyte", tipo = 8; break;
		case 139: nombre = "Omaster", tipo = 8; break;
		case 140: nombre = "Kabuto", tipo = 8; break;
		case 141: nombre = "Kabutops", tipo = 8; break;
		case 142: nombre = "Aerodactyl", tipo = 8; break;
		case 143: nombre = "Snorlax", tipo = 5; break;
		case 144: nombre = "Articuno", tipo = 12; break;
		case 145: nombre = "Zapdos", tipo = 7; break;
		case 146: nombre = "Moltres", tipo = 2; break;
		case 147: nombre = "Dratini", tipo = 13; break;
		case 148: nombre = "Dragonair", tipo = 13; break;
		case 149: nombre = "Drafonite", tipo = 13; break;
		case 150: nombre = "Mewtwo", tipo = 9; break;
		case 151: nombre = "Mew", tipo = 9; break;
		
	}
}


CPokemon::~CPokemon()
{
}
void CPokemon::CrearPokemon(){

}
void CPokemon::Pintar(){
	Bitmap ^img;
	switch (id)
	{
	case 1: img = gcnew Bitmap("imagen/pokedex/001.png"); break;
	case 2: img = gcnew Bitmap("imagen/pokedex/002.png"); break;
	case 3: img = gcnew Bitmap("imagen/pokedex/003.png"); break;
	case 4: img = gcnew Bitmap("imagen/pokedex/004.png"); break;
	case 5: img = gcnew Bitmap("imagen/pokedex/005.png"); break;
	case 6: img = gcnew Bitmap("imagen/pokedex/006.png"); break;
	case 7: img = gcnew Bitmap("imagen/pokedex/007.png"); break;
	case 8: img = gcnew Bitmap("imagen/pokedex/008.png"); break;
	case 9: img = gcnew Bitmap("imagen/pokedex/009.png"); break;
	case 10: img = gcnew Bitmap("imagen/pokedex/010.png"); break;
	case 11: img = gcnew Bitmap("imagen/pokedex/011.png"); break;
	case 12: img = gcnew Bitmap("imagen/pokedex/012.png"); break;
	case 13: img = gcnew Bitmap("imagen/pokedex/013.png"); break;
	case 14: img = gcnew Bitmap("imagen/pokedex/014.png"); break;
	case 15: img = gcnew Bitmap("imagen/pokedex/015.png"); break;
	case 16: img = gcnew Bitmap("imagen/pokedex/016.png"); break;
	case 17: img = gcnew Bitmap("imagen/pokedex/017.png"); break;
	case 18: img = gcnew Bitmap("imagen/pokedex/018.png"); break;
	case 19: img = gcnew Bitmap("imagen/pokedex/019.png"); break;
	case 20: img = gcnew Bitmap("imagen/pokedex/020.png"); break;
	case 21: img = gcnew Bitmap("imagen/pokedex/021.png"); break;
	case 22: img = gcnew Bitmap("imagen/pokedex/022.png"); break;
	case 23: img = gcnew Bitmap("imagen/pokedex/023.png"); break;
	case 24: img = gcnew Bitmap("imagen/pokedex/024.png"); break;
	case 25: img = gcnew Bitmap("imagen/pokedex/025.png"); break;
	case 26: img = gcnew Bitmap("imagen/pokedex/026.png"); break;
	case 27: img = gcnew Bitmap("imagen/pokedex/027.png"); break;
	case 28: img = gcnew Bitmap("imagen/pokedex/028.png"); break;
	case 29: img = gcnew Bitmap("imagen/pokedex/029.png"); break;
	case 30: img = gcnew Bitmap("imagen/pokedex/030.png"); break;
	case 31: img = gcnew Bitmap("imagen/pokedex/031.png"); break;
	case 32: img = gcnew Bitmap("imagen/pokedex/032.png"); break;
	case 33: img = gcnew Bitmap("imagen/pokedex/033.png"); break;
	case 34: img = gcnew Bitmap("imagen/pokedex/034.png"); break;
	case 35: img = gcnew Bitmap("imagen/pokedex/035.png"); break;
	case 36: img = gcnew Bitmap("imagen/pokedex/036.png"); break;
	case 37: img = gcnew Bitmap("imagen/pokedex/037.png"); break;
	case 38: img = gcnew Bitmap("imagen/pokedex/038.png"); break;
	case 39: img = gcnew Bitmap("imagen/pokedex/039.png"); break;
	case 40: img = gcnew Bitmap("imagen/pokedex/040.png"); break;
	case 41: img = gcnew Bitmap("imagen/pokedex/041.png"); break;
	case 42: img = gcnew Bitmap("imagen/pokedex/042.png"); break;
	case 43: img = gcnew Bitmap("imagen/pokedex/043.png"); break;
	case 44: img = gcnew Bitmap("imagen/pokedex/044.png"); break;
	case 45: img = gcnew Bitmap("imagen/pokedex/045.png"); break;
	case 46: img = gcnew Bitmap("imagen/pokedex/046.png"); break;
	case 47: img = gcnew Bitmap("imagen/pokedex/047.png"); break;
	case 48: img = gcnew Bitmap("imagen/pokedex/048.png"); break;
	case 49: img = gcnew Bitmap("imagen/pokedex/049.png"); break;
	case 50: img = gcnew Bitmap("imagen/pokedex/050.png"); break;
	case 51: img = gcnew Bitmap("imagen/pokedex/051.png"); break;
	case 52: img = gcnew Bitmap("imagen/pokedex/052.png"); break;
	case 53: img = gcnew Bitmap("imagen/pokedex/053.png"); break;
	case 54: img = gcnew Bitmap("imagen/pokedex/054.png"); break;
	case 55: img = gcnew Bitmap("imagen/pokedex/055.png"); break;
	case 56: img = gcnew Bitmap("imagen/pokedex/056.png"); break;
	case 57: img = gcnew Bitmap("imagen/pokedex/057.png"); break;
	case 58: img = gcnew Bitmap("imagen/pokedex/058.png"); break;
	case 59: img = gcnew Bitmap("imagen/pokedex/059.png"); break;
	case 60: img = gcnew Bitmap("imagen/pokedex/060.png"); break;
	case 61: img = gcnew Bitmap("imagen/pokedex/061.png"); break;
	case 62: img = gcnew Bitmap("imagen/pokedex/062.png"); break;
	case 63: img = gcnew Bitmap("imagen/pokedex/063.png"); break;
	case 64: img = gcnew Bitmap("imagen/pokedex/064.png"); break;
	case 65: img = gcnew Bitmap("imagen/pokedex/065.png"); break;
	case 66: img = gcnew Bitmap("imagen/pokedex/066.png"); break;
	case 67: img = gcnew Bitmap("imagen/pokedex/067.png"); break;
	case 68: img = gcnew Bitmap("imagen/pokedex/068.png"); break;
	case 69: img = gcnew Bitmap("imagen/pokedex/069.png"); break;
	case 70: img = gcnew Bitmap("imagen/pokedex/070.png"); break;
	case 71: img = gcnew Bitmap("imagen/pokedex/071.png"); break;
	case 72: img = gcnew Bitmap("imagen/pokedex/072.png"); break;
	case 73: img = gcnew Bitmap("imagen/pokedex/073.png"); break;
	case 74: img = gcnew Bitmap("imagen/pokedex/074.png"); break;
	case 75: img = gcnew Bitmap("imagen/pokedex/075.png"); break;
	case 76: img = gcnew Bitmap("imagen/pokedex/076.png"); break;
	case 77: img = gcnew Bitmap("imagen/pokedex/077.png"); break;
	case 78: img = gcnew Bitmap("imagen/pokedex/078.png"); break;
	case 79: img = gcnew Bitmap("imagen/pokedex/079.png"); break;
	case 80: img = gcnew Bitmap("imagen/pokedex/080.png"); break;
	case 81: img = gcnew Bitmap("imagen/pokedex/081.png"); break;
	case 82: img = gcnew Bitmap("imagen/pokedex/082.png"); break;
	case 83: img = gcnew Bitmap("imagen/pokedex/083.png"); break;
	case 84: img = gcnew Bitmap("imagen/pokedex/084.png"); break;
	case 85: img = gcnew Bitmap("imagen/pokedex/085.png"); break;
	case 86: img = gcnew Bitmap("imagen/pokedex/086.png"); break;
	case 87: img = gcnew Bitmap("imagen/pokedex/087.png"); break;
	case 88: img = gcnew Bitmap("imagen/pokedex/088.png"); break;
	case 89: img = gcnew Bitmap("imagen/pokedex/089.png"); break;
	case 90: img = gcnew Bitmap("imagen/pokedex/090.png"); break;
	case 91: img = gcnew Bitmap("imagen/pokedex/091.png"); break;
	case 92: img = gcnew Bitmap("imagen/pokedex/092.png"); break;
	case 93: img = gcnew Bitmap("imagen/pokedex/093.png"); break;
	case 94: img = gcnew Bitmap("imagen/pokedex/094.png"); break;
	case 95: img = gcnew Bitmap("imagen/pokedex/095.png"); break;
	case 96: img = gcnew Bitmap("imagen/pokedex/096.png"); break;
	case 97: img = gcnew Bitmap("imagen/pokedex/097.png"); break;
	case 98: img = gcnew Bitmap("imagen/pokedex/098.png"); break;
	case 99: img = gcnew Bitmap("imagen/pokedex/099.png"); break;
	case 100: img = gcnew Bitmap("imagen/pokedex/100.png"); break;
	case 101: img = gcnew Bitmap("imagen/pokedex/101.png"); break;
	case 102: img = gcnew Bitmap("imagen/pokedex/102.png"); break;
	case 103: img = gcnew Bitmap("imagen/pokedex/103.png"); break;
	case 104: img = gcnew Bitmap("imagen/pokedex/104.png"); break;
	case 105: img = gcnew Bitmap("imagen/pokedex/105.png"); break;
	case 106: img = gcnew Bitmap("imagen/pokedex/106.png"); break;
	case 107: img = gcnew Bitmap("imagen/pokedex/107.png"); break;
	case 108: img = gcnew Bitmap("imagen/pokedex/108.png"); break;
	case 109: img = gcnew Bitmap("imagen/pokedex/109.png"); break;
	case 110: img = gcnew Bitmap("imagen/pokedex/110.png"); break;
	case 111: img = gcnew Bitmap("imagen/pokedex/111.png"); break;
	case 112: img = gcnew Bitmap("imagen/pokedex/112.png"); break;
	case 113: img = gcnew Bitmap("imagen/pokedex/113.png"); break;
	case 114: img = gcnew Bitmap("imagen/pokedex/114.png"); break;
	case 115: img = gcnew Bitmap("imagen/pokedex/115.png"); break;
	case 116: img = gcnew Bitmap("imagen/pokedex/116.png"); break;
	case 117: img = gcnew Bitmap("imagen/pokedex/117.png"); break;
	case 118: img = gcnew Bitmap("imagen/pokedex/118.png"); break;
	case 119: img = gcnew Bitmap("imagen/pokedex/119.png"); break;
	case 120: img = gcnew Bitmap("imagen/pokedex/120.png"); break;
	case 121: img = gcnew Bitmap("imagen/pokedex/121.png"); break;
	case 122: img = gcnew Bitmap("imagen/pokedex/122.png"); break;
	case 123: img = gcnew Bitmap("imagen/pokedex/123.png"); break;
	case 124: img = gcnew Bitmap("imagen/pokedex/124.png"); break;
	case 125: img = gcnew Bitmap("imagen/pokedex/125.png"); break;
	case 126: img = gcnew Bitmap("imagen/pokedex/126.png"); break;
	case 127: img = gcnew Bitmap("imagen/pokedex/127.png"); break;
	case 128: img = gcnew Bitmap("imagen/pokedex/128.png"); break;
	case 129: img = gcnew Bitmap("imagen/pokedex/129.png"); break;
	case 130: img = gcnew Bitmap("imagen/pokedex/130.png"); break;
	case 131: img = gcnew Bitmap("imagen/pokedex/131.png"); break;
	case 132: img = gcnew Bitmap("imagen/pokedex/132.png"); break;
	case 133: img = gcnew Bitmap("imagen/pokedex/133.png"); break;
	case 134: img = gcnew Bitmap("imagen/pokedex/134.png"); break;
	case 135: img = gcnew Bitmap("imagen/pokedex/135.png"); break;
	case 136: img = gcnew Bitmap("imagen/pokedex/136.png"); break;
	case 137: img = gcnew Bitmap("imagen/pokedex/137.png"); break;
	case 138: img = gcnew Bitmap("imagen/pokedex/138.png"); break;
	case 139: img = gcnew Bitmap("imagen/pokedex/139.png"); break;
	case 140: img = gcnew Bitmap("imagen/pokedex/140.png"); break;
	case 141: img = gcnew Bitmap("imagen/pokedex/141.png"); break;
	case 142: img = gcnew Bitmap("imagen/pokedex/142.png"); break;
	case 143: img = gcnew Bitmap("imagen/pokedex/143.png"); break;
	case 144: img = gcnew Bitmap("imagen/pokedex/144.png"); break;
	case 145: img = gcnew Bitmap("imagen/pokedex/145.png"); break;
	case 146: img = gcnew Bitmap("imagen/pokedex/146.png"); break;
	case 147: img = gcnew Bitmap("imagen/pokedex/147.png"); break;
	case 148: img = gcnew Bitmap("imagen/pokedex/148.png"); break;
	case 149: img = gcnew Bitmap("imagen/pokedex/149.png"); break;
	case 150: img = gcnew Bitmap("imagen/pokedex/150.png"); break;
	}

}