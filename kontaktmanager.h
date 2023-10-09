//

#ifndef KONTAKTMANAGER_H
#define KONTAKTMANAER_H

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "kontakt.h"

class KontaktManager
{
public:
    // Methoden ---
    void dateiEinlesen( const string kontaktListe );
    void kontakteAnzeigen() const;
    // ---

private:
    // Eigenschaften ---
    vector<Kontakt> kontakte;
    // ---
};

#endif
