#include "Universidade.h"

#include "stdafx.h"

Universidade::Universidade(const char* n) {
    setNome(n);
    qDepartamentos = 0;
}

Universidade::~Universidade() {
}

void Universidade::setNome(const char* n) {
    strcpy(nome, n);
}

char* Universidade::getNome() {
    return nome;
}

void Universidade::setDepartamento(Departamento* pdep) {
    if (pdep == NULL) {
        cout << "ERROR: Ponteiro para departamento invalido" << endl;
        return;
    }

    pDptos.push_back(pdep);
    pDptos[qDepartamentos]->setId(qDepartamentos);
    qDepartamentos++;
}

void Universidade::imprimeDepartamentos() {
    cout << nome << " possui " << qDepartamentos << " departamento(s):" << endl;
    for (int i = 0; i < (int)pDptos.size(); i++) {
        if (pDptos[i] != NULL)
            cout << pDptos[i]->getId() + 1 << " - " << pDptos[i]->getNome() << endl;
    }
}