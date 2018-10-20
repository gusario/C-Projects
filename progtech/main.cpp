//
//  main.cpp
//  progtech
//
//  Created by David Nurdinov on 14/03/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#include <iostream>
#include "complex.h"
using namespace std;


int main() {
    complex newC;
    complex print;
    newC.print();
    newC.i=1;
    newC.r=2;
    newC.print();
    complex secondC(2,3);
    secondC.print();
    complex sumC=secondC.sum(secondC);
    sumC.print();
    secondC.multiple(3.14);
    secondC.print();
    complex *pointC;
    pointC=new complex(5, 6);
    pointC->print();
    delete (pointC);
    
    
    
    
    
    
    
    
    
    
    return 0;
}
