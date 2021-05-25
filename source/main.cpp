#include <stdio.h>

#include "Pessoa.hpp"

int main() {
    Pessoa Eistein(14, 03, 1879, "Eistein");
    Pessoa Newton(4, 1, 1643, "Newton");

    Eistein.calcIdade(18, 05, 2021);
    Newton.calcIdade(18, 05, 2021);

    return 0;
}