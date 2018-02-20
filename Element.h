/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Element.h
 * Author: h2mo
 *
 * Created on February 20, 2018, 12:55 PM
 */

#ifndef ELEMENT_H
#define ELEMENT_H

#include "Vertex.h"


class Element : public refCount<Element> {
public:
    Element() : refCount() {}
//    Element(Element& orig) : refCount() {_V[0]=orig.mV()[0]; _V[1]=orig.mV()[1];}
    Element( Vertex A,  Vertex B) : refCount() { this->mV(A,B); }
    
    void mV( Vertex& A,  Vertex& B) { _V[0]=A; _V[1]=B; }
//    void mV( Vertex A,  Vertex B) { _V[0]=A; _V[1]=B; } -> Wrong member function leads to ambiguous calls

    
    ~Element() {}
    
    Vertex* mV() {return _V;}
    
    friend std::ostream& operator<< (std::ostream& os, Element& e) {
        os << "E: " << e.ID() << ": [" << e.mV()[0].ID() << ": " << e.mV()[0].X() << " ... " << e.mV()[1].ID() << ": " << e.mV()[1].X() << "]\n"; 
        return os;
    }
private:
    Vertex _V[2];
};



#endif /* ELEMENT_H */

