#include "Disciplina.h"

Disciplina::Disciplina(int qAlunos, const char* n) {
    pDepartamento = NULL;
    pProxDisciplina = NULL;

    nAlunos = 0;
    maxAlunos = qAlunos;

    pPrimeiroAluno = NULL;
    pAlunoAtual = NULL;
}

Disciplina::~Disciplina() {
    ElAluno* paux = NULL;
    paux = pPrimeiroAluno;
    while (paux != NULL) {
        pPrimeiroAluno = pPrimeiroAluno->getProxAluno();
        delete paux;
        paux = pPrimeiroAluno;
    }

    pDepartamento = NULL;
    pProxDisciplina = NULL;
    pPrimeiroAluno = NULL;
    pAlunoAtual = NULL;
}

void Disciplina::setDepartamento(Departamento* pDpto) {
    pDepartamento = pDpto;

    pDpto->novaDisciplina(this);
}

Departamento* Disciplina::getDepartamento() {
    return pDepartamento;
}

void Disciplina::setNome(const char* n) {
    strcpy(nome, n);
}

char* Disciplina::getNome() {
    return nome;
}

void Disciplina::setProxDisciplina(Disciplina* pProx) {
    pProxDisciplina = pProx;
}

Disciplina* Disciplina::getProxDisciplina() {
    return pProxDisciplina;
}

void Disciplina::incluirAluno(Aluno* pa) {
    ElAluno* paux = NULL;

    paux = new ElAluno();

    paux->setAluno(pa);

    if ((nAlunos < maxAlunos) && (pa != NULL)) {
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
        cout << "Aluno não incluido na disciplina. Turma lotada em " << maxAlunos << endl;
        delete (paux);
    }
}

void Disciplina::listeAlunos() {
    ElAluno* paux;
    paux = pPrimeiroAluno;
    if (paux == NULL) {
        cout << "Nenhum aluno matriculado na disciplina! " << endl;
        return;
    }
    while (paux != NULL) {
        cout << "Aluno " << paux->getNome() << " matriculado na disciplina " << nome << endl;
        paux = paux->getProxAluno();
    }
}

void Disciplina::listeAlunos2() {
    ElAluno* paux;
    paux = pAlunoAtual;
    if (paux == NULL) {
        cout << "Nenhum aluno matriculado na disciplina! " << endl;
        return;
    }
    while (paux != NULL) {
        cout << "Aluno " << paux->getNome() << " matriculado na disciplina " << nome << endl;
        paux = paux->getAlunoAnterior();
    }
}

void Disciplina::setMaxAlunos(int qAlunos) {
    maxAlunos = qAlunos;
}
