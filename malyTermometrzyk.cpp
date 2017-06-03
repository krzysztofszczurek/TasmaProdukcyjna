//
//  malyTermometrzyk.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "malyTermometrzyk.hpp"

malyTermometrzyk::malyTermometrzyk()
{
    this->ustawNazwe("termometr");
}

Czujnik* malyTermometrzyk::utworzCzujnik()
{
    cout << "Dodano termometr." << endl;
    return new Termometr;
}
