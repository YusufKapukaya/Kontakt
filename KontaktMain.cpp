//main.cpp

#include <locale.h>    // setlocale(...)
#include <stdlib.h>    // system(...)
#include <iostream>    // cin, cout, endl
using std::cin;
using std::cout;
using std::endl;

#include "kontaktmanager.h"

void printMenue()
{
    // Konsole leeren
    system( "cls" );

    // Menü ausgeben
    cout << "(1) Kontaktliste einlesen\n"
         << "(2) Kontaktliste ausgeben\n"
         << "(x) Programm beenden\n"
         << endl;
}

int main()
{
    // Anpassung an nationale Besonderheiten ( bspw. Anzeigen deutscher Umlaute etc. )
    setlocale( LC_ALL, "" );

    KontaktManager kontaktManager;
    char menuepunkt;

    do
    {
        printMenue();
        cout << "Menü-Wahl: ";
        cin >> menuepunkt;

        switch( menuepunkt )
        {
        case '1':
            kontaktManager.dateiEinlesen( "kontakte.txt" );
            break;

        case '2':
            kontaktManager.kontakteAnzeigen();
            cout << endl;
            break;

        case 'x':
            cout << "\nProgramm wird beendet!" << endl;
            break;

        default:
            cout << "\nUnbekannte Eingabe!" << endl;
            break;
        }

        system( "PAUSE" );

    } while( menuepunkt != 'x' );

    return 0;
}

