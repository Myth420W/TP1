#include "singe.h"				// Inclusion de la classe singe
#include "Animal.h"				// Inclusion de la classe Animal
#include <math.h>				// Inclusion de la classe Math pour les calculs

Singe::Singe(std::string nom, float poids, bool son_enclos) : Animal(nom, poids){
	this->poidsViande = poids/100;
	this->poidsFruits = poids/100;
	this->enclos = son_enclos;
	
	if (enclos) {
		this->poidsHerbe = 0;
	}
	else {
		this->poidsHerbe = (poids / 100) * float(3.5);
	}
}

std::string Singe::getEnclos() {
	if (enclos) {
		return "avec herbe";
	}
	else {
		return "sans herbe";
	}
}

float Singe::getPoidsHerbe() {
	if (enclos) {
		return 0;
	}
	else {
		return (poids / 100) * float(3.5);
	}
}

std::string Singe::afficherAnimal() {
	std::string result = "Singe : " + this->nom + " (";
	result += std::to_string(Animal::getPoids());
	result += " kg)\n  Enclos ";
	result += getEnclos() + "\n  ";
	result += "Mange " + std::to_string(this->poidsViande) + " kg de viande par jour\n  ";
	result += "Mange " + std::to_string(poidsFruits) + " kg de fruits par jour\n  ";
	result += "Mange " + std::to_string(getPoidsHerbe()/7) + " kg d'herbe par jour\n";
	return result;
}

Singe::~Singe() {
	delete& poidsViande;
	delete& poidsHerbe;
	delete& poidsFruits;
}