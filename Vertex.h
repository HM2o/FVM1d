/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vertex.h
 * Author: h2mo
 *
 * Created on February 20, 2018, 12:56 PM
 */

#ifndef VERTEX_H
#define VERTEX_H

#include <ostream>

#include "refCount.h"


class Vertex : public refCount<Vertex> {
public:
    Vertex() : _x(0.0) , refCount() {}
    Vertex(const Vertex& orig) : _x(orig.X()) {this->ID()=orig.ID(); this->operator --();}
    Vertex(double x) : _x(x)  {}    
   ~Vertex() {}
    
    inline double X() const  {return _x;}
    inline double & X() {return _x;} 
    
    friend std::ostream& operator<< (std::ostream& os, const Vertex& v) {
        os << "V: " << v.ID() << ": " << v.X() << '\n';
        return os;
    }
     
private:
    double _x;
};




#endif /* VERTEX_H */

