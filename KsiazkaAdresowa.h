#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "Menu.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    Menu menu;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami, 0){
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
        menu.uruchomMenu(uzytkownikMenedzer);
    };
    void wypiszWszystkichUzytkownikow();
};

#endif
