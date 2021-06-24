#pragma once

#include "stdafx.h"

class Pessoa {
protected:
    int idadeP;
    char nomeP[30];

    Data dataNasc;

public:
    Pessoa(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");
    Pessoa();

    void inicializa(int diaNasc, int mesNasc, int anoNasc, const char* nome);
    void calcIdade(int diaAtual, int mesAtual, int anoAtual);
    void calcPrintIdade(int diaAtual, int mesAtual, int anoAtual);
    int getIdade();
    void imprimeIdade();

    char* getNome();
    Data getDataNascimento();
};
