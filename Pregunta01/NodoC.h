/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoC.h
 * Author: alulab14
 *
 * Created on 11 de diciembre de 2018, 08:13 AM
 */

#ifndef NODOC_H
#define NODOC_H
#include "Conductor.h"

class ListaConductores;

class NodoC {
private:
    Conductor conductor;
    NodoC* sgt;
    NodoC* ant;
public:
    NodoC();
    virtual ~NodoC();
    friend class ListaConductores;
};

#endif /* NODOC_H */
