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
    int width;
    int height;
    double **values;
    public:
    cMatrix();
    cMatrix(int h, int w);
    cMatrix(const cMatrix& other);
    ~cMatrix();
    void print();
    cMatrix operator +(const cMatrix& other);
    void operator *=(double k);
    cMatrix operator*(double k);
    void operator =(const cMatrix& other);
    inline int getHeight(){return height;}
    inline int getWidth(){return width;}
    double getElement(int h, int w);
    //TODO:
    void setElement(int h, int w, double value);//DONE
    void operator *=(const cMatrix& other); //DONE
    cMatrix operator*(const cMatrix &other);//DONE
    bool operator ==(const cMatrix& other);//DONE
    cMatrix transpose();//DONE
    double getChet();
    //EXTRA
    double determinant();//Almost DONE
    cMatrix inverse();//NOT DONE
};

#endif /* matrix_h */
