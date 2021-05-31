#include "Principal.h"

#include <time.h>

#include "stdafx.h"

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

    diaAtual = local->tm_mday;
    mesAtual = local->tm_mon + 1;
    anoAtual = local->tm_year + 1900;

    // Chama a função principal Executar
    Executar();
}

Principal::~Principal() {
}

void Principal::Executar() {
    Simao.calcPrintIdade(diaAtual, mesAtual, anoAtual);
    Eistein.calcPrintIdade(diaAtual, mesAtual, anoAtual);
    Newton.calcPrintIdade(diaAtual, mesAtual, anoAtual);

    Simao.imprimeOndeTrabalha();
    Eistein.imprimeOndeTrabalha();
    Newton.imprimeOndeTrabalha();
}