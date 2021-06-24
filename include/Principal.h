#pragma once

#include "Aluno.h"
#include "Departamento.h"
#include "Disciplina.h"
#include "Professor.h"
#include "Universidade.h"
#include "stdafx.h"

#include "ListaDepartamentos.h"
#include "ListaDisciplinas.h"

class Principal {
private:
    Professor Simao;

    Universidade UTFPR;
    ListaDepartamentos listaOBJDepartamentos;
    ListaDisciplinas listaOBJDisciplinas;

    Departamento DAINF;
    Departamento DAELN;
    Departamento DAMAT;

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

    void MenuPrincipal();
    void MenuCadastro();
    void MenuExec();
    void CadDisciplina();
    void CadDepartamento();
};