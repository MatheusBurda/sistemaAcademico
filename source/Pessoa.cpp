#include "Pessoa.h"

Pessoa::Pessoa(int diaNasc, int mesNasc, int anoNasc, char* nome) {
    inicializa(diaNasc, mesNasc, anoNasc, nome);
}

Pessoa::Pessoa() {
    inicializa(0, 0, 0);
}

void Pessoa::inicializa(int diaNasc, int mesNasc, int anoNasc, char* nome) {
    dataNasc.dia = diaNasc;
    dataNasc.mes = mesNasc;
    dataNasc.ano = anoNasc;
    idadeP = -1;
    strcpy(nomeP, nome);
}

void Pessoa::calcPrintIdade(int diaAtual, int mesAtual, int anoAtual) {
    calcIdade(diaAtual, mesAtual, anoAtual);
    imprimeIdade();
}

void Pessoa::calcIdade(int diaAtual, int mesAtual, int anoAtual) {
    idadeP = anoAtual - dataNasc.ano;
    if (dataNasc.ano > mesAtual)
        idadeP--;
    else if (mesAtual == dataNasc.ano && dataNasc.dia > diaAtual)
        idadeP--;
}

int Pessoa::getIdade() {
    return idadeP;
}

void Pessoa::imprimeIdade() {
    cout << "A idade de " << nomeP << " seria " << idadeP << endl;
}
