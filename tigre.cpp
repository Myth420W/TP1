#include "tigre.h"		// Inclusion de la classe tigre
#include "Animal.h"		// Inclusion de la classe Animal

Tigre::Tigre(std::string nom, float poids) : Animal(nom, poids) {
	this->poidsViande = poids / 20;			// 5 % de son poids en Viande consommé
}

std::string Tigre::afficherAnimal() {
	std::string result = "Tigre : " + this->nom + " (";
	result += std::to_string(this->poids)+" kg)\n  ";
	result += "Mange " + std::to_string(this->poidsViande) + " kg de viande par jour\n  ";
	result += "Mange " + std::to_string(this->poidsFruits) + " kg de fruits par jour\n  ";
	result += "Mange " + std::to_string(this->poidsHerbe) + " kg d'herbe par jour\n";
	return result;
}

Tigre::~Tigre() {
	delete& poidsViande;
	delete& poidsHerbe;
	delete& poidsFruits;
}