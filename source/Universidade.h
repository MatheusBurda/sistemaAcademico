#pragma once

#include "Departamento.h"
#include <vector>

using namespace std;

class Universidade {
private:
    char nome[100];

    int qDepartamentos;
    vector<Departamento*> pDptos;

public:
    Universidade(const char* n = "");
    ~Universidade();

    void setNome(const char* n);
    char* getNome();

    void setDepartamento(Departamento* pdep);
    void imprimeDepartamentos();
};
