#include <iostream>
#include <tchar.h>
#include "IRClientTCP.h"
#include "DMXTCP.h"
using namespace std ;

int _tmain(int argc, _TCHAR* argv[])
{
	  DMXTCP monDMXTCP;	 					//création d'un objet
	  int pan ;             	 			// créer entier pan
	  while(true) 				 			//boucle infini
	  {
		  cout<<"PAN ?";
		  cin>> pan;
		  if(monDMXTCP.ModifierCanal(1,pan)==false) cout<<"Erreur de canal"<<endl;     			//saisir un nombre
		  if (monDMXTCP.Envoyer("172.20.21.17",4123)==false) cout<<"Le serveur est ABSENT"<<endl;
	  }

		 return 0;

}



