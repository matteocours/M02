//---------------------------------------------------------------------------

#pragma hdrstop

#include "DMXTCP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

DMXTCP::DMXTCP()
{
	for (int i=0; i <512; i++)
	{
		trame[i]=0;
	}
}
bool DMXTCP::ModifierCanal(unsigned short canal, unsigned short valeur)
{
	if(canal<=512) {trame[canal-1]=valeur; return true;}
	else return false;
}
bool DMXTCP::Envoyer(char IP[16], unsigned short port)
{
	if(monClient.SeConnecterAUnServeur(IP,port)==false) return false  ;
	monClient.Envoyer((char*)trame,512);
	monClient.SeDeconnecter();
    return true;

}

