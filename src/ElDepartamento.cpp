#include "ElDepartamento.h"

ElDepartamento::ElDepartamento() {
    pDepartamento = NULL;
    pProxDepartamento = NULL;
    pDepartamentoAnterior = NULL;
}

ElDepartamento::~ElDepartamento() {
    pDepartamento = NULL;
    pProxDepartamento = NULL;
    pDepartamentoAnterior = NULL;
}

void ElDepartamento::setDepartamento(Departamento* pDep) {
    pDepartamento = pDep;
}

Departamento* ElDepartamento::getDepartamento() {
    return pDepartamento;
}

void ElDepartamento::setProxDepartamento(ElDepartamento* pDep) {
    pProxDepartamento = pDep;
}

ElDepartamento* ElDepartamento::getProxDepartamento() {
    return pProxDepartamento;
}

void ElDepartamento::setDepartamentoAnterior(ElDepartamento* pDep) {
    pDepartamentoAnterior = pDep;
}

ElDepartamento* ElDepartamento::getDepartamentoAnterior() {
    return pDepartamentoAnterior;
}

char* ElDepartamento::getNome() {
    return pDepartamento->getNome();
}
