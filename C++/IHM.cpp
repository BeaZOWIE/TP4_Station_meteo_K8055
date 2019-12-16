//---------------------------------------------------------------------------

#include <vcl.h>
#include <sstream>
#pragma hdrstop

#include "IHM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	mySQL = mysql_init(NULL);

	mySQL = mysql_real_connect(mySQL, "192.168.65.49", "rootBDD", "root123", "TPMeteo", 0, NULL, 0);
	if(mySQL == NULL)
	{
		Label2->Caption = "Connexion BDD �chou�e.";
	}
	else
	{
		Label2->Caption = "Connexion BDD r�ussie.";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	cardAdress = 3 - (int(CheckBoxSK5->Checked) + int(CheckBoxSK6->Checked) * 2);

	coBool = Carte.Connexion(cardAdress);
	if(coBool)
	{
		Label1->Caption = "Carte " + IntToStr(cardAdress) + " connect�e";
		CheckBoxSK5->Enabled = false;
		CheckBoxSK6->Enabled = false;
		Button1->Enabled = false;
		Timer1->Enabled = true;
		Memo1->Visible = true;
		Memo1->Text = "...";
	}
	else
	{
		Label1->Caption = "Connexion carte " + IntToStr(cardAdress) + " �chou�e";
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	tension = Carte.Lecture(cardAdress);
	temp = tension * 18 - 30;
	Memo1->Text = "Temp�rature : " + FloatToStr(temp);

	if(mySQL != NULL)
	{
		str << "INSERT INTO `Data` (`ID_Temp`, `Temperature`) VALUES ('', "<< temp <<")";
		mysql_query(mySQL, str.str().c_str());
        str.str(std::string());
    }
}
//---------------------------------------------------------------------------







