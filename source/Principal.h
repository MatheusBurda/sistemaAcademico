#include "Departamento.h"
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

    Data dataAtual;

public:
    Principal();
    ~Principal();
    void Executar();
};