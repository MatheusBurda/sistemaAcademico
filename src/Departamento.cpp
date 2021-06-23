#include "Departamento.h"

#include "Disciplina.h"
#include "ListaDisciplinas.h"
#include "Universidade.h"

Departamento::Departamento(const char* n) {
    setNome(n);
    pUniversidade = NULL;
    pListaDisciplinasDepart = new ListaDisciplinas();
}

Departamento::~Departamento() {
    pUniversidade = NULL;
    if (pListaDisciplinasDepart != NULL)
        delete (pListaDisciplinasDepart);
    pListaDisciplinasDepart = NULL;
}

void Departamento::setNome(const char* n) {
    strcpy(nome, n);
}

char* Departamento::getNome() {
    return nome;
}

void Departamento::setUniversidade(Universidade* pu) {
    pUniversidade = pu;
}

Universidade* Departamento::getUniversidade() {
    return pUniversidade;
}

void Departamento::novaDisciplina(Disciplina* pDiscip) {
    pListaDisciplinasDepart->novaDisciplina(pDiscip);
}

void Departamento::imprimeListaDisciplinas() {
    cout << "Disciplinas do departamento " << nome << endl;

    pListaDisciplinasDepart->imprimeListaDisciplinas();
}
