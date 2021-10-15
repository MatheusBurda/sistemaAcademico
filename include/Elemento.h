#pragma once

#include "stdafx.h"

template <class TIPO>
class Elemento {
private:
    Elemento<TIPO>* pProximo;
    Elemento<TIPO>* pAnterior;
    TIPO* pInfo;

public:
    Elemento();
    ~Elemento();

    void setProximo(Elemento<TIPO>* pProximo);
    Elemento<TIPO>* getProximo();

    void setAnterior(Elemento<TIPO>* pAnterior);
    Elemento<TIPO>* getAnterior();

    void setInfo(TIPO* pi);
    TIPO* getInfo();
};

template <class TIPO>
Elemento<TIPO>::Elemento() {
    pProximo = NULL;
    pAnterior = NULL;
    pInfo = NULL;
}

template <class TIPO>
Elemento<TIPO>::~Elemento() {
    pProximo = NULL;
    pAnterior = NULL;
    pInfo = NULL;
}

template <class TIPO>
void Elemento<TIPO>::setProximo(Elemento<TIPO>* pProximo) {
    this->pProximo = pProximo;
}

template <class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getProximo() {
    return pProximo;
}

template <class TIPO>
void Elemento<TIPO>::setAnterior(Elemento<TIPO>* pAnterior) {
    this->pAnterior = pAnterior;
}

template <class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getAnterior() {
    return pAnterior;
}

template <class TIPO>
void Elemento<TIPO>::setInfo(TIPO* pInfo) {
    this->pInfo = pInfo;
}

template <class TIPO>
TIPO* Elemento<TIPO>::getInfo() {
    return pInfo;
}
