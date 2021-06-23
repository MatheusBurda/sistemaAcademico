#include "ListaAlunos.h"

ListaAlunos::ListaAlunos(int qA) {
    nAlunos = 0;
    maxAlunos = qA;

    pPrimeiroAluno = NULL;
    pAlunoAtual = NULL;
}

ListaAlunos::~ListaAlunos() {
    ElAluno* paux = NULL;
    paux = pPrimeiroAluno;

    while (paux != NULL) {
        pPrimeiroAluno = pPrimeiroAluno->getProxAluno();
        delete paux;
        paux = pPrimeiroAluno;
    }

    pPrimeiroAluno = NULL;
    pAlunoAtual = NULL;
}

void ListaAlunos::incluirAluno(Aluno* pa) {
    if ((nAlunos < maxAlunos) && (pa != NULL)) {
        ElAluno* paux = NULL;

        paux = new ElAluno();

        paux->setAluno(pa);

        if (pPrimeiroAluno == NULL) {
            pPrimeiroAluno = paux;
            pAlunoAtual = paux;
        } else {
            pAlunoAtual->setProxAluno(paux);
            paux->setAlunoAnterior(pAlunoAtual);
            pAlunoAtual = paux;
        }
        nAlunos++;
    } else {
        if (pa != NULL) {
            cout << "Aluno não incluido na disciplina. Turma lotada em " << maxAlunos << endl;
        } else {
            cout << "Pronteiro Aluno* NULL. Insersão nao sucedida." << endl;
        }
    }
}

void ListaAlunos::listeAlunos() {
    ElAluno* paux;
    int i = 1;
    paux = pPrimeiroAluno;

    if (paux == NULL) {
        cout << "Nenhum aluno matriculado na disciplina! " << endl;
        return;
    }
    
    while (paux != NULL) {
        cout << i << " - " << paux->getNome() << endl;
        paux = paux->getProxAluno();
        i++;
    }
}

void ListaAlunos::listeAlunos2() {
    ElAluno* paux;
    int i = 1;
    paux = pAlunoAtual;
    if (paux == NULL) {
        cout << "Nenhum aluno matriculado na disciplina! " << endl;
        return;
    }
    while (paux != NULL) {
        cout << i << " - " << paux->getNome() << endl;
        paux = paux->getAlunoAnterior();
        i++;
    }
}

void ListaAlunos::setMaxAlunos(int qAlunos) {
    maxAlunos = qAlunos;
}

int ListaAlunos::getQAlunos() {
    return nAlunos;
}
