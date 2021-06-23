#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas() {
    nDisciplinas = 0;
    pPrimDisciplina = NULL;
    pDisciplinaAtual = NULL;
}

ListaDisciplinas::~ListaDisciplinas() {
    ElDisciplina *paux1, *paux2;

    paux1 = pPrimDisciplina;
    paux2 = paux1;

    while (paux1 != NULL) {
        paux2 = paux1->getProxDisciplina();
        delete (paux1);
        paux1 = paux2;
    }

    pPrimDisciplina = NULL;
    pDisciplinaAtual = NULL;
}

void ListaDisciplinas::novaDisciplina(Disciplina* pDiscip) {
    if (pDiscip != NULL) {
        ElDisciplina* paux = NULL;

        paux = new ElDisciplina();

        paux->setDisciplina(pDiscip);

        if (pPrimDisciplina == NULL) {
            pPrimDisciplina = paux;
            pDisciplinaAtual = paux;
        } else {
            pDisciplinaAtual->setProxDisciplina(paux);
            paux->setDisciplinaAnterior(pDisciplinaAtual);
            pDisciplinaAtual = paux;
        }
        nDisciplinas++;
    } else {
        cout << "Pronteiro Aluno* NULL. Insersão nao sucedida." << endl;
    }
}

void ListaDisciplinas::imprimeListaDisciplinas() {
    ElDisciplina* pDisciplina;

    pDisciplina = pPrimDisciplina;

    for (int i = 1; pDisciplina != NULL; i++) {
        cout << i << " - " << pDisciplina->getNome() << endl;
        pDisciplina = pDisciplina->getProxDisciplina();
    }
}
