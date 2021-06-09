#include "Departamento.h"
#include "Pessoa.h"
#include "Universidade.h"
#include "stdafx.h"

class Professor : public Pessoa {
private:
    Universidade* pUnivFiliado;
    Departamento* pDepartFiliado;

public:
    Professor(int diaNasc, int mesNasc, int anoNasc, char* nome = (char*)"");
    Professor();
    ~Professor();

    void setUniversidade(Universidade* pUni);
    void imprimeOndeTrabalha();

    void setDepartamento(Departamento* pDepart);
    void imprimeQualDepartamentoTrabalha();
};
