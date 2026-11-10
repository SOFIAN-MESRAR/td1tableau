#include "TableauBorne.h"
#include "Tableau.h"
#include <iostream>
using namespace std;

TableauBorne::TableauBorne(int t, float min, float max)
    : Tableau(t), minVal(min), maxVal(max)	
{
}

const double& TableauBorne::operator[](int index) const
{
   
    if (index < 0 || index >= taille) {
        exit(-1);
    }

    if (Tab[index] < minVal || Tab[index] > maxVal) {
        cout << " La valeur depasse les bornes !" << endl;
    }

    return Tab[index];
}

