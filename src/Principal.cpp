#include "Principal.h"

#include <time.h>

Principal::Principal() {
    Inicializa();

    /*
    Executar(); */

    MenuPrincipal();
}

Principal::~Principal() {
}

void Principal::Inicializa() {
    InicializaData();
    InicializaUniversidades();
    InicializaDepartamentos();
    /* InicializaProfessores();
    InicializaAlunos();*/
    InicializaDisciplinas(); 
}

// Inicializa a data atual usando a time.h
void Principal::InicializaData() {
    struct tm* local;

    time_t segundos;
    time(&segundos);

    local = localtime(&segundos);

    dataAtual.dia = local->tm_mday;
    dataAtual.mes = local->tm_mon + 1;
    dataAtual.ano = local->tm_year + 1900;
}

// Inicializa as Universidades
void Principal::InicializaUniversidades() {
    UTFPR.setNome("UTFPR");
}

void Principal::InicializaProfessores() {
    // Inicializa onde cada Professor Trabalha
    Simao.inicializa(17, 11, 1982, "Jean Simao");
    Simao.setUniversidade(&UTFPR);
    Simao.setDepartamento(&DAINF);
}

void Principal::InicializaDepartamentos() {
    // Inicializa os departamentos
    DAINF.setNome("DAINF");
    DAINF.setUniversidade(&UTFPR);
    UTFPR.setDepartamento(&DAINF);
    listaOBJDepartamentos.incluirDepartamento(&DAINF);

    DAELN.setNome("DAELN");
    DAELN.setUniversidade(&UTFPR);
    UTFPR.setDepartamento(&DAELN);
    listaOBJDepartamentos.incluirDepartamento(&DAELN);

    DAMAT.setNome("DAMAT");
    DAMAT.setUniversidade(&UTFPR);
    UTFPR.setDepartamento(&DAMAT);
    listaOBJDepartamentos.incluirDepartamento(&DAMAT);
}

void Principal::InicializaAlunos() {
    Lara.inicializa(26, 11, 1998, "Lara Palharini");
    Matheus.inicializa(17, 05, 1999, "Matheus Burda");
    CarlWheezer.inicializa(20, 07, 2002, "Carl Wheezer");
}

void Principal::InicializaDisciplinas() {
    TecProg.setNome("Tecnicas de Programação");
    TecProg.setDepartamento(&DAINF);
    TecProg.incluirAluno(&Matheus);
    TecProg.incluirAluno(&CarlWheezer);

    listaOBJDisciplinas.novaDisciplina(&TecProg);
    DAINF.novaDisciplina(&TecProg);

    Ed1.setNome("Estrutura de Dados 1");
    Ed1.setDepartamento(&DAINF);
    Ed1.incluirAluno(&CarlWheezer);
    listaOBJDisciplinas.novaDisciplina(&Ed1);
    DAINF.novaDisciplina(&Ed1);

    Calculo_1.setNome("Calculo Diferencial e Integral 1");
    Calculo_1.setDepartamento(&DAMAT);
    Calculo_1.incluirAluno(&CarlWheezer);
    Calculo_1.incluirAluno(&Matheus);
    listaOBJDisciplinas.novaDisciplina(&Calculo_1);
    DAMAT.novaDisciplina(&Calculo_1);

    GAAL.setNome("Geometria Analitica e Algebra Linear");
    GAAL.setDepartamento(&DAMAT);
    GAAL.incluirAluno(&CarlWheezer);
    GAAL.incluirAluno(&Lara);
    GAAL.incluirAluno(&Matheus);
    listaOBJDisciplinas.novaDisciplina(&GAAL);
    DAINF.novaDisciplina(&GAAL);
}

void Principal::Executar() {
    CarlWheezer.calcPrintIdade(dataAtual.dia, dataAtual.mes, dataAtual.ano);
    Lara.calcPrintIdade(dataAtual.dia, dataAtual.mes, dataAtual.ano);
    Matheus.calcPrintIdade(dataAtual.dia, dataAtual.mes, dataAtual.ano);

    cout << "=======================================================" << endl;
    Simao.imprimeOndeTrabalha();

    cout << "=======================================================" << endl;
    Simao.imprimeQualDepartamentoTrabalha();
    cout << "=======================================================" << endl;
    UTFPR.imprimeDepartamentos();
    cout << "=======================================================" << endl;

    DAINF.imprimeListaDisciplinas();
    cout << "=======================================================" << endl;
    DAMAT.imprimeListaDisciplinas();
    cout << "=======================================================" << endl;
    Calculo_1.listeAlunos();
    TecProg.listeAlunos();
    GAAL.listeAlunos2();
    Ed1.listeAlunos2();
    cout << "=======================================================" << endl;
}

void Principal::MenuPrincipal() {
    int op = -1;
    while (op != 3) {
        system("clear");
        cout << "========== Menu Principal ==========" << endl;
        cout << " 1 – Cadastrar. " << endl;
        cout << " 2 – Executar. " << endl;
        cout << " 3 – Sair. " << endl;
        cout << "===================================" << endl;
        cout << " Informe sua opção: ";
        scanf("%d", &op);

        switch (op) {
        case 1:
            MenuCadastro();
            break;
        case 2:
            MenuExec();
            break;
        case 3:
            cout << "=============== FIM ===============" << endl;
            break;
        default:
            cout << "Opção Invalida!" << endl;
            getchar();
            getchar();
            break;
        }
    }
}

void Principal::MenuCadastro() {
    int op = -1;
    while (op != 3) {
        system("clear");
        cout << "========== Menu Cadastro ==========" << endl;
        cout << " 1 – Cadastrar Disciplina." << endl;
        cout << " 2 – Cadastrar Departamentos." << endl;
        cout << " 3 – Voltar. " << endl;
        cout << "===================================" << endl;
        cout << " Informe sua opção: ";
        scanf("%d", &op);

        getchar();
        switch (op) {
        case 1: {
            CadDisciplina();
        } break;
        case 2: {
            CadDepartamento();
        } break;
        case 3: {
            cout << "=============== FIM ===============" << endl;
        } break;
        default: {
            cout << "Opção Inválida." << endl;
            getchar();
            getchar();
        }
        }
    }
}

void Principal::MenuExec() {
    int op = -1;
    while (op != 3) {
        system("clear");
        cout << "========== Menu Executar ==========" << endl;
        cout << " 1 – Listar Disciplinas. " << endl;
        cout << " 2 – Listar Departamentos." << endl;
        cout << " 3 – Voltar. " << endl;
        cout << "===================================" << endl;
        cout << " Informe sua opção: ";
        scanf("%d", &op);
        getchar();
        switch (op) {
        case 1: {
            listaOBJDisciplinas.imprimeListaDisciplinas();
            getchar();
        } break;
        case 2: {
            listaOBJDepartamentos.imprimeListaDepartamentos();
            getchar();
        } break;
        case 3: {
            cout << "=============== FIM ===============" << endl;
        } break;
        default: {
            cout << "Opção Inválida." << endl;
            getchar();
        }
        }
    }
}

void Principal::CadDisciplina() {
    int nAlunos;
    char nome[STR_LEN], nomeDepartamento[STR_LEN];
    Departamento* pDepartamento;
    Disciplina* pNewDisciplina;

    system("clear");

    cout << "===== Cadastro de Disciplinas =====" << endl;

    cout << "Cadastrar disciplina em qual Departamento? ";
    cin.get(nomeDepartamento, STR_LEN);
    getchar();

    pDepartamento = listaOBJDepartamentos.localizarDepartamento(nomeDepartamento);

    if (pDepartamento == NULL) {
        cout << "Departamento inexistente!" << endl;
        getchar();
        return;
    }

    cout << "Digite o nome da disciplina: ";
    cin.get(nome, STR_LEN);

    getchar();

    cout << "Digite a quantidade de alunos na Disciplina: ";
    cin >> nAlunos;
    getchar();

    pNewDisciplina = new Disciplina(nAlunos, nome);
    pNewDisciplina->setDepartamento(pDepartamento);

    listaOBJDisciplinas.novaDisciplina(pNewDisciplina);
    pDepartamento->novaDisciplina(pNewDisciplina);

    cout << "===================================" << endl;
    cout << nome << " criado com sucesso!" << endl;

    getchar();
}

void Principal::CadDepartamento() {
    Departamento* pNewDepartamento;
    char nome[STR_LEN];

    system("clear");

    cout << "====== Cadastro Departamentos =====" << endl;

    cout << "Nome do departamento: ";

    cin.get(nome, STR_LEN);

    pNewDepartamento = new Departamento(nome);
    pNewDepartamento->setUniversidade(&UTFPR);

    listaOBJDepartamentos.incluirDepartamento(pNewDepartamento);
    UTFPR.setDepartamento(pNewDepartamento);

    cout << "===================================" << endl;
    cout << nome << " criado com sucesso!" << endl;
    getchar();
}