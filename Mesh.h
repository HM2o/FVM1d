/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mesh.h
 * Author: h2mo
 *
 * Created on February 20, 2018, 12:53 PM
 */

#ifndef MESH_H
#define MESH_H



#include "Element.h"
#include "Problem.h"
#include <vector>


class Mesh : public refCount<Mesh> {
public:
    Mesh() : refCount() {
    //    Elements.reserve(Problem::N_E);
    setMesh();
    }
        
    ~Mesh() {

    }
   
    Element& operator[](int i) {
        return Elements[i];
    }
 
    int size() { return Elements.size();}
    
    friend std::ostream& operator<< (std::ostream& os, Mesh& mesh) {
        unsigned int size = mesh.size();
        os << "size = " << size << '\n';
        for (int i = 0; i < size; i++) 
            os << mesh[i]; 
        LOG(mesh.size());
        return os; 
    }
   
    
    void setMesh() {
        
        //Elements.reserve(Problem::N_E);        
        
        double DX = (Problem::X_1-Problem::X_0)/Problem::N_E;
        /*Vertices along the Path*/
        for (int i = 0; i <= Problem::N_E ; i++) {
        Vertex v(Problem::X_0+    i*DX);
        LOG(v.ID());
        
        Vertices.push_back(v);        
        LOG(Vertices[i].ID());
        }    
        /*Elements*/
        for (int i = 0; i < Vertices.size()-1; i++) {
        Element e;
        e.mV(Vertices[i],Vertices[i+1]);
        Elements.push_back(e);
        }


    }
    
private:    
    
    std::vector<Element> Elements;
    std::vector<Vertex>  Vertices;
};

#endif /* MESH_H */

