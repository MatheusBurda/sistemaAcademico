#include "Pessoa.h"
#include "Universidade.h"

class Principal {
   private:
    Pessoa Simao;
    Pessoa Eistein;
    Pessoa Newton;

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    int diaAtual;
    int mesAtual;
    int anoAtual;

   public:
    Principal();
    ~Principal();
    void Executar();
};