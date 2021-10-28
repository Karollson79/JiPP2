#include "iostream"

using namespace std;

class Student{
public:
    string imie, nazwisko;
    int numer_albumu, liczba_pytan, poprawne_odpowiedzi;

    void wczytaj_student(string w_imie, string w_nazwisko, int w_numer_albumu, int w_liczba_pytan, int w_poprawne_odpowiedzi){
        imie = w_imie;
        nazwisko = w_nazwisko;
        numer_albumu = w_numer_albumu;
        liczba_pytan = w_liczba_pytan;
        poprawne_odpowiedzi = w_poprawne_odpowiedzi;
    }

    int procent_poprawnych(){
        return (poprawne_odpowiedzi*100)/liczba_pytan;
    }

};

int main(){
    Student s1;
    s1.wczytaj_student("Marcin", "Jankosz", 123567, 10, 6);
    cout << s1.procent_poprawnych();
}

