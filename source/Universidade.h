#pragma once
#include "Departamento.h"

class Universidade {
   private:
    char nome[100];

    Departamento depart;

   public:
    Universidade(char* n = (char*)"");
    ~Universidade();

    void setNome(char* n);
    char* getNome();
};
