#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    //dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik KsiazkaAdresowa::podajDaneNowegoUzytkownika() {
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do {
        cout << endl << "Podaj login: ";
        uzytkownik.ustawLogin(wczytajLinie());
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    uzytkownik.ustawHaslo(wczytajLinie());

    return uzytkownik;
}

int KsiazkaAdresowa::pobierzIdNowegoUzytkownika() {
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool KsiazkaAdresowa::czyIstniejeLogin(string login) {
    for(int i = 0; i < uzytkownicy.size(); i++){
        if(uzytkownicy[i].pobierzLogin() == login){
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }
    return false;
}

string KsiazkaAdresowa::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}
