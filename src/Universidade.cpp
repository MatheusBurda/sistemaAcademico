#include "Universidade.h"

#include "stdafx.h"

Universidade::Universidade(const char* n) {
    setNome(n);
    listaDepartamentosUniv = new ListaDepartamentos();
}

Universidade::~Universidade() {
    if (listaDepartamentosUniv != NULL)
        delete (listaDepartamentosUniv);
    listaDepartamentosUniv = NULL;
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

    listaDepartamentosUniv->incluirDepartamento(pdep);
}

void Universidade::imprimeDepartamentos() {
    cout << nome << " possui " << listaDepartamentosUniv->getQDepartamentos() << " departamento(s):" << endl;
    listaDepartamentosUniv->imprimeListaDepartamentos();
}