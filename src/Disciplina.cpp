#include "Disciplina.h"

Disciplina::Disciplina(int qAlunos, const char* n) :
listaAlunosMatriculados(qAlunos) {
    pDepartamento = NULL;
    strcpy(nome, n);
}

Disciplina::~Disciplina() {
    pDepartamento = NULL;
}

void Disciplina::setNome(const char* n) {
    strcpy(nome, n);
}

char* Disciplina::getNome() {
    return nome;
}

void Disciplina::setDepartamento(Departamento* pDpto) {
    pDepartamento = pDpto;

    pDpto->novaDisciplina(this);
}

Departamento* Disciplina::getDepartamento() {
    return pDepartamento;
}

void Disciplina::incluirAluno(Aluno* pa) {
    listaAlunosMatriculados.incluirAluno(pa);
}

void Disciplina::listeAlunos() {
    cout << "Lista de alunos da disciplina " << nome << ":" << endl;
    listaAlunosMatriculados.listeAlunos();
}

void Disciplina::listeAlunos2() {
    cout << "Lista de alunos da disciplina " << nome << ":" << endl;
    listaAlunosMatriculados.listeAlunos2();
}

void Disciplina::setMaxAlunos(int qAlunos) {
    listaAlunosMatriculados.setMaxAlunos(qAlunos);
}
