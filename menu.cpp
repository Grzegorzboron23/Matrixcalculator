#include <iostream>
#include "dodawaniemacierzy.h"
#include "macierze.h"
#include "odejmowaniemacierzy.h"
#include "transpozycja.h"
#include "wyznacznik.h"
#include "menu.h"
#include "mnozenie.h"
#include "odwrotna.h"


using namespace std;

void Menu::pokazmenu()
{

    while(true)
    {

        cout <<"Podaj numer:" << endl ;
        cout <<"1.Dodawanie macierzy" << endl ;
        cout <<"2.Odejmowanie macierzy:" << endl ;
        cout <<"3.Transpozycja macierzy:" << endl ;
        cout <<"4.Wyznacznik macierzy:" << endl ;
       cout <<"5.Mno"<< char(190) << "enie macierzy:" << endl ;
       cout <<"6.Wyj" << char(152) << "cie" << endl ;
        cin >> a ;
        Macierze* wsk ;
        system("cls") ;
        switch(a)
        {
        case 1:
        {


            Dodawanie dodaj ;
            wsk=&dodaj ;
            wsk -> podaj() ;
            system("pause") ;
            system("cls") ;

            break ;
        }
        case 2:
        {


            Odejmowanie dodaj ;
            wsk=&dodaj ;
            wsk -> podaj() ;
             system("pause") ;
            system("cls") ;

            break ;
        }
        case 3:
        {


            Transpozycja dodaj ;
            wsk=&dodaj ;
            wsk -> podaj() ;
             system("pause") ;
            system("cls") ;

            break ;
        }
        case 4:
        {


            Wyznacznik  dodaj ;
            wsk=&dodaj ;
            wsk -> podaj() ;
            system("pause") ;
            system("cls") ;
            break ;
        }
        case 5:
        {
            Mnozenie  dodaj ;
            wsk=&dodaj ;
            wsk -> podaj() ;
            system("pause") ;
            system("cls") ;

            break ;
        }

        case 6:
        {
            cout <<"Program sie wylaczy" << endl ;
            system("pause") ;
            system("cls") ;

            exit(0) ;
            break ;
        }

        default:
        {
            cout << "Nie ma takiego polecenia" << endl ;
            cout <<"Wpisz poprawny numer" << endl ;
             cin.clear();
             system("pause") ;
             cin.sync();

            system("cls") ;
            Menu menu ;
            menu.pokazmenu() ;
            break ;


        }



        }

    }
}
