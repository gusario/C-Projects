//
//  cut.h
//  matrcut
//
//  Created by David Nurdinov on 26/05/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#ifndef cut_h
#define cut_h
//
//  matrix.h
//  Matrix
//
//  Created by David Nurdinov on 04/04/2018.
//  Copyright © 2018 David Nurdinov. All rights reserved.
//

#ifndef matrix_h
#define matrix_h
#include <iostream>
using namespace std;
class cMatrix
{
    friend ostream &operator<<(ostream & out, const cMatrix & matrix);
private:
    int height;
    double *values;
public:
    cMatrix();
    cMatrix(int h, int w);
    ~cMatrix();
    void print();
    
};


#endif /* cut_h */
