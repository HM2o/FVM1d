/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: h2mo
 *
 * Created on February 20, 2018, 12:01 PM
 */

#include <iostream>

#include "Vertex.h"
#include "Element.h"
#include "Mesh.h"

using namespace std;

/*
 * 
 */ 


int main(int argc, char** argv) {

    Vertex p, q, r, s;
    LOG(p);
    LOG(q);
    LOG(r);
    LOG(s);

    std::vector<Vertex> v;
    v.reserve(4);
    
    v.push_back(p);
    v.push_back(q);
  //  v.push_back(r);
  //  v.push_back(s);
    
    LOG(v[0]);
    LOG(v[1]);
    LOG(v[2]);
    LOG(v[3]);
    Vertex z,w;
//    Mesh m;
    LOG(z);
    LOG(w);
//    cout << m;
          

    
    return 0;
}

