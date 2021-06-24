#pragma once

#include "Departamento.h"
#include "ListaDepartamentos.h"
#include "stdafx.h"

class Universidade {
private:
    char nome[STR_LEN];

    ListaDepartamentos* listaDepartamentosUniv;

public:
    Universidade(const char* n = "");
    ~Universidade();

    void setNome(const char* n);
    char* getNome();

    void setDepartamento(Departamento* pdep);
    void imprimeDepartamentos();
};
