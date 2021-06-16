#include "Departamento.h"
#include "Pessoa.h"
#include "Universidade.h"
#include "stdafx.h"

class Professor : public Pessoa {
private:
    Universidade* pUnivFiliado;
    Departamento* pDepartFiliado;

public:
    Professor(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");
    Professor();
    ~Professor();

    void setUniversidade(Universidade* pUni);
    void imprimeOndeTrabalha();

    void setDepartamento(Departamento* pDepart);
    void imprimeQualDepartamentoTrabalha();
};
