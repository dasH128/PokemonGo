#pragma once
#include "Personaje.h"

namespace PokemonGo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for ViewPerfil
	/// </summary>
	public ref class ViewPerfil : public System::Windows::Forms::Form
	{
	private:
		CPersonaje *objPersonaje;;
	public:
		ViewPerfil(CPersonaje *objPersona)
		{
			InitializeComponent();
			objPersonaje = objPersona;
			int dash = objPersona->getMonedas();
			int franche = objPersonaje->getMonedas();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewPerfil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListBox^  list_myPokemon;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lb_pokeball;
	private: System::Windows::Forms::Label^  lb_pociones;
	private: System::Windows::Forms::Label^  lb_revivir;
	private: System::Windows::Forms::Label^  lb_monedas;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lb_polvostelar;
	private: System::Windows::Forms::Label^  lb_caramelo;
	private: System::Windows::Forms::Label^  label10;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewPerfil::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->list_myPokemon = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lb_pokeball = (gcnew System::Windows::Forms::Label());
			this->lb_pociones = (gcnew System::Windows::Forms::Label());
			this->lb_revivir = (gcnew System::Windows::Forms::Label());
			this->lb_monedas = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lb_polvostelar = (gcnew System::Windows::Forms::Label());
			this->lb_caramelo = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N° Pokebolas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"N° Pociones";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 315);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"N° Revivir";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 339);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"N° Monedas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(117, 217);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"N° Experiencia";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(99, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Entrenador Pokemon";
			// 
			// list_myPokemon
			// 
			this->list_myPokemon->FormattingEnabled = true;
			this->list_myPokemon->Location = System::Drawing::Point(29, 436);
			this->list_myPokemon->Name = L"list_myPokemon";
			this->list_myPokemon->Size = System::Drawing::Size(320, 290);
			this->list_myPokemon->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 410);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Mis Pokemon";
			this->label7->Click += gcnew System::EventHandler(this, &ViewPerfil::label7_Click);
			// 
			// lb_pokeball
			// 
			this->lb_pokeball->AutoSize = true;
			this->lb_pokeball->Location = System::Drawing::Point(117, 265);
			this->lb_pokeball->Name = L"lb_pokeball";
			this->lb_pokeball->Size = System::Drawing::Size(35, 13);
			this->lb_pokeball->TabIndex = 8;
			this->lb_pokeball->Text = L"label8";
			// 
			// lb_pociones
			// 
			this->lb_pociones->AutoSize = true;
			this->lb_pociones->Location = System::Drawing::Point(117, 290);
			this->lb_pociones->Name = L"lb_pociones";
			this->lb_pociones->Size = System::Drawing::Size(35, 13);
			this->lb_pociones->TabIndex = 9;
			this->lb_pociones->Text = L"label9";
			// 
			// lb_revivir
			// 
			this->lb_revivir->AutoSize = true;
			this->lb_revivir->Location = System::Drawing::Point(117, 315);
			this->lb_revivir->Name = L"lb_revivir";
			this->lb_revivir->Size = System::Drawing::Size(41, 13);
			this->lb_revivir->TabIndex = 10;
			this->lb_revivir->Text = L"label10";
			// 
			// lb_monedas
			// 
			this->lb_monedas->AutoSize = true;
			this->lb_monedas->Location = System::Drawing::Point(117, 339);
			this->lb_monedas->Name = L"lb_monedas";
			this->lb_monedas->Size = System::Drawing::Size(41, 13);
			this->lb_monedas->TabIndex = 11;
			this->lb_monedas->Text = L"label11";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 744);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 45);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Transferir Pokemon";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ViewPerfil::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(88, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(174, 165);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(148, 744);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 45);
			this->button2->TabIndex = 14;
			this->button2->Text = L"+ 100 Polvo Estelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ViewPerfil::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 362);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"N° Polvo Cosmico";
			// 
			// lb_polvostelar
			// 
			this->lb_polvostelar->AutoSize = true;
			this->lb_polvostelar->Location = System::Drawing::Point(117, 362);
			this->lb_polvostelar->Name = L"lb_polvostelar";
			this->lb_polvostelar->Size = System::Drawing::Size(41, 13);
			this->lb_polvostelar->TabIndex = 16;
			this->lb_polvostelar->Text = L"label12";
			// 
			// lb_caramelo
			// 
			this->lb_caramelo->AutoSize = true;
			this->lb_caramelo->Location = System::Drawing::Point(117, 384);
			this->lb_caramelo->Name = L"lb_caramelo";
			this->lb_caramelo->Size = System::Drawing::Size(13, 13);
			this->lb_caramelo->TabIndex = 18;
			this->lb_caramelo->Text = L"3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(26, 384);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"N° Caramelos";
			// 
			// ViewPerfil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 801);
			this->Controls->Add(this->lb_caramelo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lb_polvostelar);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lb_monedas);
			this->Controls->Add(this->lb_revivir);
			this->Controls->Add(this->lb_pociones);
			this->Controls->Add(this->lb_pokeball);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->list_myPokemon);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ViewPerfil";
			this->Text = L"Perfil";
			this->Load += gcnew System::EventHandler(this, &ViewPerfil::ViewPerfil_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void Actulizar_MyPokemon(){
			list_myPokemon->Items->Clear();

			for (int i = 0; i < objPersonaje->getNPokemon(); i++){
				list_myPokemon->Items->Add("N° "+ objPersonaje->getPokemon(i)->getId()+ "\t "+ gcnew String(objPersonaje->getPokemon(i)->getNombre())+ 
					"\tvida " + objPersonaje->getPokemon(i)->getVida() + "\tnivel " + objPersonaje->getPokemon(i)->getNivel()+"\tpolvo "+objPersonaje->getPokemon(i)->getPuntoCosmico() );
			}

		}
		void Actualizar_Mochila(){
			lb_pokeball->Text = "X " + objPersonaje->getPokeball();
			lb_pociones->Text = "X " + objPersonaje->getPociones();
			lb_revivir->Text = "X " + objPersonaje->getRevivir();
			lb_monedas->Text = "X " + objPersonaje->getMonedas();
			lb_polvostelar->Text = " X " + objPersonaje->getPolvoEstelar();
			lb_caramelo->Text = " X " + objPersonaje->getCaramelo();
		}
	private: System::Void ViewPerfil_Load(System::Object^  sender, System::EventArgs^  e) {
		//objPersonaje
		Actulizar_MyPokemon();
		Actualizar_Mochila();


	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int pos;
	if (list_myPokemon->SelectedIndex != -1){
		pos = list_myPokemon->SelectedIndex;
	}
	objPersonaje->TransferirPokemon(pos);
	objPersonaje->setCaramelo(1 + objPersonaje->getCaramelo());
	Actulizar_MyPokemon();
	Actualizar_Mochila();

	/*
	oArrTransporte->eliminarEnPosicion(posSelec);
	actualizarLista();
	*/

}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int pos;
	if (list_myPokemon->SelectedIndex != -1){
		pos = list_myPokemon->SelectedIndex;
	}
	if (objPersonaje->getPolvoEstelar()>0){
		objPersonaje->DarPuntoCosmico(pos);

		Actulizar_MyPokemon();
		Actualizar_Mochila();
	}
	


}
};
}
