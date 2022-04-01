#include <iostream>
#include "dodawaniemacierzy.h"
#include "macierze.h"
#include "odejmowaniemacierzy.h"
#include "transpozycja.h"
#include "wyznacznik.h"
#include "menu.h"





using namespace std;
Dodawanie::Dodawanie()
{
   ;
}
void Dodawanie::podaj()
{

    cout <<"Podaj ilo"<< char(152)<< char(390) << " macierzy które chcesz doda" <<char(390) << " :" << endl ;
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
       cout << "Ilo" << char(152) << char(390) << " macierzy nie moze byc mniejsza od 1 i wymiary macierzy nie mog" << char(165) << " by" << char(390)<<" mniejsze badz r" << char(165) << "wne 0" <<endl ;
       system("pause") ;
        system("cls") ;
        podaj() ;
    }



}


void Dodawanie::przypisz()
{

     for (int i = 0; i < a; i++)
     {
          cout << "Podaj pokolei wartosci "<< i+1 << " macierzy:" << endl ;
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
void Dodawanie::pokaz()
{

   for (int i = 0; i < a; i++)
     {
         cout << i+1 << " macierz:" << endl ;
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
void Dodawanie::dodaj()
{

    for (int i = 0; i< a; i++)
    {
for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {


                B[i][j][k]=0;

            }
        }
    }


   for(int i=0 ; i<a ; i++)
   {

        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {

                n=A[i][j][k] ;
                B[0][j][k]=B[0][j][k]+n; //cos zle

            }
        }
   }

     wynik() ;
}

void Dodawanie::wynik()
{
    cout << "Wynik dodawania macierzy:" << endl ;
    for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {


                cout <<B[0][j][k] << '\t';

            }
            cout << endl ;
        }
}

Dodawanie::~Dodawanie()
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
