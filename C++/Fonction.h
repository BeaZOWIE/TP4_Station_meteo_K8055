//---------------------------------------------------------------------------

#ifndef FonctionH
#define FonctionH

class Fonction
{
private:
	// Déclaration des attributs :
			long adr;		// Attribut adr
			bool etat;
					// Attribut etat

public:
	// Déclaration des méthodes :
	// Déclaration du constructeur :
		Fonction(long adr);

	// Déclaration du destructeur :
		~Fonction();

	// Déclaration de getEtat :
		bool getEtat();

	// Déclaration de lireAna :
		long ReadAnalogChannel(long channel);
};

//---------------------------------------------------------------------------
#endif
