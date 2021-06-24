#pragma once

#include "Aluno.h"
#include "stdafx.h"

class ElAluno {
private:
    Aluno* pAluno;
    ElAluno* pAlunoAnterior;
    ElAluno* pProxAluno;

public:
    ElAluno();
    ~ElAluno();

    void setAluno(Aluno* pA);
    Aluno* getAluno();

    void setProxAluno(ElAluno* pA);
    ElAluno* getProxAluno();    

    void setAlunoAnterior(ElAluno* pA);
    ElAluno* getAlunoAnterior();

    char* getNome();
};
 