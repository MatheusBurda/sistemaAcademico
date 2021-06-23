#pragma once

#include "Aluno.h"
#include "Departamento.h"
#include "Disciplina.h"
#include "Professor.h"
#include "Universidade.h"
#include "stdafx.h"

class Principal {
private:
    Professor Simao;
    Professor Eistein;
    Professor Newton;

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAINF;
    Departamento DAELN;
    Departamento DAMAT;
    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;

    Aluno Lara;
    Aluno Matheus;
    Aluno CarlWheezer;

    Disciplina Calculo_1;
    Disciplina TecProg;
    Disciplina GAAL;
    Disciplina Ed1;

    Data dataAtual;

public:
    Principal();
    ~Principal();

    void Inicializa();
    void InicializaData();
    void InicializaUniversidades();
    void InicializaProfessores();
    void InicializaDepartamentos();
    void InicializaDisciplinas();
    void InicializaAlunos();

    void Executar();
};