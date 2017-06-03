//
//  malyOporomierzyk.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "malyOporomierzyk.hpp"

malyOporomierzyk::malyOporomierzyk()
{
    this->ustawNazwe("oporomierz");
}

Czujnik* malyOporomierzyk::utworzCzujnik()
{
    cout << "Dodano oporomierz." << endl;
    return new Oporomierz;
}
