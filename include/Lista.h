#pragma once

#include "Elemento.h"
#include "stdafx.h"

template <class TIPO>
class Lista {
private:
    Elemento<TIPO>* pPrimeiro;
    Elemento<TIPO>* pAtual;
    int tamanho;

public:
    Lista();
    ~Lista();

    void limpar();
    bool incluaElemento(Elemento<TIPO>* pElemento);
    bool incluaInfo(TIPO* pInfo);
    int getTam() { return tamanho; }

    Elemento<TIPO>* getpPrimeiro() { return pPrimeiro; }
    Elemento<TIPO>* getpAtual() { return pAtual; }
};

template <class TIPO>
Lista<TIPO>::Lista() {
    limpar();
}

template <class TIPO>
Lista<TIPO>::~Lista() {
    limpar();
}

template <class TIPO>
void Lista<TIPO>::limpar() {
    Elemento<TIPO>* paux1;
    Elemento<TIPO>* paux2;

    paux1 = pPrimeiro;
    paux2 = paux1;

    while (paux1 != NULL) {
        paux2 = paux1->getProximo();
        delete (paux1);
        paux1 = paux2;
    }

    pPrimeiro = NULL;
    pAtual = NULL;
    tamanho = 0;
}

template <class TIPO>
bool Lista<TIPO>::incluaElemento(Elemento<TIPO>* pElemento) {
    if (pElemento != NULL) {
        if (pPrimeiro == NULL) {
            pPrimeiro = pElemento;
            pAtual = pElemento;
        } else {
            pAtual->setProximo(pElemento);
            pElemento->setAnterior(pAtual);
            pAtual = pElemento;
        }
        tamanho++;
        return true;
    } else {
        cout << "ERROR: Pronteiro apontando para NULL. Insersão nao sucedida." << endl;
        return false;
    }
}

template <class TIPO>
bool Lista<TIPO>::incluaInfo(TIPO* pInfo) {
    if (pInfo != NULL) {
        Elemento<TIPO>* pElemento = NULL;
        pElemento = new Elemento<TIPO>();
        pElemento->setInfo(pInfo);
        incluaElemento(pElemento);

        return true;
    } else {
        cout << "ERROR: on Lista<TIPO>::incluaInfo pInfo pointing to NULL" << endl;
        return false;
    }
}
