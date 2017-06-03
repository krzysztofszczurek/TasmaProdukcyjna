#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "Czujnik.hpp"
#include "Produkt.hpp"
#include "fabrykaProduktow.hpp"
#include "fabrykaCzujnikow.hpp"
#include "Termometr.hpp"
#include "Wagomierz.hpp"
#include "Oporomierz.hpp"
#include "Prostopadloscian.hpp"
#include "Szescian.hpp"
#include "Stozek.hpp"
#include "Tasma.hpp"
#include "malyTermometrzyk.hpp"
#include "malyWagomierzyk.hpp"
#include "malyOporomierzyk.hpp"
#include "malyStozeczek.hpp"
#include "malyProstopadloscianik.hpp"
#include "malySzescianek.hpp"
#include "classes.h"
#include "System.hpp"

using namespace std;

int main()
{
    Tasma T;
    System S;
    int y=0;
    
    vector <fabrykaProduktow*> tworcyp;
    tworcyp.push_back(new malySzescianek());
    tworcyp.push_back(new malyStozeczek());
    tworcyp.push_back(new malyProstopadloscianik());
    
    vector <fabrykaCzujnikow*> tworcyc;
    tworcyc.push_back(new malyWagomierzyk());
    tworcyc.push_back(new malyTermometrzyk());
    tworcyc.push_back(new malyOporomierzyk());
    
    
    int lp, mp = 0, i = 0;
    cout<<"Symulator tasmy kontrolnej."<<endl;
    cout << "Ile produktow sprawdzic na tasmie:" << endl;
    cin >> lp;
    cout<<"Do produktow kontrolowanych dodano:"<<endl;
    T.czyscProdukty();
    while (mp<lp)
    {
        T.dodajProdukt(tworcyp.at(rand() % tworcyp.size())->utworzProdukt());
        i++;
        mp++;

    }
    do
    {
    int wybor = 0;
    S.menu();
    
    cin >> wybor;
    
    if (wybor<=5 && wybor>0)
    {
        switch (wybor)
        {
            case 1:
            {
                string source;
                int licznik = 0;
                for (auto it = tworcyc.begin(); it != tworcyc.end(); it++)
                {
                    cout << (*it)->wezNazwe() << endl;
                    licznik++;
                }
                
                cout << "Podaj nazwe czujnika ktory chcesz wytworzyc:" << endl;
                cin >> source;
                for (int i = 0; i != licznik; i++)
                {
                    if (source == tworcyc.at(i)->wezNazwe())
                    {
                        T.dodajCz(tworcyc.at(i)->utworzCzujnik());
                    }
                    
                }
                y=1;
                break;
            }
            case 2:
            {
                cout << "Stworzone czujniki: " << endl;
                auto b = T.begin();//bylo T.czujniki.begin();
                for (b = T.begin(); b != T.end(); b++) //zamiast T.begin() bylo T.czujniki.begin()
                    //zamiast T.end() bylo T.czujniki.end()
                {
                    cout << (*b)->wezNazwe() << endl;
                }
                y=1;
                break;
            }
                
                
            case 3:
            {
                double min,max;
                auto a = T.begin();//bylo T.czujniki.begin()
                for (a = T.begin(); a != T.end(); a++) //zamiast T.begin() bylo T.czujniki.begin()
                    //zamiast T.end() bylo T.czujniki.end()
                {
                    cout << "Podaj minimalna wartosc dla " << (*a)->wezNazwe() << ": ";
                    cin >> min;
                    (*a)->ustawMIN(min);
                    cout << "Podaj maksymalna wartosc dla " << (*a)->wezNazwe() << ": ";
                    cin >> max;
                    (*a)->ustawMAX(max);
                }
                y=1;
                break;
            }
            case 4:
            {
                int i = 0, mp = 0;
                
                while (mp<lp)
                {
                    sleep(2);
                    cout<<"Produkt: "<<T.podajProdukt(i).wezNazwe()<<endl;
                    T.podajProdukt(i).powiadomCzujnik();
                    cout << "Element ma optymalne wartosci." << endl << endl << endl;
                    
                    i++;
                    mp++;
                }
                cout << "Wykaz wytworzonych elementow:" << endl;
                for (int j = 0; j<i; j++)
                {
                    cout << j + 1 << ". " << T.podajProdukt(j).wezNazwe() << " - masa: " << T.podajProdukt(j).wezWage() << " kg - opornosc: " << T.podajProdukt(j).wezOpor() << " ohm - temperatura: " << T.podajProdukt(j).wezTemp() << " oC." << endl;
                }
                y=0;
                break;
            }
            case 5:
            {
                cout<<"Dziekujemy za skorzystanie z programu. :)"<<endl;
                y=0;
                break;
            }
        }
    }
    } while (y==1);
    return 0;
}


