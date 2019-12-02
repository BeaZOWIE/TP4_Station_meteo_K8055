//*********************************************************************************************
//* Programme : Velleman K8055 date : 16/12/2019
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 17/12/2019
//*
//*Programmeurs : Fontaine Thibaud/Cosman Vincent/ Jouen Matthias
//*classe : BTSSN2
//*--------------------------------------------------------------------------------------------------------
//* BUT :  Ce programme a pour but de recuperer une température
//* grace au boitier velleman K8055
//*Programmes associés : AUCUN
//*********************************************************************************************//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Carte_K8055.h"
#include "Fonction.h"
#include "K8055D.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::connexionClick(TObject *Sender)
{
	carte = new Fonction(1);
	bool etat = carte->getEtat();
	if (etat == true){
        connexion->Caption = "connecter";

	}

}


void __fastcall TForm1::Edit1Change(TObject *Sender)
{
    Edit1->Text = carte->ReadAnalogChannel(2);
}
//---------------------------------------------------------------------------

