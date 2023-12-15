#include <iostream>

using namespace std;

struct Pista
{
};

struct Atleta
{
    string nome;
    string cognome;
    int dataDiNascita;
    string specialita[69];
};

struct Gara
{
    int data;
    int oraInizio;
    Pista pisteDisponibili[69];
    Atleta atleti[69];
};