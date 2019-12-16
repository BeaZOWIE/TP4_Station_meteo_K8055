//---------------------------------------------------------------------------

#pragma hdrstop

#include "K8055.h"
#include "Include/K8055D.h"

#pragma package(smart_init)
//---------------------------------------------------------------------------
K8055::K8055()
{

}

K8055::~K8055()
{
    CloseDevice();
}

bool K8055::Connexion(int CardAdress)
{
	int success;
	success = OpenDevice(CardAdress);
	if (success == -1)
	{
        return false;
	}

    return true;
}

float K8055::Lecture(int CardAdress)
{
	data = ReadAnalogChannel(2);
	data = (data / 255) * 5;
    return data;
}