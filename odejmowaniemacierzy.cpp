#include <iostream>
#include "dodawaniemacierzy.h"
#include "macierze.h"
#include "odejmowaniemacierzy.h"
#include "transpozycja.h"
#include "wyznacznik.h"
#include "menu.h"


using namespace std;
Odejmowanie::Odejmowanie()
{
   ;
}
void Odejmowanie::podaj()
{

    cout <<"Podaj ilo" << char(152)<< char(390) <<" macierzy ktore chcesz odj" << char(165) << char(390) << endl ;
    cin >> a ;
    cout << "Podaj wymiary macierzy:" << endl ;
    cin>> b  ;
    cin >> c;
    if(a>1 && b>0 && c>0)
    {
    A = new float**[a];

    for (int i = 0; i < a; i++)
    {
        A[i] = new float*[b];

        for (int j = 0; j < b; j++)
        {
            A[i][j] = new float[c];

        }
        B = new float**[a];

    for (int i = 0; i < a; i++)
    {
        B[i] = new float*[b];

        for (int j = 0; j < b; j++)
            B[i][j] = new float[c];
    }



    }
    przypisz() ;

    }
    else
    {
       cout <<"Ilo"<< char(152)<< char(390) << "macierzy nie moze byc mniejsza od 1 i wymiary macierzy nie moga byc mniejsze badz rowne 0" <<endl ;
        system("pause") ;
       system("cls") ;
            pokaz() ;
    }



}


void Odejmowanie::przypisz()
{
    cout <<"Podaj pierwsza macierz od ktorej odejmiesz inne" << endl ;
     for (int i = 0; i< 1; i++)
    {
for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {

                cin>>n ;
                B[i][j][k]=n;

            }
        }
    }



     for (int i = 0; i < a-1; i++)
     {
         cout<< "Podaj wartosci " << i+2  <<" macierzy:" << endl ;
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {

                cin>> n ;
                A[i][j][k]=n ;

            }
        }
     }
system("cls") ;
pokaz() ;
}
void Odejmowanie::pokaz()
{
    for (int i = 0; i < 1; i++)
     {
         cout << i+1 << " macierz:" << endl ;
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << B[0][j][k] <<'\t' ;

            }
            cout << endl ;
        }
        cout << endl << endl << endl ;
     }

   for (int i = 0; i < a-1; i++)
     {
         cout << i+2 << " macierz:" << endl ;
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << A[i][j][k] <<'\t' ;

            }
            cout << endl ;
        }
        cout << endl << endl << endl ;
     }

     dodaj() ;
}
void Odejmowanie::dodaj()
{

    for (int i = 0; i< a-1; i++)
    {
for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {


                B[0][j][k]=B[0][j][k]-A[i][j][k];

            }
        }
    }


;


     wynik() ;
}

void Odejmowanie::wynik()
{
    cout << "Wynik odejmowania macierzy:" << endl ;
    for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {


                cout <<B[0][j][k] << '\t';

            }
            cout << endl ;
        }
}
Odejmowanie::~Odejmowanie()
{
     for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            delete[] A[i][j];

        delete[] A[i];
    }

    delete[] A;


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            delete[] B[i][j];

        delete[] B[i];
    }

    delete[] B;


}

