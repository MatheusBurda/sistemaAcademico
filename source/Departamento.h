#pragma once

#include "stdafx.h"

class Universidade;
class Disciplina;

class Departamento {
private:
    char nome[100];
    int id;

    Universidade* pUniversidade;

    Disciplina* pPrimDisciplina;
    Disciplina* pDisciplinaAtual;

public:
    Departamento(const char* n = "");
    ~Departamento();

    void setNome(const char* n);
    char* getNome();

    void setId(int x);
    int getId();

    void setUniversidade(Universidade* pu);

    void novaDisciplina(Disciplina* pDisciplina);
    void imprimeListaDisciplinas();
};
