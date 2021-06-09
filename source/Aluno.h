#include "Pessoa.h"
#include "Universidade.h"
#include "stdafx.h"

class Aluno : public Pessoa {
private:
    int RA;

public:
    Aluno(int diaNasc, int mesNasc, int anoNasc, char* nome = (char*)"");
    Aluno();
    ~Aluno();
    void setRA(int x);
    int getRA();
};
