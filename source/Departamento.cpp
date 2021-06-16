#include "Departamento.h"

#include "Universidade.h"
#include "stdafx.h"

Departamento::Departamento(const char* n) {
    setNome(n);
    pUniversidade = NULL;
    id = -1;
}

Departamento::~Departamento() {
}

void Departamento::setNome(const char* n) {
    strcpy(nome, n);
}

char* Departamento::getNome() {
    return nome;
}

void Departamento::setId(int x) {
    id = x;
}

int Departamento::getId() {
    return id;
}
void Departamento::setUniversidade(Universidade* pu) {
    pUniversidade = pu;
}
