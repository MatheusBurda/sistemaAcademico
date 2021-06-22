#pragma once

#include "Aluno.h"
#include "Departamento.h"
#include "ElAluno.h"
#include "stdafx.h"

class Disciplina {
private:
    char nome[100];

    Departamento* pDepartamento;
    Disciplina* pProxDisciplina;

    int nAlunos;
    int maxAlunos;
    ElAluno* pAlunoAtual;
    ElAluno* pPrimeiroAluno;

public:
    Disciplina(int qAlunos = 45, const char* n = "");
    ~Disciplina();

    void setDepartamento(Departamento* pDpto);
    Departamento* getDepartamento();

    void setNome(const char* n);
    char* getNome();

    void setProxDisciplina(Disciplina* prox);
    Disciplina* getProxDisciplina();

    void incluirAluno(Aluno* pa);
    void listeAlunos();
    void listeAlunos2();
    
    void setMaxAlunos(int qAlunos);
};
