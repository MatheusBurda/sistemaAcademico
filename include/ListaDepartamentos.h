#pragma once

#include "Departamento.h"
#include "ElDepartamento.h"
#include "stdafx.h"

class ListaDepartamentos {
private:
    int nDepartamentos;

    ElDepartamento* pPrimDepartamento;
    ElDepartamento* pDepartamentoAtual;

public:
    ListaDepartamentos();
    ~ListaDepartamentos();

    void incluirDepartamento(Departamento* pd);
    void imprimeListaDepartamentos();
    int getQDepartamentos();

    Departamento* localizarDepartamento(char* nome);
};
