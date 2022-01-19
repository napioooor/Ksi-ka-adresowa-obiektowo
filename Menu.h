#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <sstream>
#include <windows.h>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class Menu{
    char wybierzOpcjeZMenuUzytkownika();
    char wybierzOpcjeZMenuGlownego();

public:
    void uruchomMenu(UzytkownikMenedzer uzytkownikMenedzer);
};

#endif
