#pragma once
#include "Personaje.h"
#include "Controlador.h"
#include  "Mapas.h"
#include "Pokemon.h"

#include "ViewDialogo.h"
#include "ViewPokedex.h"
#include "ViewPerfil.h"
#include "ViewAtraparPokemon.h"
namespace PokemonGo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ViewPokemonGo
	/// </summary>
	public ref class ViewPokemonGo : public System::Windows::Forms::Form
	{
	private:
		CControlador *objControlador = new CControlador(0);
		Graphics ^g;
		BufferedGraphicsContext ^espacio;
		BufferedGraphics ^buffer;

		CPersonaje *oPersonaje = new CPersonaje(25,30);


	private: System::Windows::Forms::PictureBox^  pictureBox1;
			 //MapParque Bitmap ^Map = gcnew Bitmap("imagen/mapPokemon.png"); 
			 Bitmap ^ash = gcnew Bitmap("imagen/personaje2.png");
			 Bitmap ^Map0 = gcnew Bitmap("imagen/mapCasa.png");
			 Bitmap ^Map1 = gcnew Bitmap("imagen/mapPokemon.png");
			 Bitmap ^Map2 = gcnew Bitmap("imagen/MapParque.png");

			 /*
			 los mapas 
			 */

	public:
		ViewPokemonGo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			//oPokemon = new CPokemon();
			ash->MakeTransparent(ash->GetPixel(1, 1));

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~ViewPokemonGo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer_personaje;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewPokemonGo::typeid));
			this->timer_personaje = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer_personaje
			// 
			this->timer_personaje->Enabled = true;
			this->timer_personaje->Tick += gcnew System::EventHandler(this, &ViewPokemonGo::timer_personaje_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(678, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(190, 100);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ViewPokemonGo::pictureBox1_Click);
			// 
			// ViewPokemonGo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 452);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ViewPokemonGo";
			this->Text = L"ViewPokemonGo";
			this->Load += gcnew System::EventHandler(this, &ViewPokemonGo::ViewPokemonGo_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ViewPokemonGo::Presionar);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &ViewPokemonGo::Soltar);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewPokemonGo::Evento_DobleClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void CrearBuffer(){
			g = this->CreateGraphics();
			espacio = BufferedGraphicsManager::Current;
			buffer = espacio->Allocate(g, this->ClientRectangle);
		}
	private: System::Void Presionar(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		switch (e->KeyCode)
		{
		case Keys::Left:
			oPersonaje->direccion = Direcciones::Izquierda;
			break;
		case Keys::Right:
			oPersonaje->direccion = Direcciones::Derecha;
			break;
		case Keys::Up:
			oPersonaje->direccion = Direcciones::Arriba;
			break;
		case Keys::Down:
			oPersonaje->direccion = Direcciones::Abajo;
			break;
		/*case Keys::W:
			ViewPerfil^ perfil = gcnew ViewPerfil(oPersonaje);
			perfil->Show();
			break;*/
		case Keys::Q:
			ViewPokedex^ pokedex = gcnew ViewPokedex();
			pokedex->Show();
			break;
		}

		if (e->KeyCode == Keys::W){
			ViewPerfil^ perfil = gcnew ViewPerfil(oPersonaje);
			perfil->Show();
		}

	}
	private: System::Void Soltar(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		oPersonaje->direccion = Direcciones::Ninguna;
	}
	private: System::Void timer_personaje_Tick(System::Object^  sender, System::EventArgs^  e) {
		
		CrearBuffer();
		
		if (objControlador->getNivel() == 0 ){
			buffer->Graphics->DrawImage(Map0, 0, 0, this->ClientSize.Width, this->ClientSize.Height);
			oPersonaje->Mover(buffer, ash, MapaCasa, objControlador);
			//objControlador
			objControlador->PintarIniciales(buffer);//	objControlador->PintarIniciales(buffer);
			
		}
		if (objControlador->getNivel() == 1){
			buffer->Graphics->DrawImage(Map1, 0, 0, this->ClientSize.Width, this->ClientSize.Height);
			oPersonaje->Mover(buffer, ash, MapaPrincipal, objControlador);
		}
		if (objControlador->getNivel() == 2){
			buffer->Graphics->DrawImage(Map2, 0, 0, this->ClientSize.Width, this->ClientSize.Height);
			oPersonaje->Mover(buffer, ash, MapaParquel, objControlador);
			objControlador->PintarIniciales(buffer);
		}
		if (objControlador->getNivel() == 3){

		}
		if (objControlador->getNivel() == 4){

		}
		//Rectangle recFondo = Rectangle(0,0,imgMap->Width, imgMap->Height);
		//g->DrawImage(imgMap,g->VisibleClipBounds,recFondo, GraphicsUnit::Pixel);
		//buffer->Graphics->DrawImage(Map, 0, 0,recFondo, GraphicsUnit::Pixel );

		//oPersonaje->DibujarMap(buffer, Map,this->ClientSize.Width,this->ClientSize.Height);
		buffer->Render(g);


		delete buffer, espacio, g;
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ViewPokemonGo_Load(System::Object^  sender, System::EventArgs^  e) {
		//oPokemon->PokemonInicial();
		//objControlador->PokemonesInciales();
}
	private: System::Void Evento_DobleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		CPokemon *oPokem = new CPokemon();
		if (objControlador->ClickPokemon(e->X, e->Y, oPokem) == true){
			int pos=0;
			ViewDialogo^ msj = gcnew ViewDialogo("Desea Elegir este Pokemon ??? ", objControlador, pos);
			msj->ShowDialog();
		}

		if (objControlador->ClickPokeparada(e->X, e->Y) == true){
			int pos = -1;
			ViewDialogo^ msj = gcnew ViewDialogo("En hora buena usted gano: + 3 Pokebal +1Revivir ", objControlador, pos);
			oPersonaje->setPokeball(oPersonaje->getPokeball()+3);
			oPersonaje->setRevivir(oPersonaje->getRevivir() + 1);
			msj->ShowDialog();
		}



	}
};
}
