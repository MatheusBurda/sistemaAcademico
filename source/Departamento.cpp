#include "Departamento.h"

#include "stdafx.h"

Departamento::Departamento(char* n) {
    setNome(n);
}

Departamento::~Departamento() {
}

void Departamento::setNome(char* n) {
    strcpy(nome, n);
}

char* Departamento::getNome() {
    return nome;
}