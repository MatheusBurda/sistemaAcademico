#include "Principal.h"

#include <time.h>

Principal::Principal() {
    // Inicializa as Pessoas
    Simao.inicializa(3, 10, 1976, (char *)"Jean Simão");
    Eistein.inicializa(14, 3, 1879, (char *)"Albert Eistein");
    Newton.inicializa(4, 1, 1643, (char *)"Isaac Newton");

    // Inicializa as Universidades
    UTFPR.setNome((char *)"UTFPR");
    Princeton.setNome((char *)"Princeton");
    Cambridge.setNome((char *)"Cambrigde");

    // Inicializa onde cada pessoa Trabalha
    Simao.setUniversidade(&UTFPR);
    Eistein.setUniversidade(&Princeton);
    Newton.setUniversidade(&Cambridge);

    // Inicializa a data atual usando a time.h
    struct tm *local;

    time_t segundos;
    time(&segundos);

    local = localtime(&segundos);

    dataAtual.dia = local->tm_mday;
    dataAtual.mes = local->tm_mon + 1;
    dataAtual.ano = local->tm_year + 1900;

    // Chama a função principal Executar
    Executar();
}

Principal::~Principal() {
}

void Principal::Executar() {
    Simao.calcPrintIdade(dataAtual.dia, dataAtual.mes, dataAtual.ano);
    Eistein.calcPrintIdade(dataAtual.dia, dataAtual.mes, dataAtual.ano);
    Newton.calcPrintIdade(dataAtual.dia, dataAtual.mes, dataAtual.ano);

    Simao.imprimeOndeTrabalha();
    Eistein.imprimeOndeTrabalha();
    Newton.imprimeOndeTrabalha();
}