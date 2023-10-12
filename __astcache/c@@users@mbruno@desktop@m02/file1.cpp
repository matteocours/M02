﻿#include <iostream>
#include <tchar.h>
#include "IRClientTCP.h"
using namespace std ;

int _tmain(int argc, _TCHAR* argv[])
{
	  IRClientTCP monClient; 	 			//création d'un objet
	  int pan ;             	 			// créer entier pan
	  unsigned char trame[512];   			//créer une trame
	  for(int i=0;i<512;i++) trame[i]=0; 	//remettre la trame a 0
	  while(true) 				 			//boucle infini
	  {
          cout<<"PAN ?";
		  cin>> pan;             			//saisir un nombre
		  trame[113]=pan;
		  monClient.SeConnecterAUnServeur("172.20.21.17",4123);  //adresse du serveur et port
		  monClient.Envoyer((char*)trame,512);
		  monClient.SeDeconnecter();

	  }

		 return 0;

}



