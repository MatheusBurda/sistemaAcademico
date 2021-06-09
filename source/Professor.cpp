#include "Professor.h"

Professor::Professor(int diaNasc, int mesNasc, int anoNasc, char* nome) :
Pessoa(diaNasc, mesNasc, anoNasc, nome) {
    pDepartFiliado = NULL;
    pUnivFiliado = NULL;
}

Professor::Professor() :
Pessoa() {
    pDepartFiliado = NULL;
    pUnivFiliado = NULL;
}

Professor::~Professor() {
    pDepartFiliado = NULL;
    pUnivFiliado = NULL;
}

void Professor::setUniversidade(Universidade* pUni) {
    pUnivFiliado = pUni;
}

void Professor::imprimeOndeTrabalha() {
    if (pUnivFiliado == NULL) {
        cout << nomeP << " nao esta filiado a nenhuma universidade" << endl;
        return;
    }
    cout << nomeP << " trabalha na " << pUnivFiliado->getNome() << endl;
}

void Professor::setDepartamento(Departamento* pDepart) {
    pDepartFiliado = pDepart;
}

void Professor::imprimeQualDepartamentoTrabalha() {
    if (pUnivFiliado == NULL || pDepartFiliado == NULL) {
        cout << nomeP << " nao esta filiado a uma universidade/departamento" << endl;
        return;
    }

    cout << nomeP << " trabalha no departamento " << pDepartFiliado->getNome()
         << " na universidade " << pUnivFiliado->getNome() << endl;
}
