#include <iostream>
using namespace std;


struct studente
{
    string nome;
    float voto;
};

struct studente classe[30];
int dimensione_fisica=0;
int dimensione_logica=0;

void inserisciStudenti()
{
    cout<<"Quanti studenti vuoi inserire: \n";
    cin>>dimensione_fisica;
    if(dimensione_fisica>30){
        cout<<"Errore! Sono disponibili solo 30 posti.\n";
    }
}

void inserisciDati()
{
    for (int i = 0; i < dimensione_logica; i++)
    {
        cout<<"Inserisci nome studente: \n";
    cin>>classe[i].nome;
    cout<<"Inserisci voto studente: \n";
    cin>> classe[i].voto;
    }
}

void stampaRegistro()
{
    if(dimensione_logica>0)
    {
        cout<<"\nElenco degli studenti: ";
        for (int i = 0; i < dimensione_fisica; i++)
        {
            cout<<"\nStudente"<<i<<": "<< classe[i].nome<<" " << "Voto"<< classe[i].voto;
        }
        
    }
    else
    {
        cout<<"\nAttenzione, nessun studente inserito.";
    }
}

void media()
{
    if (dimensione_fisica>0)
    {
        float somma=0;
        for (int i = 0; i < dimensione_fisica; i++)
        {
            somma+=classe[i].voto;
        }
        float media= somma/(float)dimensione_fisica;
        cout<<"\nLa media dei voti e: "<<media;
    }
    else
    {
        cout<<"\nAttenzione, nessun studente inserito.";
    }
    
}

void studentiSufficienti()
{
    if(dimensione_fisica>0)
    {
        int contaSufficienti=0;
        for (int i = 0; i < dimensione_fisica; i++)
        {
            if (classe[i].voto>=6)
            {
                cout<<classe[i].nome<<" Voto: "<<classe[i].voto;
                contaSufficienti++;
            }            
        }
        if (contaSufficienti==0)
        {
            cout<<"\nNessun studente ha la sufficienza.";
        }      
        
    }
}

void votoMigliore()
{
    int i=0;
    int secchione=0;
    while (i < dimensione_fisica)
    {
        if (classe[i].voto > classe[secchione].voto)
        {
            secchione=i;
        }
        i++;
    }
    cout<<"\nLo studente con il voto migliore e: "<<classe[secchione].nome<<"\nCon un voto di: "<<classe[secchione].voto;
}
