//---------------------------------------------------------------------------

#pragma hdrstop

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include "Fonction.h"
#include "K8055D.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)


Fonction :: Fonction (long adr)
{
	 this->adr = adr;
	 etat = true;
	 long h = OpenDevice(adr);

	 if (h == -1)
	 {
		etat = false;
	 }
}

Fonction :: ~Fonction ()
{
   if(etat == true)
   {
	   CloseDevice();
   }
}

bool Fonction :: getEtat ()
{
	return etat;
}

long Fonction :: ReadAnalogChannel(long channel)
{
	if( etat && (channel == 2) )
	{
        return ReadAnalogChannel(channel);
	}

	return -1;
}