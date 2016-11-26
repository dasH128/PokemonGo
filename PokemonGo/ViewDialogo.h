#pragma once
#include "Controlador.h"
#include "ViewAtraparPokemon.h"

namespace PokemonGo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewDialogo
	/// </summary>
	public ref class ViewDialogo : public System::Windows::Forms::Form
	{
	private:
		String^ Mensaje;
		int s;
	public:
		ViewDialogo(String^ msj, CControlador *objControlador, int pos)
		{
			InitializeComponent();
			s = pos;
			Mensaje = msj + "  " ;
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewDialogo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_msj;
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			this->lb_msj = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lb_msj
			// 
			this->lb_msj->BackColor = System::Drawing::SystemColors::Control;
			this->lb_msj->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lb_msj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_msj->Location = System::Drawing::Point(187, 27);
			this->lb_msj->Name = L"lb_msj";
			this->lb_msj->Size = System::Drawing::Size(281, 119);
			this->lb_msj->TabIndex = 0;
			this->lb_msj->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(259, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ViewDialogo::button1_Click);
			// 
			// ViewDialogo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 248);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lb_msj);
			this->Name = L"ViewDialogo";
			this->Text = L"ViewDialogo";
			this->Load += gcnew System::EventHandler(this, &ViewDialogo::ViewDialogo_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ViewDialogo_Load(System::Object^  sender, System::EventArgs^  e) {
		lb_msj->Text = Mensaje;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (s==-1 )
		{
			ViewAtraparPokemon^ atrapalo = gcnew ViewAtraparPokemon(NULL);
			this->Close();

		}
		if (s>=0 )
		{
			ViewAtraparPokemon^ atrapalo = gcnew ViewAtraparPokemon(NULL);
			this->Close();

			atrapalo->Show();
		}




	}
	};
}
