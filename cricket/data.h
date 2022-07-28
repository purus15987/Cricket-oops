#pragma once
#include <string.h>
namespace cricket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for data
	/// </summary>
	
	public ref class data : public System::Windows::Forms::Form 
	{
	public:
		String^ team1;
		String^ team2;
		String^ match_id;
		String^ toss_won;
		String^ venue;
		int^ no_of_overs;

		String^ name_of_player,^player_index;
		int ^index;
		int^ no_of_runs_scored;
		int no_of_runs_given, no_of_balls_delivered;
		int extras;
		String^ no_of_balls_played;
		int no_of_wicket_taken;
		int extra;







	public:
		int^ total_runs;
		String^ total_balls;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::TextBox^  textBox1;

	public:

			 int^ total_wickets;




	public:
		data(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~data()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem15 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem16 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem17 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem18 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem19 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem20 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem21 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem22 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem23 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem24 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem25 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"2",
					L"name", L"1", L"43", L"35", L"34", L"67"
			}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem26 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem27 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem28 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem29 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem30 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem31 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem32 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^  listViewItem33 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader7, this->columnHeader8,
					this->columnHeader9, this->columnHeader10, this->columnHeader11, this->columnHeader12, this->columnHeader13, this->columnHeader14
			});
			this->listView2->HideSelection = false;
			this->listView2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(33) {
				listViewItem1, listViewItem2,
					listViewItem3, listViewItem4, listViewItem5, listViewItem6, listViewItem7, listViewItem8, listViewItem9, listViewItem10, listViewItem11,
					listViewItem12, listViewItem13, listViewItem14, listViewItem15, listViewItem16, listViewItem17, listViewItem18, listViewItem19,
					listViewItem20, listViewItem21, listViewItem22, listViewItem23, listViewItem24, listViewItem25, listViewItem26, listViewItem27,
					listViewItem28, listViewItem29, listViewItem30, listViewItem31, listViewItem32, listViewItem33
			});
			this->listView2->Location = System::Drawing::Point(32, 12);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(691, 490);
			this->listView2->TabIndex = 0;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"s_no";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"player_name";
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"team";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"runs_scored";
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"balls_played";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(538, 298);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// data
			// 
			this->ClientSize = System::Drawing::Size(1136, 538);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listView2);
			this->Name = L"data";
			this->Load += gcnew System::EventHandler(this, &data::data_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void data_Load_1(System::Object^  sender, System::EventArgs^  e) {
	
		int index = Convert::ToInt32(player_index);
		listView2->Items[index]->SubItems[0]->Text = player_index;
		listView2->Items[index]->SubItems[1]->Text = name_of_player;
	
}
};
}
