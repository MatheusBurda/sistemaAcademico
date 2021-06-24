#pragma once

#include "Disciplina.h"
#include "ElDisciplina.h"
#include "stdafx.h"

class ListaDisciplinas {
private:
    int nDisciplinas;

    ElDisciplina* pPrimDisciplina;
    ElDisciplina* pDisciplinaAtual;

public:
    ListaDisciplinas();
    ~ListaDisciplinas();

    void novaDisciplina(Disciplina* pDisciplina);
    void imprimeListaDisciplinas();
};
