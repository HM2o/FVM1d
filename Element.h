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
#include "Vector.h"
#include <cmath>


class Element : public refCount<Element> {
public:
    Element() : refCount() {}
    Element(Vertex A,  Vertex B) : refCount() { this->mV(A,B);    
    }
    
    void mV(Vertex& A,  Vertex& B) { 
        _V[0]=A;                   _V[1]=B;
        _N[0]=Vector(A.X()-B.X()); _N[1]=Vector(B.X()-A.X());
    }
   
    Vertex* mV()     {return _V;}
    Vector* normal() {return _N;}
    
    inline double A() const {return std::abs(_V[0].X()-_V[1].X());} /* -> Added Area() */
    
    ~Element() {}
        
    friend std::ostream& operator<< (std::ostream& os, Element& e) {
        os << "E: " << e.ID() << ": [" << e.mV()[0].ID() << ": " << e.mV()[0].X() << " ... " << e.mV()[1].ID() << ": " << e.mV()[1].X() << "]\n"; 
        return os;
    }

private:
    Vertex _V[2];
    Vector _N[2];
};



#endif /* ELEMENT_H */

