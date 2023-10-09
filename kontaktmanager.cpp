//
#include "kontaktmanager.h"

#include <stdlib.h>

#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;
using std::ofstream;
using std::ios;

#include <sstream>
using std::stringstream;

// Methoden ---
void KontaktManager::dateiEinlesen( const string kontaktListe )
{
    ifstream in( kontaktListe, ios::in );

    if( !in.fail() )
    {
        // Variablen für die Datensätze deklarieren
        int id = 0;
        string vorname;
        string nachname;
        string geburtsdatum;
        string strasse;
        string hausnummer;
        string plz;
        string ort;
        string geschlecht;
        string telefonNummer;
        string mobilNummer;
        string emailAdresse;

        int anzahlEingelesenerKontakte = 0;

        while( in   >> id            >> vorname
                    >> nachname      >> geburtsdatum
                    >> strasse       >> hausnummer
                    >> plz           >> ort
                    >> geschlecht    >> telefonNummer
                    >> mobilNummer   >> emailAdresse )
        {
            this->kontakte.push_back( Kontakt( id, vorname, nachname,
                     geburtsdatum, strasse, hausnummer, plz, ort, geschlecht,
                     telefonNummer, mobilNummer, emailAdresse ) );

            ++anzahlEingelesenerKontakte;
        }

        cout << "\n" << anzahlEingelesenerKontakte
             << ( ( anzahlEingelesenerKontakte == 1 )
                                 ? " Kontakt"
                                 : " Kontakte" )
             << " eingelesen!" << endl;
    }
}

void KontaktManager::kontakteAnzeigen() const
{
    for( const Kontakt &kontakt : this->kontakte ) // C++ 11
    {
        cout << "------------------------" << endl;
        kontakt.datenAusgeben();
    }
}
// ---
