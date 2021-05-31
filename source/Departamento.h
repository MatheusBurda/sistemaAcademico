#pragma once

class Departamento {
   private:
    char nome[30];

   public:
    Departamento(char* n = (char*)"");
    ~Departamento();

    void setNome(char* n);
    char* getNome();
};
