#pragma once

class Universidade;

class Departamento {
private:
    char nome[100];
    int id;

    Universidade* pUniversidade;

public:
    Departamento(const char* n = "");
    ~Departamento();

    void setNome(const char* n);
    char* getNome();

    void setId(int x);
    int getId();

    void setUniversidade(Universidade* pu);
};
