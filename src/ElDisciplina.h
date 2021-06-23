#pragma once 

#include "Disciplina.h"
#include "stdafx.h"


class ElDisciplina
{
private:
    Disciplina* pDisciplina;

    ElDisciplina* pProxDisciplina;
    ElDisciplina* pDisciplinaAnterior;
public:
    ElDisciplina();
    ~ElDisciplina();

// Sets e gets dos atributos da classe
    void setDisciplina(Disciplina* pDis);
    Disciplina* getDisciplina();
    void setProxDisciplina(ElDisciplina* pDis);
    ElDisciplina* getProxDisciplina();    
    void setDisciplinaAnterior(ElDisciplina* pDis);
    ElDisciplina* getDisciplinaAnterior();

// Metodos que chamam os Metodos da classe Disciplina
    char* getNome();
};
