#pragma once

#include "Departamento.h"
#include "ListaAlunos.h"
#include "stdafx.h"

class Disciplina {
private:
    char nome[100];

    Departamento* pDepartamento;

    ListaAlunos listaAlunosMatriculados;

public:
    Disciplina(int qAlunos = 44, const char* n = "");
    ~Disciplina();

    void setNome(const char* n);
    char* getNome();

    void setDepartamento(Departamento* pDpto);
    Departamento* getDepartamento();

    void incluirAluno(Aluno* pa);
    void listeAlunos();
    void listeAlunos2();

    void setMaxAlunos(int qAlunos);
};
