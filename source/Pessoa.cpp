#include "Pessoa.hpp"

#include <stdio.h>
#include <string.h>

Pessoa::Pessoa(int diaNasc, int mesNasc, int anoNasc, char* nome) {
    diaP = diaNasc;
    mesP = mesNasc;
    anoP = anoNasc;
    idadeP = -1;
    strcpy(nomeP, nome);
}

void Pessoa::calcIdade(int diaAtual, int mesAtual, int anoAtual) {
    idadeP = anoAtual - anoP;
    if (mesP > mesAtual)
        idadeP--;
    else if (mesAtual == mesP && diaP > diaAtual)
        idadeP--;
}

int Pessoa::getIdade() {
    return idadeP;
}

void Pessoa::imprimeIdade() {
    printf("%s teria %d anos.\n", nomeP, idadeP);
}