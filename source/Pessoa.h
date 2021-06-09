#include "stdafx.h"

class Pessoa {
protected:
    int idadeP;
    char nomeP[30];

    Data dataNasc;

public:
    Pessoa(int diaNasc, int mesNasc, int anoNasc, char* nome = (char*)"");
    Pessoa();

    void inicializa(int diaNasc, int mesNasc, int anoNasc, char* nome = (char*)"");
    void calcIdade(int diaAtual, int mesAtual, int anoAtual);
    void calcPrintIdade(int diaAtual, int mesAtual, int anoAtual);
    int getIdade();
    void imprimeIdade();
};
