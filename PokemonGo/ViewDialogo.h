#pragma once

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
	public:
		ViewDialogo(String^ msj)
		{
			InitializeComponent();
			Mensaje = msj;
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
			this->SuspendLayout();
			// 
			// lb_msj
			// 
			this->lb_msj->Location = System::Drawing::Point(187, 9);
			this->lb_msj->Name = L"lb_msj";
			this->lb_msj->Size = System::Drawing::Size(281, 137);
			this->lb_msj->TabIndex = 0;
			this->lb_msj->Text = L"label1";
			// 
			// ViewDialogo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 248);
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

	};
}
