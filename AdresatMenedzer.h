#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;

    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    void wczytajAdresatowZPliku();

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int id1, int id2) : plikZAdresatami(nazwaPlikuZAdresatami) {
        idZalogowanegoUzytkownika = id1;
        idOstatniegoAdresata = id2;

        if (adresaci.empty() == true)
            wczytajAdresatowZPliku();
    };
    ~AdresatMenedzer();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdOstatniegoAdresata(int noweId);
    int pobierzIdOstatniegoAdresata();
};

#endif
