
#include <iostream>
using namespace std;
class Pracownik {
public:
    string imie;
    string nazwisko;
    void wyswietldane() {
        cout << imie;
        cout << nazwisko;
    }
};
int main()
{
    Pracownik pracownik;
    Pracownik* w_pracownik = nullptr;
    w_pracownik = new pracownik();
    w_pracownik->imie = "jan";
    w_pracownik->nazwisko = "kowalski";
    delete w_pracownik;
}