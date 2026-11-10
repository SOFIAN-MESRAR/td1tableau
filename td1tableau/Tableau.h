#pragma once
class Tableau
{
protected:
	int taille;
	double* Tab;
public:
	Tableau(int);
	Tableau(const Tableau& t);
	Tableau operator=(const Tableau& t);
	double& operator[](int index);
	void afficher() const;
	~Tableau();
};

