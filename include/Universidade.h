#pragma once

#include "Departamento.h"
#include "ListaDepartamentos.h"


class Universidade {
private:
    char nome[100];
    
    ListaDepartamentos* listaDepartamentosUniv;

public:
    Universidade(const char* n = "");
    ~Universidade();

    void setNome(const char* n);
    char* getNome();

    void setDepartamento(Departamento* pdep);
    void imprimeDepartamentos();
};
