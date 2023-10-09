//

#include "kontakt.h"

#include <iostream>
using std::cout;
using std::endl;

// Konstruktoren ---
Kontakt::Kontakt( const int ID, const string vorname,
    const string nachname, const string geburtsdatum,
    const string strasse, const string hausnummer,
    const string plz, const string ort, const string geschlecht,
    const string telefonNummer, const string mobilNummer,
    const string emailAdresse )
: ID( ID )
, vorname( vorname )
, nachname( nachname  )
, geburtsdatum( geburtsdatum  )
, strasse( strasse )
, hausnummer( hausnummer )
, plz( plz )
, ort( ort )
, geschlecht( geschlecht )
, telefonNummer( telefonNummer )
, mobilNummer( mobilNummer )
, emailAdresse( emailAdresse )
{
}

Kontakt::Kontakt( const Kontakt &obj )
: ID( obj.ID )
, vorname( obj.vorname )
, nachname( obj.nachname )
, geburtsdatum( obj.geburtsdatum )
, strasse( obj.strasse )
, hausnummer( obj.hausnummer )
, plz( obj.plz )
, ort( obj.ort )
, geschlecht( obj.geschlecht )
, telefonNummer( obj.telefonNummer )
, mobilNummer( obj.mobilNummer )
, emailAdresse( obj.emailAdresse )
{
}
// ---


// Methoden ---
void Kontakt::datenAusgeben() const
{
    cout << "ID: " << this->getID()
         << "\n"
         << "Vorname: " << this->getVorname()
         << "\n"
         << "Nachname: " << this->getNachname()
         << "\n"
         << "Geburtsdatum: " << this->getVorname()
         << "\n"
         << "Adresse: " << this->getStrasse()
         << " " << this->getHausnummer()
         << ", " << this->getPlz()
         << " " << this->getOrt() << "\n"
         << "Geschlecht: "
         << this->getGeschlechtLiteral( this->getGeschlecht() )
         << "\n"
         << "Telefon: " << this->getTelefonNummer()
         << "\n"
         << "Mobil: " << this->getMobilNummer()
         << "\n"
         << "E-Mail: " << this->getEmailAdresse()
         << endl;
}

string Kontakt::getGeschlechtLiteral( const string geschlechtKuerzel ) const
{
    if( geschlechtKuerzel == "m" )
    {
        return "männlich";
    }
    else if( geschlechtKuerzel == "w" )
    {
        return "weiblich";
    }
    else
    {
        return "undefiniert";
    }
}
// ---

// Getter ---
int Kontakt::getID() const
{
    return this->ID;
}

string Kontakt::getVorname() const
{
    return this->vorname;
}

string Kontakt::getNachname() const
{
    return this->nachname;
}

string Kontakt::getGeburtsdatum() const
{
    return this->geburtsdatum;
}

string Kontakt::getStrasse() const
{
    return this->strasse;
}

string Kontakt::getHausnummer() const
{
    return this->hausnummer;
}

string Kontakt::getPlz() const
{
    return this->plz;
}

string Kontakt::getOrt() const
{
    return this->ort;
}

string Kontakt::getGeschlecht() const
{
    return this->geschlecht;
}

string Kontakt::getTelefonNummer() const
{
    return this->telefonNummer;
}

string Kontakt::getMobilNummer() const
{
    return this->mobilNummer;
}

string Kontakt::getEmailAdresse() const
{
    return this->emailAdresse;
}
// ---
