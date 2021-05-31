#include "Universidade.h"

#include "stdafx.h"

Universidade::Universidade(char* n) {
    setNome(n);
}

Universidade::~Universidade() {
}

void Universidade::setNome(char* n) {
    strcpy(nome, n);
}

char* Universidade::getNome() {
    return nome;
}