#include <iostream>
#include "studente.h"
using namespace std;

int main()
{
    inserisciStudenti();
    inserisciDati();
    votoMigliore();
    int scelta;
    do
    {
        cout << "-----MENU-----";
        cout << "\n1. Visualizza registro di classe con i rispettivi voti";
        cout << "\n2. Media voti classe";
        cout << "\n3. Studenti con voto sufficiente";
        cout << "\n4. Esci dal programma";
        cout << "\nScelta: ";
        cin >> scelta;
        switch (scelta)
        {
        case 1:
            stampaRegistro();
            break;
        case 2:
            media();
            break;
        case 3:
            studentiSufficienti();
            break;
        case 4:
            cout << "\nEsco dal programma";
            break;
        default:
            cout << "\nScelta non valida. Riprova";
            break;
        }
    } while (scelta != 4);
    return 0;
}