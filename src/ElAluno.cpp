#include "ElAluno.h"

ElAluno::ElAluno() {
    pAluno = NULL;
    pAlunoAnterior = NULL;
    pProxAluno = NULL;
}

ElAluno::~ElAluno() {
    pAluno = NULL;
    pAlunoAnterior = NULL;
    pProxAluno = NULL;
}

void ElAluno::setAluno(Aluno* pA) {
    pAluno = pA;
}

Aluno* ElAluno::getAluno() {
    return pAluno;
}

void ElAluno::setProxAluno(ElAluno* pA) {
    pProxAluno = pA;
}

ElAluno* ElAluno::getProxAluno() {
    return pProxAluno;
}

void ElAluno::setAlunoAnterior(ElAluno* pA) {
    pAlunoAnterior = pA;
}

ElAluno* ElAluno::getAlunoAnterior() {
    return pAlunoAnterior;
}

char* ElAluno::getNome() {
    return pAluno->getNome();
}
