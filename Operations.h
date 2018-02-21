/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Operations.h
 * Author: h2mo
 *
 * Created on February 21, 2018, 11:55 AM
 */

#ifndef OPERATIONS_H
#define OPERATIONS_H

template <typename T> class fvMatrix;

template <typename Field>
fvMatrix<Field> d_dt(const Field&);

template <typename Field>
fvMatrix<Field> d_dx(const Field&);

#endif /* OPERATIONS_H */

// d_dt(q)+d_dx(F_q)=0;