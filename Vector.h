/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vector.h
 * Author: atlas
 *
 * Created on 20 February 2018, 20:39
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <cassert>
#include <cmath>


class Vector {
public:
   
    Vector() : _x(0.0) {}
    
    Vector(double x) : _x(x) {
      assert(_x != 0.0); 
      this->normalize();     
    }
   
   ~Vector() {}
   
    inline double X() const {return _x;}
    inline double& X() {return _x;}    

    inline void normalize() { _x=_x/std::abs(_x); }
   
private:
    double _x;
};

#endif /* VECTOR_H */

