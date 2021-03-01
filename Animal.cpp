#include "Animal.h"			// Inclusion de la classe Animal

Animal::Animal(std::string son_nom, float son_poids) {
	this->nom = son_nom;
	this->poids = son_poids;
}

Animal::~Animal() {
	delete& poids;
	delete& nom;
}

std::string Animal::getNom() {
	return this->nom;
}

float Animal::getPoids() {
	return this->poids;
}