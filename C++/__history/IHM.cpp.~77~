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

	mySQL = mysql_real_connect(mySQL, "192.168.64.73", "applicpp", "applicpp", "TPMeteo", 0, NULL, 0);
	if(mySQL == NULL)
	{
		Label2->Caption = "Connexion BDD échouée.";
	}
	else
	{
        Label2->Caption = "Connexion BDD réussie.";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	carteAdr = 3 - (int(CheckBoxSK5->Checked) + int(CheckBoxSK6->Checked) * 2);

	cSuccess = velman.Connexion(carteAdr);
	if(cSuccess)
	{
		Label1->Caption = "Carte " + IntToStr(carteAdr) + " connectée";
		CheckBoxSK5->Enabled = false;
		CheckBoxSK6->Enabled = false;
        Button1->Enabled = false;
		Timer1->Enabled = true;
        Memo1->Visible = true;
		Memo1->Text = "- - -";
	}
	else
	{
		Label1->Caption = "Connexion carte " + IntToStr(carteAdr) + " échouée";
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	tension = velman.Lecture(carteAdr);
	temp = tension * 18 - 30;
	Memo1->Text = "Température : " + FloatToStr(temp);

	if(mySQL != NULL)
	{
		str << "INSERT INTO `donnee_minimeteo` (`ID_temperature`, `Temperature`) VALUES ('', "<< temp <<")";
        mysql_query(mySQL, str.str().c_str());
    }
}
//---------------------------------------------------------------------------





