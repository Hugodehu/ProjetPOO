#pragma once
#include "BDDservice.h"
#include "BDDload.h"
#include "pch.h"
namespace Projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Choix : public System::Windows::Forms::Form
	{
	public: bool sup;
	public:
		Choix(bool superieur)
		{
			sup = superieur;
			InitializeComponent();
		}

	protected:

		~Choix()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	
	private: System::Windows::Forms::Button^ buttonAjouter;
	private: System::Windows::Forms::Button^ buttonModifier;
	private: System::Windows::Forms::Button^ buttonSupprimer;
	private: System::Windows::Forms::Button^ buttonAfficher;
	private: System::Windows::Forms::Button^ buttonValider;
	
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_BDDservice::Service_Authentification^ authentification;
	private: NS_BDDservice::service_Client^ Client;
	private: NS_BDDservice::service_Article^ Article;
	private: NS_BDDservice::service_Commande^ Commande;
	private: NS_BDDservice::service_Personnel^ Personnel;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	
	private: System::Windows::Forms::TextBox^ Box1;
	private: System::Windows::Forms::TextBox^ Box2;
	private: System::Windows::Forms::TextBox^ Box3;
	private: System::Windows::Forms::TextBox^ Box4;
	private: System::Windows::Forms::TextBox^ Box5;
	private: System::Windows::Forms::TextBox^ Box6;
	private: System::Windows::Forms::TextBox^ Box7;
	private: System::Windows::Forms::TextBox^ Box8;
	private: System::Windows::Forms::TextBox^ Box9;
	private: System::Windows::Forms::TextBox^ Box10;
	private: System::Windows::Forms::TextBox^ Box11;
	private: System::Windows::Forms::TextBox^ Box12;

	private: System::Windows::Forms::Button^ A_Propos;
	private: System::Data::DataSet^ result;
	

	private: short valider;

#pragma region Windows Form Designer generated code

		   void InitializeComponent()
		   {
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->buttonAjouter = (gcnew System::Windows::Forms::Button());
			   this->buttonModifier = (gcnew System::Windows::Forms::Button());
			   this->buttonSupprimer = (gcnew System::Windows::Forms::Button());
			   this->buttonAfficher = (gcnew System::Windows::Forms::Button());
			   this->buttonValider = (gcnew System::Windows::Forms::Button());
			   this->A_Propos = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->Box1 = (gcnew System::Windows::Forms::TextBox());
			   this->Box2 = (gcnew System::Windows::Forms::TextBox());
			   this->Box3 = (gcnew System::Windows::Forms::TextBox());
			   this->Box4 = (gcnew System::Windows::Forms::TextBox());
			   this->Box5 = (gcnew System::Windows::Forms::TextBox());
			   this->Box6 = (gcnew System::Windows::Forms::TextBox());
			   this->Box7 = (gcnew System::Windows::Forms::TextBox());
			   this->Box8 = (gcnew System::Windows::Forms::TextBox());
			   this->Box9 = (gcnew System::Windows::Forms::TextBox());
			   this->Box10 = (gcnew System::Windows::Forms::TextBox());
			   this->Box11 = (gcnew System::Windows::Forms::TextBox());
			   this->Box12 = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->AllowDrop = true;
			   this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			   this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				   L"Personnel", L"Clients", L"Commandes", L"Stock",
					   L"Statistiques"
			   });
			   this->comboBox1->Location = System::Drawing::Point(12, 230);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(203, 31);
			   this->comboBox1->TabIndex = 0;
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Choix::comboBox1_SelectedIndexChanged);
			   this->comboBox1->Click += gcnew System::EventHandler(this, &Choix::comboBox1_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			   this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(12, 12);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->Size = System::Drawing::Size(885, 191);
			   this->dataGridView1->TabIndex = 5;
			   // 
			   // buttonAjouter
			   // 
			   this->buttonAjouter->Location = System::Drawing::Point(117, 365);
			   this->buttonAjouter->Name = L"buttonAjouter";
			   this->buttonAjouter->Size = System::Drawing::Size(98, 66);
			   this->buttonAjouter->TabIndex = 1;
			   this->buttonAjouter->Text = L"Ajouter";
			   this->buttonAjouter->UseVisualStyleBackColor = true;
			   this->buttonAjouter->Visible = false;
			   this->buttonAjouter->Click += gcnew System::EventHandler(this, &Choix::buttonAjouter_Click);
			   // 
			   // buttonModifier
			   // 
			   this->buttonModifier->Location = System::Drawing::Point(12, 434);
			   this->buttonModifier->Name = L"buttonModifier";
			   this->buttonModifier->Size = System::Drawing::Size(99, 66);
			   this->buttonModifier->TabIndex = 2;
			   this->buttonModifier->Text = L"Modifier";
			   this->buttonModifier->UseVisualStyleBackColor = true;
			   this->buttonModifier->Visible = false;
			   this->buttonModifier->Click += gcnew System::EventHandler(this, &Choix::buttonModifier_Click);
			   // 
			   // buttonSupprimer
			   // 
			   this->buttonSupprimer->Location = System::Drawing::Point(117, 434);
			   this->buttonSupprimer->Name = L"buttonSupprimer";
			   this->buttonSupprimer->Size = System::Drawing::Size(98, 66);
			   this->buttonSupprimer->TabIndex = 3;
			   this->buttonSupprimer->Text = L"Supprimer";
			   this->buttonSupprimer->UseVisualStyleBackColor = true;
			   this->buttonSupprimer->Visible = false;
			   this->buttonSupprimer->Click += gcnew System::EventHandler(this, &Choix::buttonSupprimer_Click);
			   // 
			   // buttonAfficher
			   // 
			   this->buttonAfficher->Location = System::Drawing::Point(12, 365);
			   this->buttonAfficher->Name = L"buttonAfficher";
			   this->buttonAfficher->Size = System::Drawing::Size(99, 66);
			   this->buttonAfficher->TabIndex = 4;
			   this->buttonAfficher->Text = L"Afficher";
			   this->buttonAfficher->UseVisualStyleBackColor = true;
			   this->buttonAfficher->Visible = false;
			   this->buttonAfficher->Click += gcnew System::EventHandler(this, &Choix::buttonAfficher_Click);
			   // 
			   // buttonValider
			   // 
			   this->buttonValider->Location = System::Drawing::Point(245, 517);
			   this->buttonValider->Name = L"buttonValider";
			   this->buttonValider->Size = System::Drawing::Size(376, 42);
			   this->buttonValider->TabIndex = 23;
			   this->buttonValider->Text = L"Valider";
			   this->buttonValider->UseVisualStyleBackColor = true;
			   this->buttonValider->Visible = false;
			   this->buttonValider->Click += gcnew System::EventHandler(this, &Choix::buttonValider_Click);
			   // 
			   // A_Propos
			   // 
			   this->A_Propos->Location = System::Drawing::Point(12, 506);
			   this->A_Propos->Name = L"A_Propos";
			   this->A_Propos->Size = System::Drawing::Size(203, 53);
			   this->A_Propos->TabIndex = 32;
			   this->A_Propos->Text = L"� Propos";
			   this->A_Propos->UseVisualStyleBackColor = true;
			   this->A_Propos->Click += gcnew System::EventHandler(this, &Choix::button1_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(241, 206);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(76, 23);
			   this->label1->TabIndex = 15;
			   this->label1->Text = L"label1";
			   this->label1->Visible = false;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(456, 206);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(76, 23);
			   this->label2->TabIndex = 16;
			   this->label2->Text = L"label2";
			   this->label2->Visible = false;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(241, 260);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(76, 23);
			   this->label3->TabIndex = 17;
			   this->label3->Text = L"label3";
			   this->label3->Visible = false;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(456, 259);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(76, 23);
			   this->label4->TabIndex = 18;
			   this->label4->Text = L"label4";
			   this->label4->Visible = false;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(241, 311);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(76, 23);
			   this->label5->TabIndex = 19;
			   this->label5->Text = L"label5";
			   this->label5->Visible = false;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(456, 310);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(76, 23);
			   this->label6->TabIndex = 20;
			   this->label6->Text = L"label6";
			   this->label6->Visible = false;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(241, 362);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(76, 23);
			   this->label7->TabIndex = 21;
			   this->label7->Text = L"label7";
			   this->label7->Visible = false;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(456, 361);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(76, 23);
			   this->label8->TabIndex = 22;
			   this->label8->Text = L"label8";
			   this->label8->Visible = false;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(241, 412);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(76, 23);
			   this->label9->TabIndex = 28;
			   this->label9->Text = L"label9";
			   this->label9->Visible = false;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(456, 412);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(87, 23);
			   this->label10->TabIndex = 29;
			   this->label10->Text = L"label10";
			   this->label10->Visible = false;
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(241, 463);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(87, 23);
			   this->label11->TabIndex = 30;
			   this->label11->Text = L"label11";
			   this->label11->Visible = false;
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Location = System::Drawing::Point(456, 463);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(87, 23);
			   this->label12->TabIndex = 31;
			   this->label12->Text = L"label12";
			   this->label12->Visible = false;
			   // 
			   // Box1
			   // 
			   this->Box1->Location = System::Drawing::Point(245, 231);
			   this->Box1->Name = L"Box1";
			   this->Box1->Size = System::Drawing::Size(148, 31);
			   this->Box1->TabIndex = 14;
			   this->Box1->Visible = false;
			   // 
			   // Box2
			   // 
			   this->Box2->Location = System::Drawing::Point(460, 231);
			   this->Box2->Name = L"Box2";
			   this->Box2->Size = System::Drawing::Size(161, 31);
			   this->Box2->TabIndex = 13;
			   this->Box2->Visible = false;
			   // 
			   // Box3
			   // 
			   this->Box3->Location = System::Drawing::Point(245, 282);
			   this->Box3->Name = L"Box3";
			   this->Box3->Size = System::Drawing::Size(148, 31);
			   this->Box3->TabIndex = 12;
			   this->Box3->Visible = false;
			   // 
			   // Box4
			   // 
			   this->Box4->Location = System::Drawing::Point(460, 281);
			   this->Box4->Name = L"Box4";
			   this->Box4->Size = System::Drawing::Size(161, 31);
			   this->Box4->TabIndex = 11;
			   this->Box4->Visible = false;
			   // 
			   // Box5
			   // 
			   this->Box5->Location = System::Drawing::Point(245, 333);
			   this->Box5->Name = L"Box5";
			   this->Box5->Size = System::Drawing::Size(148, 31);
			   this->Box5->TabIndex = 10;
			   this->Box5->Visible = false;
			   // 
			   // Box6
			   // 
			   this->Box6->Location = System::Drawing::Point(460, 332);
			   this->Box6->Name = L"Box6";
			   this->Box6->Size = System::Drawing::Size(161, 31);
			   this->Box6->TabIndex = 8;
			   this->Box6->Visible = false;
			   // 
			   // Box7
			   // 
			   this->Box7->Location = System::Drawing::Point(245, 384);
			   this->Box7->Name = L"Box7";
			   this->Box7->Size = System::Drawing::Size(148, 31);
			   this->Box7->TabIndex = 9;
			   this->Box7->Visible = false;
			   // 
			   // Box8
			   // 
			   this->Box8->Location = System::Drawing::Point(460, 383);
			   this->Box8->Name = L"Box8";
			   this->Box8->Size = System::Drawing::Size(161, 31);
			   this->Box8->TabIndex = 7;
			   this->Box8->Visible = false;
			   // 
			   // Box9
			   // 
			   this->Box9->Location = System::Drawing::Point(245, 434);
			   this->Box9->Name = L"Box9";
			   this->Box9->Size = System::Drawing::Size(148, 31);
			   this->Box9->TabIndex = 24;
			   this->Box9->Visible = false;
			   // 
			   // Box10
			   // 
			   this->Box10->Location = System::Drawing::Point(460, 434);
			   this->Box10->Name = L"Box10";
			   this->Box10->Size = System::Drawing::Size(161, 31);
			   this->Box10->TabIndex = 26;
			   this->Box10->Visible = false;
			   // 
			   // Box11
			   // 
			   this->Box11->Location = System::Drawing::Point(245, 485);
			   this->Box11->Name = L"Box11";
			   this->Box11->Size = System::Drawing::Size(148, 31);
			   this->Box11->TabIndex = 25;
			   this->Box11->Visible = false;
			   // 
			   // Box12
			   // 
			   this->Box12->Location = System::Drawing::Point(460, 485);
			   this->Box12->Name = L"Box12";
			   this->Box12->Size = System::Drawing::Size(161, 31);
			   this->Box12->TabIndex = 27;
			   this->Box12->Visible = false;
			   // 
			   // Choix
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(909, 565);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->buttonAjouter);
			   this->Controls->Add(this->buttonModifier);
			   this->Controls->Add(this->buttonSupprimer);
			   this->Controls->Add(this->buttonAfficher);
			   this->Controls->Add(this->buttonValider);
			   this->Controls->Add(this->A_Propos);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->Box1);
			   this->Controls->Add(this->Box2);
			   this->Controls->Add(this->Box3);
			   this->Controls->Add(this->Box4);
			   this->Controls->Add(this->Box5);
			   this->Controls->Add(this->Box6);
			   this->Controls->Add(this->Box7);
			   this->Controls->Add(this->Box8);
			   this->Controls->Add(this->Box9);
			   this->Controls->Add(this->Box10);
			   this->Controls->Add(this->Box11);
			   this->Controls->Add(this->Box12);
			   this->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->MaximizeBox = false;
			   this->MinimizeBox = false;
			   this->Name = L"Choix";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"BDD service";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Choix::MyForm_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &Choix::Choix_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
		   //code a optimisiser ->
#pragma endregion
	private: System::Void Choix_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Article = gcnew NS_BDDservice::service_Article();
		this->authentification = gcnew NS_BDDservice::Service_Authentification();
		this->Client = gcnew NS_BDDservice::service_Client();
		this->Commande = gcnew NS_BDDservice::service_Commande();
		this->Personnel = gcnew NS_BDDservice::service_Personnel();
	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = MessageBox::Show("Vous, �tes s�r le point de quitter la page, �tes-vous s�r de ce choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes;
	}
	private: System::Void Validation_Click(System::Object^ sender, System::EventArgs^ e) {
	};
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0) { //personnel
			if (sup) {
				this->buttonAjouter->Visible = true;
				this->buttonSupprimer->Visible = true;
				this->buttonModifier->Visible = true;
				this->buttonAfficher->Visible = true;
			}
			else {
				MessageBox::Show("Vous n'avez pas les droits pour effectuer des modifications sur le personnel", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			}
		}
		else if (comboBox1->SelectedIndex == 1 || comboBox1->SelectedIndex == 2 || comboBox1->SelectedIndex == 3)  { //client
			this->buttonAjouter->Visible = true;
			this->buttonSupprimer->Visible = true;
			this->buttonModifier->Visible = true;
			this->buttonAfficher->Visible = true;
		}
		else if (comboBox1->SelectedIndex == 4) { //Statistique
			this->buttonAfficher->Visible = false;
			this->buttonSupprimer->Visible = false;
			this->buttonModifier->Visible = false;
			this->buttonAjouter->Visible = false;

		}
	}
	private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		//hide();
		//this->buttonValider->Visible = false;
		this->buttonValider->Visible = true;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->label10->Visible = false;
		this->label11->Visible = false;
		this->label12->Visible = false;
		this->Box1->Visible = false;
		this->Box2->Visible = false;
		this->Box3->Visible = false;
		this->Box4->Visible = false;
		this->Box5->Visible = false;
		this->Box6->Visible = false;
		this->Box7->Visible = false;
		this->Box8->Visible = false;
		this->Box9->Visible = false;
		this->Box10->Visible = false;
		this->Box11->Visible = false;
		this->Box12->Visible = false;
	}
		   private: System::Void buttonAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
			   //hide();
			   this->buttonValider->Visible = true;
			   this->label1->Visible = false;
			   this->label2->Visible = false;
			   this->label3->Visible = false;
			   this->label4->Visible = false;
			   this->label5->Visible = false;
			   this->label6->Visible = false;
			   this->label7->Visible = false;
			   this->label8->Visible = false;
			   this->label9->Visible = false;
			   this->label10->Visible = false;
			   this->label11->Visible = false;
			   this->label12->Visible = false;
			   this->Box1->Visible = false;
			   this->Box2->Visible = false;
			   this->Box3->Visible = false;
			   this->Box4->Visible = false;
			   this->Box5->Visible = false;
			   this->Box6->Visible = false;
			   this->Box7->Visible = false;
			   this->Box8->Visible = false;
			   this->Box9->Visible = false;
			   this->Box10->Visible = false;
			   this->Box11->Visible = false;
			   this->Box12->Visible = false;

			   if (comboBox1->SelectedIndex == 0) {
				   this->label11->Visible = true;
				   this->label11->Text = "Nom";
				   this->label12->Visible = true;
				   this->label12->Text = "Prenom";
				   this->Box11->Visible = true;
				   this->Box12->Visible = true;
				   valider = 1;
			   }
			   else if (comboBox1->SelectedIndex == 1) {
				   this->label11->Visible = true;
				   this->label11->Text = "Nom";
				   this->label12->Visible = true;
				   this->label12->Text = "Prenom";
				   this->Box11->Visible = true;
				   this->Box12->Visible = true;
				   valider = 2;
			   }
			   else if (comboBox1->SelectedIndex == 2) {
				   this->label11->Visible = true;
				   this->label11->Text = "Reference";
				   this->Box11->Visible = true;
				   valider = 3;
			   }
			   else if (comboBox1->SelectedIndex == 3) {
				   this->label11->Visible = true;
				   this->label11->Text = "Nom";
				   this->label12->Visible = true;
				   this->label12->Text = "Couleur";
				   this->Box11->Visible = true;
				   this->Box12->Visible = true;
				   valider = 4;
			   }
		   }
	private: System::Void buttonAjouter_Click(System::Object^ sender, System::EventArgs^ e) {
		//hide();
		this->buttonValider->Visible = true;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->label10->Visible = false;
		this->label11->Visible = false;
		this->label12->Visible = false;
		this->Box1->Visible = false;
		this->Box2->Visible = false;
		this->Box3->Visible = false;
		this->Box4->Visible = false;
		this->Box5->Visible = false;
		this->Box6->Visible = false;
		this->Box7->Visible = false;
		this->Box8->Visible = false;
		this->Box9->Visible = false;
		this->Box10->Visible = false;
		this->Box11->Visible = false;
		this->Box12->Visible = false;
		
		if (comboBox1->SelectedIndex == 0) { // personnel
			this->label2->Text = "Nom";
			this->label3->Text = "Prenom";
			this->label4->Text = "Date d'embauche";
			this->label5->Text = "Superieur";
			this->label6->Text = "Id superieur";
			this->label7->Text = "Email";
			this->label8->Text = "Mot de passe";
			//this->label9->Text = "Num�ro de rue";
			this->label10->Text = "Rue";
			this->label11->Text = "Ville";
			this->label12->Text = "Code Postal";
			this->label2->Visible = true;
			this->label3->Visible = true;
			this->label4->Visible = true;
			this->label5->Visible = true;
			this->label6->Visible = true;
			this->label7->Visible = true;
			this->label8->Visible = true;
			//this->label9->Visible = true;
			this->label10->Visible = true;
			this->label11->Visible = true;
			this->label12->Visible = true;
			this->Box2->Visible = true;
			this->Box3->Visible = true;
			this->Box3->Visible = true;
			this->Box4->Visible = true;
			this->Box5->Visible = true;
			this->Box6->Visible = true;
			this->Box7->Visible = true;
			this->Box8->Visible = true;
			//this->Box9->Visible = true;
			this->Box10->Visible = true;
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 5;
		}
		else if (comboBox1->SelectedIndex == 1) {	//client
			this->label2->Text = "Nom";
			this->label3->Text = "Prenom";
			this->label4->Text = "Date de Naissance";
			this->label5->Text = "Date premi�re commande";
			this->label6->Text = "Rue livraison";
			this->label7->Text = "Ville livraison";
			this->label8->Text = "Code Postal Livraison";
			this->label9->Text = "nrue facturation";
			this->label10->Text = "Rue Facturation";
			this->label11->Text = "Ville Facturation";
			this->label12->Text = "Code Postal Facturation";
			this->label2->Visible = true;
			this->label3->Visible = true;
			this->label4->Visible = true;
			this->label5->Visible = true;
			this->label6->Visible = true;
			this->label7->Visible = true;
			this->label8->Visible = true;
			this->label9->Visible = true;
			this->label10->Visible = true;
			this->label11->Visible = true;
			this->label12->Visible = true;
			this->Box2->Visible = true;
			this->Box3->Visible = true;
			this->Box3->Visible = true;
			this->Box4->Visible = true;
			this->Box5->Visible = true;
			this->Box6->Visible = true;
			this->Box7->Visible = true;
			this->Box8->Visible = true;
			this->Box9->Visible = true;
			this->Box10->Visible = true;
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 6;
		}
		else if (comboBox1->SelectedIndex == 2) { //commande

			this->label4->Text = "Nom Article";
			this->label5->Text = "Quantit�";
			this->label6->Text = "Couleur";
			this->label7->Text = "Tva commande";
			this->label8->Text = "Remise";
			this->label9->Text = "Moyen paiement";
			this->label10->Text = "Nombres paiements";
			this->label11->Text = "Date emission";
			this->label12->Text = "Date paiement";
			this->label6->Visible = true;
			this->label7->Visible = true;
			this->label8->Visible = true;
			this->label9->Visible = true;
			this->label10->Visible = true;
			this->label11->Visible = true;
			this->label12->Visible = true;
			this->Box6->Visible = true;
			this->Box7->Visible = true;
			this->Box8->Visible = true;
			this->Box9->Visible = true;
			this->Box10->Visible = true;
			this->Box11->Visible = true;
			this->Box12->Visible = true;

			valider = 7;
		}
		else if (comboBox1->SelectedIndex == 3) { //article
			this->label6->Text = "Nom";
			this->label7->Text = "Nature";
			this->label8->Text = "Prix HT";
			this->label9->Text = "TVA";
			this->label10->Text = "Quantit� stock";
			this->label11->Text = "Couleur";
			this->label12->Text = "Seuil r�aprovisionnement";
			this->label6->Visible = true;
			this->label7->Visible = true;
			this->label8->Visible = true;
			this->label9->Visible = true;
			this->label10->Visible = true;
			this->label11->Visible = true;
			this->label12->Visible = true;
			this->Box6->Visible = true;
			this->Box7->Visible = true;
			this->Box8->Visible = true;
			this->Box9->Visible = true;
			this->Box10->Visible = true;
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 8;
		}
	}
	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		//hide();
		this->buttonValider->Visible = true;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->label10->Visible = false;
		this->label11->Visible = false;
		this->label12->Visible = false;
		this->Box1->Visible = false;
		this->Box2->Visible = false;
		this->Box3->Visible = false;
		this->Box4->Visible = false;
		this->Box5->Visible = false;
		this->Box6->Visible = false;
		this->Box7->Visible = false;
		this->Box8->Visible = false;
		this->Box9->Visible = false;
		this->Box10->Visible = false;
		this->Box11->Visible = false;
		this->Box12->Visible = false;

		if (comboBox1->SelectedIndex == 0) { // personnel
			this->label1->Text = "Id";
			this->label2->Text = "Nom";
			this->label3->Text = "Prenom";
			this->label4->Text = "Date d'embauche";
			this->label5->Text = "Superieur";
			this->label6->Text = "Id superieur";
			this->label7->Text = "Email";
			this->label8->Text = "Mot de passe";
			//this->label9->Text = "num�ro rue";
			this->label10->Text = "Rue";
			this->label11->Text = "Ville";
			this->label12->Text = "Code Postal";
			this->label1->Visible = true;
			this->label2->Visible = true;
			this->label3->Visible = true;
			this->label4->Visible = true;
			this->label5->Visible = true;
			this->label6->Visible = true;
			this->label7->Visible = true;
			this->label8->Visible = true;
			//this->label9->Visible = true;
			this->label10->Visible = true;
			this->label11->Visible = true;
			this->label12->Visible = true;
			this->Box1->Visible = true;
			this->Box2->Visible = true;
			this->Box3->Visible = true;
			this->Box3->Visible = true;
			this->Box4->Visible = true;
			this->Box5->Visible = true;
			this->Box6->Visible = true;
			this->Box7->Visible = true;
			this->Box8->Visible = true;
			//this->Box9->Visible = true;
			this->Box10->Visible = true;
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 9;
		}
		else if (comboBox1->SelectedIndex == 1) {	//client
			this->label1->Text = "Id";
			this->label2->Text = "Nom";
			this->label3->Text = "Prenom";
			this->label4->Text = "Date Naissance";
			this->label5->Text = "Date premiere commande";
			this->label6->Text = "Rue Livraison";
			this->label7->Text = "Ville Livraison";
			this->label8->Text = "Code Postal Livraison";
			this->label10->Text = "Rue Facturation";
			this->label11->Text = "Ville Facturation";
			this->label12->Text = "Code Postal Facturation";
			this->label1->Visible = true;
			this->label2->Visible = true;
			this->label3->Visible = true;
			this->label4->Visible = true;
			this->label5->Visible = true;
			this->label6->Visible = true;
			this->label7->Visible = true;
			this->label8->Visible = true;
			this->label10->Visible = true;
			this->label11->Visible = true;
			this->label12->Visible = true;
			this->Box2->Visible = true;
			this->Box3->Visible = true;
			this->Box3->Visible = true;
			this->Box4->Visible = true;
			this->Box5->Visible = true;
			this->Box6->Visible = true;
			this->Box7->Visible = true;
			this->Box8->Visible = true;
			this->Box10->Visible = true;
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 10;
		}
		else if (comboBox1->SelectedIndex == 2) { //commande
			this->label3->Text = "Reference";
			this->label4->Text = "Nom Article";
			this->label5->Text = "Quantit�";
			this->label6->Text = "Couleur";
			this->label7->Text = "Tva commande";
			this->label8->Text = "Remise";
			this->label9->Text = "Moyen paiement";
			this->label10->Text = "Nombres paiements";
			this->label11->Text = "Date emission";
			this->label12->Text = "Date paiement";
			this->label3->Visible = true;
			this->label4->Visible = true;
			this->label5->Visible = true;
			this->label6->Visible = true;
			this->label7->Visible = true;
			this->label8->Visible = true;
			this->label9->Visible = true;
			this->label10->Visible = true;
			this->label11->Visible = true;
			this->label12->Visible = true;
			this->Box3->Visible = true;
			this->Box4->Visible = true;
			this->Box5->Visible = true;
			this->Box6->Visible = true;
			this->Box7->Visible = true;
			this->Box8->Visible = true;
			this->Box9->Visible = true;
			this->Box10->Visible = true;
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 11;
		}
		else if (comboBox1->SelectedIndex == 3) { //article
			this->label5->Text = "Id";
			this->label6->Text = "Nom";
			this->label7->Text = "Nature";
			this->label8->Text = "Prix HT";
			this->label9->Text = "TVA";
			this->label10->Text = "Quantit� stock";
			this->label11->Text = "Couleur";
			this->label12->Text = "Seuil r�aprovisionnement";
			this->label5->Visible = true;
			this->label6->Visible = true;
			this->label7->Visible = true;
			this->label8->Visible = true;
			this->label9->Visible = true;
			this->label10->Visible = true;
			this->label11->Visible = true;
			this->label12->Visible = true;
			this->Box5->Visible = true;
			this->Box6->Visible = true;
			this->Box7->Visible = true;
			this->Box8->Visible = true;
			this->Box9->Visible = true;
			this->Box10->Visible = true;
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 12;
		}
	}
	private: System::Void buttonSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		//hide();
		this->buttonValider->Visible = true;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->label10->Visible = false;
		this->label11->Visible = false;
		this->label12->Visible = false;
		this->Box1->Visible = false;
		this->Box2->Visible = false;
		this->Box3->Visible = false;
		this->Box4->Visible = false;
		this->Box5->Visible = false;
		this->Box6->Visible = false;
		this->Box7->Visible = false;
		this->Box8->Visible = false;
		this->Box9->Visible = false;
		this->Box10->Visible = false;
		this->Box11->Visible = false;
		this->Box12->Visible = false;
		if (comboBox1->SelectedIndex == 0) {
			this->label9->Text = "Id Personnel";
			this->label9->Visible = true;
			this->Box9->Visible = true;
			this->label11->Visible = true;
			this->label11->Text = "Nom";
			this->label12->Visible = true;
			this->label12->Text = "Prenom";
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 13;
		}
		else if (comboBox1->SelectedIndex == 1) {
			this->label9->Text = "Id client";
			this->label9->Visible = true;
			this->Box9->Visible = true;
			this->label11->Visible = true;
			this->label11->Text = "Nom";
			this->label12->Visible = true;
			this->label12->Text = "Prenom";
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 14;
		}
		else if (comboBox1->SelectedIndex == 2) {
			this->label11->Visible = true;
			this->label11->Text = "Reference";
			this->Box11->Visible = true;
			valider = 15;
		}
		else if (comboBox1->SelectedIndex == 3) {
			this->label11->Visible = true;
			this->label11->Text = "Nom";
			this->label12->Visible = true;
			this->label12->Text = "Couleur";
			this->Box11->Visible = true;
			this->Box12->Visible = true;
			valider = 16;
		}
	}
	private: System::Void buttonValider_Click(System::Object^ sender, System::EventArgs^ e) {
		result = gcnew Data::DataSet;
		if (valider == 1) {
			//fonction qui affiche le personnel
			this->dataGridView1->Refresh();
			this->result = this->Personnel->Afficher_personnel(this->Box11->Text, this->Box12->Text);
			this->dataGridView1->DataSource = this->result;
			this->dataGridView1->DataMember = "Personnel";
		}
		else if (valider == 2) {
			//fonction qui affiche le client
			this->dataGridView1->Refresh();
			this->result = this->Client->Afficher_client(this->Box11->Text,this->Box12->Text);
			this->dataGridView1->DataSource = this->result;
			this->dataGridView1->DataMember = "Client";
		}
		else if (valider == 3) {
			//fonction qui affiche la commande
			this->dataGridView1->Refresh();
			this->result = this->Commande->Afficher_commande(this->Box11->Text);
			this->dataGridView1->DataSource = this->result;
			this->dataGridView1->DataMember = "Commande";
		}
		else if (valider == 4) {
			//fonction qui affiche le stock
			this->dataGridView1->Refresh();
			this->result = this->Article->Afficher_article(this->Box11->Text, this->Box12->Text);
			this->dataGridView1->DataSource = this->result;
			this->dataGridView1->DataMember = "Article";
		}
		else if (valider == 5) {
			//fonction qui ajoute le personnel
			this->Personnel->Ajouter_personnel(this->Box2->Text, this->Box3->Text, this->Box4->Text, this->Box5->Text, this->Box6->Text, this->Box7->Text, this->Box8->Text, this->Box10->Text,this->Box11->Text,this->Box12->Text);
		}
		else if (valider == 6) {
			//fonction qui ajoute le client
			this->Client->Ajouter_client(this->Box2->Text, this->Box3->Text, this->Box4->Text, this->Box5->Text, this->Box6->Text, this->Box7->Text, this->Box8->Text, this->Box10->Text, this->Box11->Text, this->Box12->Text);
		}
		else if (valider == 7) {
			//fonction qui ajoute la commande
			this->Commande->Ajouter_commande(this->Box4->Text,this->Box5->Text, this->Box6->Text, this->Box7->Text, this->Box8->Text, this->Box9->Text, this->Box10->Text, this->Box11->Text,this->Box12->Text);
		}
		else if (valider == 8) {
			//fonction qui ajoute le stock
			this->Article->Ajouter_article(this->Box6->Text, this->Box7->Text, this->Box8->Text, this->Box9->Text, this->Box10->Text, this->Box11->Text, this->Box12->Text);
		}
		else if (valider == 9) {
			//fonction qui modifie le personnel
			this->Personnel->Modifier_personnel(this->Box1->Text,this->Box2->Text, this->Box3->Text, this->Box4->Text, this->Box5->Text, this->Box6->Text, this->Box7->Text, this->Box8->Text, this->Box10->Text, this->Box11->Text, this->Box12->Text);

		}
		else if (valider == 10) {
			//fonction qui modifie le client
			this->Client->Modifier_client(this->Box1->Text, this->Box2->Text, this->Box3->Text, this->Box4->Text, this->Box5->Text, this->Box6->Text, this->Box7->Text, this->Box8->Text, this->Box10->Text, this->Box11->Text, this->Box12->Text);
		}
		else if (valider == 11) {
			//fonction qui modifie la commande
			this->Commande->Modifier_commande(this->Box3->Text, this->Box4->Text, this->Box5->Text, this->Box6->Text, this->Box7->Text, this->Box8->Text, this->Box9->Text, this->Box10->Text, this->Box11->Text, this->Box12->Text);

		}
		else if (valider == 12) {
			//fonction qui modifie le stock
			this->Article->Modifier_article(this->Box5->Text,this->Box6->Text, this->Box7->Text, this->Box8->Text, this->Box9->Text, this->Box10->Text, this->Box11->Text, this->Box12->Text);
		}
		else if (valider == 13) {
			//fonction qui supprime un personnel
			this->Personnel->effacer_personnel(this->Box9->Text, this->Box11->Text,this->Box12->Text);
		}
		else if (valider == 14) {
			//fonction qui supprime un client
			this->Client->effacer_client(this->Box9->Text, this->Box11->Text, this->Box12->Text);
		}
		else if (valider == 15) {
			//fonction qui supprime la commande
			this->Commande->effacer_commande(this->Box11->Text);
		}
		else if (valider == 16) {
			//fonction qui supprime un article
			this->Article->effacer_article(this->Box11->Text, this->Box12->Text);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("BDD r�alis�es par RENAULT Kylian, GOSSET Olivier, LEFRANC Charles et DEHURTEVENT Hugo", "Propos", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	};
}

/*int hide() {
	this->buttonValider->Visible = true;
	this->label1->Visible = false;
	this->label2->Visible = false;
	this->label3->Visible = false;
	this->label4->Visible = false;
	this->label5->Visible = false;
	this->label6->Visible = false;
	this->label7->Visible = false;
	this->label8->Visible = false;
	this->label9->Visible = false;
	this->label10->Visible = false;
	this->label11->Visible = false;
	this->label12->Visible = false;
	this->Box1->Visible = false;
	this->Box2->Visible = false;
	this->Box3->Visible = false;
	this->Box4->Visible = false;
	this->Box5->Visible = false;
	this->Box6->Visible = false;
	this->Box7->Visible = false;
	this->Box8->Visible = false;
	this->Box9->Visible = false;
	this->Box10->Visible = false;
	this->Box11->Visible = false;
	this->Box12->Visible = false;
}*/