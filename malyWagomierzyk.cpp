//
//  malyWagomierzyk.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "malyWagomierzyk.hpp"

malyWagomierzyk::malyWagomierzyk()
{
    this->ustawNazwe("waga");
}

Czujnik* malyWagomierzyk::utworzCzujnik()
{
    cout << "Dodano wagomierz." << endl;
    return new Wagomierz;
}
