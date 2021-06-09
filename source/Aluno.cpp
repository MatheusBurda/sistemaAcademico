#include "Aluno.h"

Aluno::Aluno(int diaNasc, int mesNasc, int anoNasc, char* nome) :
Pessoa(diaNasc, mesNasc, anoNasc, nome) {
    RA = -1;
}

Aluno::Aluno() :
Pessoa() {
    RA = -1;
}

Aluno::~Aluno() {
}

void Aluno::setRA(int x) {
    RA = x;
}

int Aluno::getRA() {
    return RA;
}
