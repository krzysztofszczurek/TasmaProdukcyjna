//
//  Wagomierz.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "Wagomierz.hpp"

Wagomierz::Wagomierz()
{
    this->ustawNazwe("waga");
}
void Wagomierz::aktualizuj(Produkt* produkciczek)
{
    cout << "Masa przedmiotu: " << produkciczek->wezWage() << " kg." << endl;
    cout << "Ustawiona masa optymalna to od: " << this->wezMIN() << ", do: " << this->wezMAX() << " kg." << endl;
    if (produkciczek->wezWage() <= this->wezMAX() && produkciczek->wezWage() >= this->wezMIN())
    {
        cout << "Masa produktu: " << produkciczek->wezNazwe() << ", ma poprawna wartosc." << endl;
    }
    else
    {
        cout << "Masa produktu: " << produkciczek->wezNazwe() << ", nie ma poprawnej wartosci." << endl;
        cout << "Trwa ucinanie obiektu." << endl;
        produkciczek->ustawWage(double(rand() % (int(this->wezMAX()) - int(this->wezMIN()))) + int(this->wezMIN()));
        cout << "Nowa masa elementu to: " << produkciczek->wezWage() << " kg" << endl;
    }
}
