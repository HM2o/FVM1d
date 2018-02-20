/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Problem.h
 * Author: h2mo
 *
 * Created on February 20, 2018, 12:51 PM
 */

#ifndef PROBLEM_H
#define PROBLEM_H

#include <iostream>

class Problem {
public:
    Problem() {}
    Problem(const Problem& orig) {}
    virtual ~Problem() {}

    static const double       X_0 = 0.5;
    static const double       X_1 = 1.5;
    static const unsigned int N_E = 200;
    
}; 

#define LOG(x) std::cout << #x << " : " << x << std::endl;

#endif /* PROBLEM_H */

