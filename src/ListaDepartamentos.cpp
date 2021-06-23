#include "ListaDepartamentos.h"

ListaDepartamentos::ListaDepartamentos() {
    nDepartamentos = 0;
    pPrimDepartamento = NULL;
    pDepartamentoAtual = NULL;
}

ListaDepartamentos::~ListaDepartamentos() {
    ElDepartamento *paux1, *paux2;

    paux1 = pPrimDepartamento;
    paux2 = paux1;

    while (paux1 != NULL) {
        paux2 = paux1->getProxDepartamento();
        delete (paux1);
        paux1 = paux2;
    }

    pPrimDepartamento = NULL;
    pDepartamentoAtual = NULL;
}

void ListaDepartamentos::incluirDepartamento(Departamento* pd) {
    if (pd != NULL) {
        ElDepartamento* paux;

        paux = new ElDepartamento();

        paux->setDepartamento(pd);

        if (pPrimDepartamento == NULL) {
            pPrimDepartamento = paux;
            pDepartamentoAtual = paux;
        } else {
            pDepartamentoAtual->setProxDepartamento(paux);
            paux->setDepartamentoAnterior(pDepartamentoAtual);
            pDepartamentoAtual = paux;
        }
        nDepartamentos++;

    } else {
        cout << "Pronteiro Departamento* NULL. Insersão nao sucedida!!" << endl;
    }
}

void ListaDepartamentos::imprimeListaDepartamentos() {
    ElDepartamento* paux;
    paux = pPrimDepartamento;

    for (int i = 1; paux != NULL; i++) {
        cout << i << " - " << paux->getNome() << endl;
        paux = paux->getProxDepartamento();
    }
}

int ListaDepartamentos::getQDepartamentos() {
    return nDepartamentos;
}