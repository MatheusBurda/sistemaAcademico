#include "Departamento.h"
#include "Pessoa.h"
#include "Universidade.h"
#include "stdafx.h"

class Principal {
   private:
    Pessoa Simao;
    Pessoa Eistein;
    Pessoa Newton;

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