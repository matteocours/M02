//---------------------------------------------------------------------------

#ifndef DMXTCPH
#define DMXTCPH
#include "IRClientTCP.h"

class DMXTCP
{
	private :
		unsigned char trame[512];
		IRClientTCP monClient;
	public:
		DMXTCP();
		bool ModifierCanal(unsigned short canal, unsigned short valeur);
        bool Envoyer(char IP[16],unsigned short port);
		void FullOn();
		void FullOff();
		void Demonstration();

};


















//---------------------------------------------------------------------------
#endif
