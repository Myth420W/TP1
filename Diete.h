#ifndef __DIETE_H__
#define __DIETE_H__

#include "rhinoceros.h"		// Inclusion de la classe rhinoceros
#include "tigre.h"			// Inclusion de la classe tigre
#include "singe.h"			// Inclusion de la classe singe

class Diete {
	private:
		float Viande;		// Total de la viande consummé par les animaux
		float Fruits;		// Total des fruits consummé par les animaux
		float Herbe;		// Total de l'herbe consummé par les animaux
	public:
		Diete() {};			// Instanciation de Diete
};

#endif	// __DIETE_H__