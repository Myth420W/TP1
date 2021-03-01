#include "rhinoceros.h"		// Inclusion de la classe rhinocéros.h
#include "Animal.h"			// Inclusion de la classe Animal

Rhinoceros::Rhinoceros(std::string nom, float poids, int espace) : Animal(nom, poids) {
	if (espace < 2000) {				// Espace doit être minimum 2000 sinon c'est initialisé à 2000
		espace = 2000;
	}
	this->espaceEnclos = espace;
	this->poidsFruits = poids * float(0.05);
	if ((poids * 0.02) > espace / 100) {						// L'animal doit consommé au moins 2% de son poids en Herbe
		this->poidsHerbes = (poids*float(0.02))-espace / 100;
	}
	else {
		this->poidsHerbes = 0;
	}
}

std::string Rhinoceros::afficherAnimal() {
	std::string result = "Rhinoceros : " + this->nom + " (" + std::to_string(this->poids) + " kg)\n  ";
	result += "Enclos de " + this->espaceEnclos;
	result += " metres-carres\n  Mange ";
	result += std::to_string(this->poidsViande);
	result += " kg de viande par jour\n  ";
	result += "Mange ";
	result += std::to_string(this->poidsFruits);
	result += " kg de fruits par jour\n  ";
	result += "Mange ";
	result += std::to_string(this->poidsHerbes);
	result += " kg d'herbe par jour";

	return result;
}

float Rhinoceros::getViande() { 
	this->poidsViande;
}

float Rhinoceros::getFruits() {
	this->poidsFruits;
}

float Rhinoceros::getHerbes() {
	this->poidsHerbes;
}

Rhinoceros::~Rhinoceros() {
	delete& poidsViande;
	delete& poidsFruits;
	delete& poidsHerbes;
}