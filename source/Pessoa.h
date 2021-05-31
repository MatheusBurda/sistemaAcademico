#include "Departamento.h"
#include "Universidade.h"
#include "stdafx.h"

class Pessoa {
   private:
    int idadeP;
    char nomeP[30];

    Data dataNasc;
    Universidade* pUnivFiliado;
    Departamento* pDepartFiliado;

   public:
    Pessoa(int diaNasc, int mesNasc, int anoNasc, char* nome = (char*)"");
    Pessoa();

    void inicializa(int diaNasc, int mesNasc, int anoNasc, char* nome = (char*)"");
    void calcIdade(int diaAtual, int mesAtual, int anoAtual);
    void calcPrintIdade(int diaAtual, int mesAtual, int anoAtual);
    int getIdade();
    void imprimeIdade();

    void setUniversidade(Universidade* pUni);
    void imprimeOndeTrabalha();

    void setDepartamento(Departamento* pDepart);
    void imprimeQualDepartamentoTrabalha();
};
