#include "Pessoa.h"
#include "Universidade.h"
#include "stdafx.h"

class Aluno : public Pessoa {
private:
    int RA;

public:
    Aluno(int diaNasc, int mesNasc, int anoNasc, const char* nome = "");
    Aluno();
    ~Aluno();
    void setRA(int x);
    int getRA();
};
