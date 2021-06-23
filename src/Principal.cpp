#include "Principal.h"

#include <time.h>

Principal::Principal() {
    Inicializa();

    // Chama a função principal Executar
    Executar();
}

Principal::~Principal() {
}

void Principal::Inicializa() {
    InicializaData();
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaProfessores();
    InicializaAlunos();
    InicializaDisciplinas();
}

// Inicializa a data atual usando a time.h
void Principal::InicializaData() {
    struct tm* local;

    time_t segundos;
    time(&segundos);

    local = localtime(&segundos);

    dataAtual.dia = local->tm_mday;
    dataAtual.mes = local->tm_mon + 1;
    dataAtual.ano = local->tm_year + 1900;
}

// Inicializa as Universidades
void Principal::InicializaUniversidades() {
    UTFPR.setNome("UTFPR");
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambrigde");
}

void Principal::InicializaProfessores() {
    Simao.inicializa(3, 10, 1976, "Jean Simão");
    Eistein.inicializa(14, 3, 1879, "Albert Eistein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");

    // Inicializa onde cada Professor Trabalha
    Simao.setUniversidade(&UTFPR);
    Simao.setDepartamento(&DAINF);

    Eistein.setUniversidade(&Princeton);
    Eistein.setDepartamento(&FisicaPrinceton);

    Newton.setUniversidade(&Cambridge);
    Newton.setDepartamento(&MatematicaCambridge);
}

void Principal::InicializaDepartamentos() {
    // Inicializa os departamentos
    DAINF.setNome("DAINF - Departamento academico de informatica");
    UTFPR.setDepartamento(&DAINF);
    DAINF.setUniversidade(&UTFPR);

    DAELN.setNome("DAELN - Departamento academico de eletronica");
    UTFPR.setDepartamento(&DAELN);
    DAELN.setUniversidade(&UTFPR);

    DAMAT.setNome("DAMAT - Departamento academico de matematica");
    UTFPR.setDepartamento(&DAMAT);
    DAMAT.setUniversidade(&UTFPR);

    FisicaPrinceton.setNome("Fisica");
    Princeton.setDepartamento(&FisicaPrinceton);
    FisicaPrinceton.setUniversidade(&Princeton);

    MatematicaCambridge.setNome("Matematica");
    Cambridge.setDepartamento(&MatematicaCambridge);
    MatematicaCambridge.setUniversidade(&Cambridge);
}

void Principal::InicializaAlunos() {
    Lara.inicializa(26,11,1998,"Lara Palharini");
    Matheus.inicializa(17,05,1999, "Matheus Burda");
    CarlWheezer.inicializa(20,07,2002, "Carl Wheezer");
}

void Principal::InicializaDisciplinas() {
    TecProg.setNome("Tecnicas de Programação");
    TecProg.setDepartamento(&DAINF);

    TecProg.incluirAluno(&Matheus);
    TecProg.incluirAluno(&CarlWheezer);

    Ed1.setNome("Estrutura de Dados 1");
    Ed1.setDepartamento(&DAINF);
    Ed1.incluirAluno(&CarlWheezer);

    Calculo_1.setNome("Calculo Diferencial e Integral 1");
    Calculo_1.setDepartamento(&DAMAT);
    Calculo_1.incluirAluno(&CarlWheezer);
    Calculo_1.incluirAluno(&Matheus);

    GAAL.setNome("Geometria Analitica e Algebra Linear");
    GAAL.setDepartamento(&DAMAT);
    GAAL.incluirAluno(&CarlWheezer);
    GAAL.incluirAluno(&Lara);
    GAAL.incluirAluno(&Matheus);
}

void Principal::Executar() {
    CarlWheezer.calcPrintIdade(dataAtual.dia, dataAtual.mes, dataAtual.ano);
    Lara.calcPrintIdade(dataAtual.dia, dataAtual.mes, dataAtual.ano);
    Matheus.calcPrintIdade(dataAtual.dia, dataAtual.mes, dataAtual.ano);

    cout << "--------------------------------------" << endl;
    Simao.imprimeOndeTrabalha();
    Eistein.imprimeOndeTrabalha();
    Newton.imprimeOndeTrabalha();

    cout << "--------------------------------------" << endl;
    Simao.imprimeQualDepartamentoTrabalha();
    Eistein.imprimeQualDepartamentoTrabalha();
    Newton.imprimeQualDepartamentoTrabalha();

    cout << "--------------------------------------" << endl;
    UTFPR.imprimeDepartamentos();
    cout << "--------------------------------------" << endl;
    Princeton.imprimeDepartamentos();
    cout << "--------------------------------------" << endl;
    Cambridge.imprimeDepartamentos();

    cout << "--------------------------------------" << endl;
    DAINF.imprimeListaDisciplinas();
    cout << "--------------------------------------" << endl;
    DAMAT.imprimeListaDisciplinas();
    cout << "--------------------------------------" << endl;
    Calculo_1.listeAlunos();
    TecProg.listeAlunos();
    GAAL.listeAlunos2();
    Ed1.listeAlunos2();
    cout << "--------------------------------------" << endl;

}