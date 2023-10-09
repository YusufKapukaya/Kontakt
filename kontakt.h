//

#ifndef KONTAKT_H
#define KONTAKT_H

#include <string>
using std::string;

class Kontakt
{
public:
    // Konstruktoren ---
    Kontakt( const int ID, const string vorname, const string nachname,
                   const string geburtsdatum, const string strasse,
                   const string hausnummer, const string plz, const string ort,
                   const string geschlecht, const string telefonNummer,
                   const string mobilNummer, const string emailAdresse );
    Kontakt( const Kontakt &obj );
    // ---

    // Methoden ---
    void datenAusgeben() const;
    // ---

    // Getter ---
    int getID() const;
    string getVorname() const;
    string getNachname() const;
    string getGeburtsdatum() const;
    string getStrasse() const;
    string getHausnummer() const;
    string getPlz() const;
    string getOrt() const;
    string getGeschlecht() const;
    string getTelefonNummer() const;
    string getMobilNummer() const;
    string getEmailAdresse() const;
    // --
private:
    // Methoden ---
    string getGeschlechtLiteral( const string geschlechtKuerzel ) const;
    // ---

    // Eigenschaften ---
    const int ID;
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
    // ---
};

#endif
