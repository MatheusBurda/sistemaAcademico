#pragma once
#include "Departamento.h"

class Universidade {
   private:
    char nome[100];

    int qDepartamentos;
    Departamento* pDptos[50];

   public:
    Universidade(char* n = (char*)"");
    ~Universidade();

    void setNome(char* n);
    char* getNome();

    void setDepartamento(Departamento* pdep);
    void imprimeDepartamentos();

    int getQtdDptos();
};
