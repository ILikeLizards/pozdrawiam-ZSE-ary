#include <iostream>
#include <locale.h>
#include <string>
#include <conio.h>

using namespace std;

class funkcje{
private:
    static const int rozmiar= 50;
    int liczby[rozmiar + 1];

public:
 
    void losowanie() {
 /*******************************************************
                    nazwa funkcji : wyswietlanie
                    parametry wejściowe : brak
                    wartość zwracana : nic
                    informacje : wypełnia tablice losowyni liczbami
                    autor : <imię i nazwisko, klasa>
 ****************************************************/


        int i;

        srand(time(NULL));
        for (i = 0; i < rozmiar; i++) {
            liczby[i] = rand() % 100 + 1;
        }

        liczby[rozmiar] = -1;
    }
    void wyswietlanie() {
/*******************************************************
            nazwa funkcji : wyswietlanie
            parametry wejściowe : brak
            wartość zwracana : nic
            informacje : wyswietla liczby w tablicy
            autor : <imię i nazwisko, klasa>
****************************************************/
        int i;

        cout << "liczby w tablicy";

        for (i = 0; i < rozmiar; i++) {
            cout << liczby[i];
            if (i != rozmiar - 1) {
                cout << ", ";
            }
        }
    }
    string wyszukiwanie(int szukana) {
/*******************************************************
                    nazwa funkcji : wyszikuwanie
                    parametry wejściowe : szukana
                    wartość zwracana : tekst
                    informacje :szuka wpisanej liczby w tablicy
                    autor : <imię i nazwisko, klasa>
****************************************************/
        int i = 0;
        string tekst;

        liczby[rozmiar] = szukana;

        while (liczby[i] != szukana) {
            i++;
        }

        i++;

        if (i >= rozmiar) {
            tekst= "liczby nie ma";
        }
        else {
            tekst = "liczba znajduję się na " + to_string(i) + " miejscu w tablicy";
        }

        return(tekst);
    }
};


int main() {
    
    funkcje tablica;
    int szukana;
    int x;

    tablica.losowanie();

    cout << "Podaj szukaną liczbę(1=100)";
    cin >> szukana;

    tablica.wyswietlanie();

    cout << tablica.wyszukiwanie(szukana);
    return 0;
}