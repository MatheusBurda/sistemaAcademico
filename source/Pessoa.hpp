#include <stdio.h>

class Pessoa {
   private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char* nomeP;

   public:
    Pessoa(int diaNasc, int mesNasc, int anoNasc, char* nome);
    void calcIdade(int diaAtual, int mesAtual, int anoAtual);
    int getIdade();
    void imprimeIdade();
};
