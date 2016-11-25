#pragma once
#include "Controlador.h"

namespace PokemonGo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewAtraparPokemon
	/// </summary>
	public ref class ViewAtraparPokemon : public System::Windows::Forms::Form
	{
	private:
		Bitmap ^pokeball;
		CControlador *objControlador;
		Timer ^objPok, ^objTim;
		Point oldXY, refXY;
		int dir;
		bool coge, press;

	public:
		ViewAtraparPokemon(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			objTim = gcnew Timer();
			objPok = gcnew Timer();
			oldXY = Point::Empty;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewAtraparPokemon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer_CapturarPokemon;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewAtraparPokemon::typeid));
			this->timer_CapturarPokemon = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer_CapturarPokemon
			// 
			this->timer_CapturarPokemon->Enabled = true;
			this->timer_CapturarPokemon->Tick += gcnew System::EventHandler(this, &ViewAtraparPokemon::timer_CapturarPokemon_Tick);
			// 
			// ViewAtraparPokemon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(453, 765);
			this->Name = L"ViewAtraparPokemon";
			this->Text = L"Atrapar Pokemon";
			this->Load += gcnew System::EventHandler(this, &ViewAtraparPokemon::Evento_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewAtraparPokemon::Evento_Click);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewAtraparPokemon::Evento_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewAtraparPokemon::Evento_MoverMouse);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewAtraparPokemon::Evento_MouseUp);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mov_pokebola(System::Object^  sender, System::EventArgs^  e) {
		//if (objControlador->getLANZO())
		//	objControlador->giro1_circulo();
	}
	private: System::Void timer_CapturarPokemon_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	}
	private: System::Void Evento_Click(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		
	}
	private: System::Void Evento_MoverMouse(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	
	}
	private: System::Void Evento_Load(System::Object^  sender, System::EventArgs^  e) {
		pokeball = gcnew Bitmap("pokeball.png");
		objPok->Interval = 2;
		objPok->Enabled = true;
		objPok->Tick += gcnew System::EventHandler(this, &ViewAtraparPokemon::mov_pokebola);
	}
	private: System::Void Evento_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	}
	private: System::Void Evento_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	}
	};
}
