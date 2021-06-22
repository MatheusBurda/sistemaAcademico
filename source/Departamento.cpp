#include "Departamento.h"

#include "Disciplina.h"
#include "Universidade.h"

Departamento::Departamento(const char* n) {
    setNome(n);
    pUniversidade = NULL;
    pDisciplinaAtual = NULL;
    pPrimDisciplina = NULL;
    id = -1;
}

Departamento::~Departamento() {
    pUniversidade = NULL;
    pDisciplinaAtual = NULL;
    pPrimDisciplina = NULL;
}

void Departamento::setNome(const char* n) {
    strcpy(nome, n);
}

char* Departamento::getNome() {
    return nome;
}

void Departamento::setId(int x) {
    id = x;
}

int Departamento::getId() {
    return id;
}

void Departamento::setUniversidade(Universidade* pu) {
    pUniversidade = pu;
}

void Departamento::novaDisciplina(Disciplina* pDiscip) {
    if (pPrimDisciplina == NULL) {
        pPrimDisciplina = pDiscip;
        pDisciplinaAtual = pDiscip;
    } else {
        pDisciplinaAtual->setProxDisciplina(pDiscip);
        pDisciplinaAtual = pDiscip;
    }
}

void Departamento::imprimeListaDisciplinas() {
    Disciplina* pDisciplina;

    pDisciplina = pPrimDisciplina;
    cout << "Disciplinas do departamento " << nome << endl;
    
    for (int i = 1; pDisciplina != NULL; i++) {
        cout << i << " - " << pDisciplina->getNome() << endl;
        pDisciplina = pDisciplina->getProxDisciplina();
    }
}
