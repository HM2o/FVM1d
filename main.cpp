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

int main(int argc, char** argv) {

    Mesh m;    

    for (int i = 0; i < m.size(); i++) {
         cout << m[i].normal()[0].X() << " : " << m[i].normal()[1].X() << '\n';
    }

    
    
    return 0;
}

