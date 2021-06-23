#pragma once 

#include "Departamento.h"
#include "stdafx.h"


class ElDepartamento
{
private:
    Departamento* pDepartamento;

    ElDepartamento* pProxDepartamento;
    ElDepartamento* pDepartamentoAnterior;
public:
    ElDepartamento();
    ~ElDepartamento();

// Sets e gets dos atributos da classe
    void setDepartamento(Departamento* pDep);
    Departamento* getDepartamento();
    void setProxDepartamento(ElDepartamento* pDep);
    ElDepartamento* getProxDepartamento();    
    void setDepartamentoAnterior(ElDepartamento* pDep);
    ElDepartamento* getDepartamentoAnterior();

// Metodos que chamam os Metodos da classe Departamento
    char* getNome();
};
