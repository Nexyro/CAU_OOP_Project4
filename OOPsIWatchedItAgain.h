#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include "ORM.h"
#include "UserRepository.h"
#include "inc/MovieRepository.h"
#include "inc/ShowRepository.h"
#include "inc/TheaterRepository.h"

namespace OOPsIWatchedItAgain {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			// add the constructor code here
			MovieRepository* movieRepo = new MovieRepository(new ORM());
			list<Movie>* movieList = movieRepo->findAll();
			for (std::list<Movie>::iterator it = movieList->begin(); it != movieList->end(); ++it)
			{
				listView1->Items->Add(gcnew String((it->getTitle()).c_str()), 1);
			}

			// get selected movie title
			
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  searchTextBox;
	private: System::Windows::Forms::Label^  titleLabel;
	protected:


	private: System::Windows::Forms::TextBox^  passwordTextBox;
	private: System::Windows::Forms::TextBox^  usernameTextBox;
	private: System::Windows::Forms::Button^  Login;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  moviesLabel;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::Label^  theaterLabel;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  showsLabel;

	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::Button^  searchButton;












	private: System::Windows::Forms::Panel^  panel8;    // login panel
	private: System::Windows::Forms::Panel^  panel6;	// user panel that is shown after login


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  username_loginSuccessLabel;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  buttonBack;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Label^  dscrp_movieTitle;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  dscrp_movieRating;
	private: System::Windows::Forms::Label^  dscrp_movieDescription;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  dscrp_movieDuration;













	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  cancel_button;








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
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->Login = (gcnew System::Windows::Forms::Button());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->moviesLabel = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->theaterLabel = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->showsLabel = (gcnew System::Windows::Forms::Label());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->username_loginSuccessLabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dscrp_movieRating = (gcnew System::Windows::Forms::Label());
			this->dscrp_movieDescription = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dscrp_movieDuration = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dscrp_movieTitle = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// searchTextBox
			// 
			this->searchTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchTextBox->Location = System::Drawing::Point(219, 57);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(272, 23);
			this->searchTextBox->TabIndex = 0;
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(251, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(202, 39);
			this->titleLabel->TabIndex = 1;
			this->titleLabel->Text = L"Book Tickets";
			this->titleLabel->Click += gcnew System::EventHandler(this, &MainWindow::titleLabel_Click);
			// 
			// Login
			// 
			this->Login->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Login->Location = System::Drawing::Point(224, 174);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(196, 27);
			this->Login->TabIndex = 0;
			this->Login->Text = L"Login";
			this->Login->UseVisualStyleBackColor = true;
			this->Login->Click += gcnew System::EventHandler(this, &MainWindow::Login_Click);
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordTextBox->Location = System::Drawing::Point(303, 135);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(116, 23);
			this->passwordTextBox->TabIndex = 2;
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTextBox->Location = System::Drawing::Point(303, 106);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(116, 23);
			this->usernameTextBox->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->listView1);
			this->panel2->Controls->Add(this->moviesLabel);
			this->panel2->Location = System::Drawing::Point(162, 93);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(224, 222);
			this->panel2->TabIndex = 3;
			// 
			// listView1
			// 
			this->listView1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->Location = System::Drawing::Point(14, 26);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(202, 181);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::List;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::listView1_SelectedIndexChanged);
			// 
			// moviesLabel
			// 
			this->moviesLabel->AutoSize = true;
			this->moviesLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->moviesLabel->Location = System::Drawing::Point(61, 3);
			this->moviesLabel->Name = L"moviesLabel";
			this->moviesLabel->Size = System::Drawing::Size(77, 23);
			this->moviesLabel->TabIndex = 0;
			this->moviesLabel->Text = L"Movies";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->listView2);
			this->panel3->Controls->Add(this->theaterLabel);
			this->panel3->Location = System::Drawing::Point(379, 93);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(161, 222);
			this->panel3->TabIndex = 4;
			// 
			// listView2
			// 
			this->listView2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView2->Location = System::Drawing::Point(11, 26);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(130, 181);
			this->listView2->TabIndex = 1;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::List;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::listView2_SelectedIndexChanged);
			// 
			// theaterLabel
			// 
			this->theaterLabel->AutoSize = true;
			this->theaterLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->theaterLabel->Location = System::Drawing::Point(28, 3);
			this->theaterLabel->Name = L"theaterLabel";
			this->theaterLabel->Size = System::Drawing::Size(91, 23);
			this->theaterLabel->TabIndex = 0;
			this->theaterLabel->Text = L"Theaters";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->showsLabel);
			this->panel4->Controls->Add(this->listView3);
			this->panel4->Location = System::Drawing::Point(526, 93);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(114, 222);
			this->panel4->TabIndex = 5;
			// 
			// showsLabel
			// 
			this->showsLabel->AutoSize = true;
			this->showsLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showsLabel->Location = System::Drawing::Point(20, 3);
			this->showsLabel->Name = L"showsLabel";
			this->showsLabel->Size = System::Drawing::Size(71, 23);
			this->showsLabel->TabIndex = 1;
			this->showsLabel->Text = L"Shows";
			// 
			// listView3
			// 
			this->listView3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView3->Location = System::Drawing::Point(14, 26);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(83, 181);
			this->listView3->TabIndex = 0;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::List;
			this->listView3->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::listView3_SelectedIndexChanged);
			// 
			// searchButton
			// 
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButton->Location = System::Drawing::Point(500, 57);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(87, 23);
			this->searchButton->TabIndex = 6;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &MainWindow::searchButton_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->username_loginSuccessLabel);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->cancel_button);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->label1);
			this->panel6->Location = System::Drawing::Point(12, 62);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(132, 120);
			this->panel6->TabIndex = 2;
			this->panel6->Visible = false;
			// 
			// username_loginSuccessLabel
			// 
			this->username_loginSuccessLabel->AutoSize = true;
			this->username_loginSuccessLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->username_loginSuccessLabel->Location = System::Drawing::Point(48, 11);
			this->username_loginSuccessLabel->Name = L"username_loginSuccessLabel";
			this->username_loginSuccessLabel->Size = System::Drawing::Size(71, 17);
			this->username_loginSuccessLabel->TabIndex = 0;
			this->username_loginSuccessLabel->Text = L"username";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(9, 74);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 17);
			this->label8->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(9, 66);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label9->Size = System::Drawing::Size(104, 17);
			this->label9->TabIndex = 0;
			this->label9->Text = L"booked movie";
			this->label9->Visible = false;
			// 
			// cancel_button
			// 
			this->cancel_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_button->Location = System::Drawing::Point(9, 91);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(87, 23);
			this->cancel_button->TabIndex = 6;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Visible = false;
			this->cancel_button->Click += gcnew System::EventHandler(this, &MainWindow::cancelButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Booked movie:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hello,";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->Login);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->usernameTextBox);
			this->panel7->Controls->Add(this->passwordTextBox);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Location = System::Drawing::Point(2, 12);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(654, 311);
			this->panel7->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(221, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(221, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"username";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(132, 45);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(406, 39);
			this->label5->TabIndex = 1;
			this->label5->Text = L"OOPs I Watched It Again";
			this->label5->Click += gcnew System::EventHandler(this, &MainWindow::titleLabel_Click);
			// 
			// panel5
			// 
			this->panel5->AutoSize = true;
			this->panel5->Controls->Add(this->buttonBack);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->dscrp_movieRating);
			this->panel5->Controls->Add(this->dscrp_movieDescription);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->dscrp_movieDuration);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->dscrp_movieTitle);
			this->panel5->Location = System::Drawing::Point(152, 86);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(485, 234);
			this->panel5->TabIndex = 2;
			this->panel5->Visible = false;
			// 
			// buttonBack
			// 
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBack->Location = System::Drawing::Point(387, 198);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(75, 27);
			this->buttonBack->TabIndex = 0;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MainWindow::buttonBack_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(115, 73);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 17);
			this->label12->TabIndex = 0;
			this->label12->Text = L"/10";
			// 
			// dscrp_movieRating
			// 
			this->dscrp_movieRating->AutoSize = true;
			this->dscrp_movieRating->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dscrp_movieRating->Location = System::Drawing::Point(102, 73);
			this->dscrp_movieRating->Name = L"dscrp_movieRating";
			this->dscrp_movieRating->Size = System::Drawing::Size(15, 17);
			this->dscrp_movieRating->TabIndex = 0;
			this->dscrp_movieRating->Text = L"5";
			// 
			// dscrp_movieDescription
			// 
			this->dscrp_movieDescription->AutoSize = true;
			this->dscrp_movieDescription->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dscrp_movieDescription->Location = System::Drawing::Point(33, 110);
			this->dscrp_movieDescription->MaximumSize = System::Drawing::Size(400, 0);
			this->dscrp_movieDescription->Name = L"dscrp_movieDescription";
			this->dscrp_movieDescription->Size = System::Drawing::Size(127, 17);
			this->dscrp_movieDescription->TabIndex = 0;
			this->dscrp_movieDescription->Text = L"movie_description";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(33, 90);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 17);
			this->label13->TabIndex = 0;
			this->label13->Text = L"description";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(33, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"rating";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(137, 55);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 17);
			this->label11->TabIndex = 0;
			this->label11->Text = L"min";
			// 
			// dscrp_movieDuration
			// 
			this->dscrp_movieDuration->AutoSize = true;
			this->dscrp_movieDuration->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dscrp_movieDuration->Location = System::Drawing::Point(102, 55);
			this->dscrp_movieDuration->Name = L"dscrp_movieDuration";
			this->dscrp_movieDuration->Size = System::Drawing::Size(29, 17);
			this->dscrp_movieDuration->TabIndex = 0;
			this->dscrp_movieDuration->Text = L"120";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(33, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 17);
			this->label7->TabIndex = 0;
			this->label7->Text = L"duration";
			// 
			// dscrp_movieTitle
			// 
			this->dscrp_movieTitle->AutoSize = true;
			this->dscrp_movieTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dscrp_movieTitle->Location = System::Drawing::Point(27, 15);
			this->dscrp_movieTitle->Margin = System::Windows::Forms::Padding(0);
			this->dscrp_movieTitle->Name = L"dscrp_movieTitle";
			this->dscrp_movieTitle->Size = System::Drawing::Size(143, 30);
			this->dscrp_movieTitle->TabIndex = 1;
			this->dscrp_movieTitle->Text = L"Movie Title";
			this->dscrp_movieTitle->Click += gcnew System::EventHandler(this, &MainWindow::titleLabel_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 323);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->titleLabel);
			this->Controls->Add(this->searchTextBox);
			this->Name = L"MainWindow";
			this->Text = L"OOPsIWatchedItAgain";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// movie search button
	private: System::Void searchButton_Click(System::Object^  sender, System::EventArgs^  e) {
		MovieRepository* movieRepo = new MovieRepository(new ORM());

		String^ _searchword = searchTextBox->Text;
		string searchword = msclr::interop::marshal_as<std::string>(_searchword);	// gets search word

		Movie* movie = movieRepo->findByTitle(searchword);
		// If there is no movie by the title entered,
		if (movie == NULL)
		{
			// Initializes the variables to pass to the MessageBox::Show method.
			String^ message = "No movie by that name. Please check and enter again.";
			String^ caption = "Movie Search Error";
			MessageBoxButtons button = MessageBoxButtons::OK;
			System::Windows::Forms::DialogResult result;

			// Displays the MessageBox.
			result = MessageBox::Show(this, message, caption, button);
			if (result == ::System::Windows::Forms::DialogResult::OK)
			{
				// clear username and password and set focus to username
				searchTextBox->Clear();
				searchTextBox->Focus();
				return;
			}
		}

		int movieDuration = movie->getDuration();
		int movieRating = movie->getStars();
		string movieDescription = movie->getDescription();
		
		panel5->Visible = true;
		dscrp_movieTitle->Text = _searchword;
		dscrp_movieDescription->Text = gcnew String(movieDescription.c_str());
		dscrp_movieDuration->Text = movieDuration.ToString();
		dscrp_movieRating->Text = movieRating.ToString();
	}
	// login button
	private: System::Void Login_Click(System::Object^  sender, System::EventArgs^  e) {
		UserRepository* userRepo = new UserRepository(new ORM());

		String^ _username = usernameTextBox->Text;	// gets username
		String^ _password = passwordTextBox->Text;	// gets password
		string username = msclr::interop::marshal_as<std::string>(_username);
		string password = msclr::interop::marshal_as<std::string>(_password);
		
		bool loginCheck = false;
		loginCheck = userRepo->login(username, password);
		
		if (loginCheck == true) // login success
		{
			panel7->Hide();
			username_loginSuccessLabel->Text = _username;
			// bookedMovie_loginSuccessLabel->Text = L"/*booked_movie_name*/";
			panel6->Visible = true;
		}
		else // login fail
		{
			// Initializes the variables to pass to the MessageBox::Show method.
			String^ message = "Wrong username or password. Please check and enter again.";
			String^ caption = "Login Error";
			MessageBoxButtons button = MessageBoxButtons::OK;
			System::Windows::Forms::DialogResult result;

			// Displays the MessageBox.
			result = MessageBox::Show(this, message, caption, button);
			if (result == ::System::Windows::Forms::DialogResult::OK)
			{
				// clear username and password and set focus to username
				usernameTextBox->Clear();
				passwordTextBox->Clear();
				usernameTextBox->Focus();
			}
		}
	}
	// click back button from movie description page
	private: System::Void buttonBack_Click(System::Object^  sender, System::EventArgs^  e) {
		searchTextBox->Clear();
		panel5->Hide();
	}
	private: System::Void titleLabel_Click(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	this->listView2->Clear();
	if (this->listView1->SelectedItems->Count == 0)
		return;

	// get title of selected Movie
	String^ _movieTitle = this->listView1->SelectedItems[0]->Text;
	string movieTitle = msclr::interop::marshal_as<std::string>(_movieTitle);	// gets title


	MovieRepository* movieRepo = new MovieRepository(new ORM());
	TheaterRepository*	toto = new TheaterRepository(new ORM());

	Movie* movie = movieRepo->findByTitle(movieTitle);
	int idOfMovie = movie->getId();		// get the id of that movie

	ShowRepository* showRepo = new ShowRepository(new ORM());
	list<::Show>* showList = showRepo->findBy("id_fk_movie", to_string(idOfMovie));
	
	vector<int> vec = vector<int>();
	for (std::list<::Show>::iterator it = showList->begin(); it != showList->end(); ++it)
	{
		if (std::find(vec.begin(), vec.end(), it->getTheaterId()) == vec.end()) {
			vec.push_back(it->getTheaterId());
			Theater* tata = toto->findById(it->getTheaterId());
			listView2->Items->Add(gcnew String(tata->getName().c_str()), 1);
		}
	}
}
private: System::Void listView2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	this->listView3->Clear();
	if (this->listView2->SelectedItems->Count == 0)
		return;

	MovieRepository* movieRepo = new MovieRepository(new ORM());
	TheaterRepository*	theaterRepo = new TheaterRepository(new ORM());
	ShowRepository* showRepo = new ShowRepository(new ORM());

	// get theater
	String^ _theater = this->listView2->SelectedItems[0]->Text;
	string theater_name = msclr::interop::marshal_as<std::string>(_theater);	// gets theater

	Theater* theater = theaterRepo->findOneBy("name", theater_name);
	int idOfTheater = theater->getId();

	String^ _movieTitle = this->listView1->SelectedItems[0]->Text;
	string movieTitle = msclr::interop::marshal_as<std::string>(_movieTitle);	// gets title

	Movie* movie = movieRepo->findByTitle(movieTitle);
	int idOfMovie = movie->getId();		// get the id of that movie

	list<::Show>* showList = showRepo->findByTheaterAndMovie(idOfTheater, idOfMovie);

	for (std::list<::Show>::iterator it = showList->begin(); it != showList->end(); ++it)
	{
		listView3->Items->Add(gcnew String(it->getDate().c_str()), 1);
	}
}
private: System::Void listView3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	// show movie name when clicked
	String^ _movieTitle = this->listView1->SelectedItems[0]->Text;
	string movieTitle = msclr::interop::marshal_as<std::string>(_movieTitle);	// gets title

	this->cancel_button->Visible = true;
	this->label9->Text = _movieTitle;
	this->label9->Visible = true;
}

	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Initializes the variables to pass to the MessageBox::Show method.
		String^ message = "Are you sure you want to cancel?";
		String^ caption = "Movie Cancel Confirmation";
		MessageBoxButtons button = MessageBoxButtons::YesNo;
		System::Windows::Forms::DialogResult result;

		// Displays the MessageBox.
		result = MessageBox::Show(this, message, caption, button);
		if (result == ::System::Windows::Forms::DialogResult::Yes)
		{
			this->label9->Visible = false;
			this->cancel_button->Visible = false;
		}
		if (result == ::System::Windows::Forms::DialogResult::No)
			return;
	}

};
}
