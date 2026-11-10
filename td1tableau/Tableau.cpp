#include "Tableau.h"
#include <iostream>
using namespace std;

Tableau::Tableau(int n) {
	taille = n;
	Tab = new double[n];

	for (int i = 0; i < taille; i++) {
		Tab[i] = 0;
	}

}

Tableau::Tableau(const Tableau& t)
{
	this->taille = t.taille;
	Tab = new double[taille];
	for (int i = 0; i < taille; i++) {
		Tab[i] = t.Tab[i];
	}
}

Tableau Tableau::operator=(const Tableau& t)
{
	if (this != &t) {
		delete[] Tab;
		Tab = nullptr;
		this->taille = t.taille;
		Tab = new double[taille];
		for (int i = 0; i < taille; i++) {
			Tab[i] = t.Tab[i];
		}
		return *this;
	}
}

double& Tableau::operator[](int index)
{
	if (index >= 0 && index <= taille) {
		return Tab[index];
	}
	else { exit(-1); }
}

void Tableau::afficher()const {

	for (int i = 0; i < taille; i++) {
		cout << "Tab[" << i << "] = " << Tab[i] << endl;
	}
}

Tableau::~Tableau() {
	delete[]Tab;
}