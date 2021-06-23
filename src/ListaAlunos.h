#pragma once

#include "Aluno.h"
#include "ElAluno.h"

class ListaAlunos {
private:
    int nAlunos;
    int maxAlunos;

    ElAluno* pAlunoAtual;
    ElAluno* pPrimeiroAluno;
public:
    ListaAlunos(int qA = 44);
    ~ListaAlunos();

    void incluirAluno(Aluno* pa);
    void listeAlunos();
    void listeAlunos2();
    
    void setMaxAlunos(int qAlunos);
    int getQAlunos();
};
