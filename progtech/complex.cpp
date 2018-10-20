//
//  complex.cpp
//  progtech
//
//  Created by David Nurdinov on 14/03/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include "complex.h"
void complex::multiple(float k){
    this->r=this->r*k;
    this->i=this->i*k;
}
complex complex::sum(complex add){
    float newR=this->r+add.r;
    float newI=this->i+add.i;
    complex newC(newR, newI);
    return newC;
}
void complex::print(){
    cout<<this->r<<" "<<this->i<<endl;
}
complex::~complex(){
    cout<<"DESTRUCTOR"<<endl;
}
complex::complex(float r, float i){
    this->i=i;
    this->r=r;
}
complex::complex(){
    r=0;
    i=0;
    cout<<"CONSTRUCT"<<endl;
}
