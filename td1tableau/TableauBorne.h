#pragma once
#include "Tableau.h"
class TableauBorne :
    public Tableau
{
private:
    float minVal;
    float maxVal;

public:
    TableauBorne(int, float, float);
    const double& operator[](int index) const;
};

