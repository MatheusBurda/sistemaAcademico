#pragma once

#include "stdafx.h"

class Universidade;
class Disciplina;
class ListaDisciplinas;

class Departamento {
private:
    char nome[100];

    Universidade* pUniversidade;

    ListaDisciplinas* pListaDisciplinasDepart;

public:
    Departamento(const char* n = "");
    ~Departamento();

    void setNome(const char* n);
    char* getNome();

    void setUniversidade(Universidade* pu);
    Universidade* getUniversidade();

    void novaDisciplina(Disciplina* pDisciplina);
    void imprimeListaDisciplinas();
};
