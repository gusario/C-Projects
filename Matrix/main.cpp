#include <iostream>
#include "matrix.h"

using namespace std;

int main(){
    cMatrix A(4,4);
    //cMatrix B(5,5);
    cout<<"Matrix A:\n";
    A.print();
    cout<<endl;
   // cout<<"Matrix B:\n";
  //  B.print();
    cout<<endl;
    
    /* cout<<"Matrix C = A+B:\n";         //СЛОЖЕНИЕ МАТРИЦ
    cMatrix C;
    C = A+B;
    C.print();*/
  
 
  /*   cout<<"Matrix D = A*B:\n";
    cMatrix D(A.getHeight(), B.getWidth());       //УМНОЖЕНИЕ МАТРИЦ
    D=A*B;
    D.print();
    cout<<endl;*/
   
  //  A*=B;                                  //VOID УМНОЖЕНИЕ МАТРИЦ С ПРИСВАИВАНИЕМ К ПЕРВОЙ
 //   A.print();
 
    
    /*cout<<"Multiple matrix C x3:\n";    //VOID УМНОЖЕНИЕ МАТРИЦЫ НА ЧИСЛО
    C*=3;
    C.print();*/
    
    /*cout<<"Matrix A = C*2:\n";            //УМНОЖЕНИЕ МАТРИЦЫ НА ЧИСЛО
    A = C*2;
    A.print(); cout<<endl;*/
   // cout<<A.getWidth()<<" "<< A.getHeight()<<endl<<endl;  //ВЫВОД ДЛИННЫ И ШИРИНЫ МАТРИЦЫ
  
    /* cout<<"Print matrix A through ostream:\n"; //ДРЖЕСТВЕННЫЙ МЕТОД
    cout<<A<<"\n\n"<<B;*/
    
   /* cout<<"\nGet element 3,4 from matrix B:\n";   //ПОЛУЧЕНИЕ ЗАДАННОГО ЭЛЕМЕНТА МАТРИЦЫ
    cout<<B.getElement(3,4)<<endl;*/
  
   /* B=A;          //ПРИСВОЕНИЕ МАТРИЦЫ
   B.print();*/
    
  /* B.setElement(0, 0, 666);    //ЗАМЕНА ЗАДАННОГО ЭЛЕМЕНТА В МАТРИЦЕ
    B.print(); */
    
    
 /* bool  z=A==B;           //ПРОВЕРКА НА РАВЕНСТВО
    cout<<z<<endl;*/
  
    // B.transpose().print(); //ТРАНСПОНИРОВАНИЕ
    
  //cout << A.determinant()<<endl;
   // cout<<B.getChet()<<endl;
    return 0;
}

