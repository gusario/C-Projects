//
//  complex.h
//  progtech
//
//  Created by David Nurdinov on 14/03/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#ifndef complex_h
#define complex_h
#include<iostream>
using namespace std;
class complex{
public:
    complex();
    complex(float r, float i);
    ~complex();
    float r;
    float i;
    complex sum(complex add);
    void print();
    void multiple(float k);
};
#endif /* complex_h */
