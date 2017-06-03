//
//  Termometr.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "Termometr.hpp"

Termometr::Termometr() {
    this->ustawNazwe("termometr");
    
}
void Termometr::aktualizuj(Produkt* produkciczek)
{
    cout << "Temperatura przedmiotu: " << produkciczek->wezTemp() << " oC." << endl;
    cout << "Ustawiona temperatura optymalna to od: " << this->wezMIN() << ", do: " << this->wezMAX() << " oC." << endl;
    if (produkciczek->wezTemp() <= this->wezMAX() && produkciczek->wezTemp() >= this->wezMIN())
    {
        cout << "Temperatura produktu: " << produkciczek->wezNazwe() << ", ma poprawna wartosc." << endl;
    }
    else
    {
        cout << "Temperatura produktu: " << produkciczek->wezNazwe() << ", nie ma poprawnej wartosci." << endl;
        cout << "Trwa nastawianie poprawnej temperatury" << endl;
        produkciczek->ustawTemp(double(rand() % (int(this->wezMAX()) - int(this->wezMIN()))) + int(this->wezMIN()));
        cout << "Nowa temperatura elementu to: " << produkciczek->wezTemp() << " oC" << endl;
    }
}
