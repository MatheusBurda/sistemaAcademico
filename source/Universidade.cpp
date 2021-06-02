#include "Universidade.h"

#include "stdafx.h"

Universidade::Universidade(char* n) {
    setNome(n);
    qDepartamentos = 0;
    for (int i = 0; i < 50; i++)
        pDptos[i] = NULL;
}

Universidade::~Universidade() {
}

void Universidade::setNome(char* n) {
    strcpy(nome, n);
}

char* Universidade::getNome() {
    return nome;
}

void Universidade::setDepartamento(Departamento* pdep) {
    pDptos[qDepartamentos] = pdep;
    pDptos[qDepartamentos]->setId(qDepartamentos);
    qDepartamentos++;
}

void Universidade::imprimeDepartamentos() {
    cout << qDepartamentos << " Departamentos da Universidade " << nome << endl;
    for (int i = 0; i < qDepartamentos; i++) {
        if (pDptos[i] != NULL)
            cout << pDptos[i]->getId() + 1 << " - " << pDptos[i]->getNome() << endl;
    }
}

int Universidade::getQtdDptos() {
    return qDepartamentos + 1;
}