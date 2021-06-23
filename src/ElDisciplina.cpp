#include "ElDisciplina.h"

ElDisciplina::ElDisciplina() {
    pDisciplina = NULL;
    pProxDisciplina = NULL;
    pDisciplinaAnterior = NULL;
}

ElDisciplina::~ElDisciplina() {
    pDisciplina = NULL;
    pProxDisciplina = NULL;
    pDisciplinaAnterior = NULL;
}

void ElDisciplina::setDisciplina(Disciplina* pDis) {
    pDisciplina = pDis;
}

Disciplina* ElDisciplina::getDisciplina() {
    return pDisciplina;
}

void ElDisciplina::setProxDisciplina(ElDisciplina* pDis) {
    pProxDisciplina = pDis;
}

ElDisciplina* ElDisciplina::getProxDisciplina() {
    return pProxDisciplina;
}

void ElDisciplina::setDisciplinaAnterior(ElDisciplina* pDis) {
    pDisciplinaAnterior = pDis;
}

ElDisciplina* ElDisciplina::getDisciplinaAnterior() {
    return pDisciplinaAnterior;
}

char* ElDisciplina::getNome() {
    return pDisciplina->getNome();
}
