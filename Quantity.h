/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Quantity.h
 * Author: atlas
 *
 * Created on 20 February 2018, 22:46
 */

#ifndef QUANTITY_H
#define QUANTITY_H

template <typename TOPO>
class Quantity {
public:
    Quantity() {}
    Quantity(const Quantity& orig) {}
    virtual ~Quantity() {}
private:
    TOPO _quantity;

};

#endif /* QUANTITY_H */

