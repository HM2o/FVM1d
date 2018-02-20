/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   refCount.h
 * Author: h2mo
 *
 * Created on February 20, 2018, 1:04 PM
 */

#ifndef REFCOUNT_H
#define REFCOUNT_H

#include <iostream>

class Vertex;
class Element;
class Mesh;

template <typename TOPO>
class refCount {
public:
    refCount() : id_(i_) {i_++;}    
    ~refCount() {}    
    inline unsigned int ID() const {return id_;}
    inline unsigned int & ID() {return id_;}
    
    inline void operator--() {i_--;}
    inline void operator++() {i_++;}
    
private:
    static unsigned int i_;
    unsigned int id_;   
};

template class refCount<Vertex>;
template class refCount<Element>;
template class refCount<Mesh>;

#endif /* REFCOUNT_H */

